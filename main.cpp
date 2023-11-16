#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "generated/BabyDuckLexer.h"
#include "generated/BabyDuckParser.h"
#include "generated/BabyDuckListener.h"
#include "FunctionDirectory.h"
// #include "QuadruplesListener.h"
#include "CustomHash.h"
#include "SemanticAnalyzer.h"
#include "Memory.h"
// #include "Quadruples.h"
#include "VirtualMachine.h"
#include "Quads.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " input_file" << std::endl;
        return 1;
    }

    std::ifstream stream;
    stream.open(argv[1]);

    if (!stream.is_open()) {
        std::cerr << "Error: Could not open the input file." << std::endl;
        return 1;
    }
    
    ANTLRInputStream input(stream);
    BabyDuckLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    BabyDuckParser parser(&tokens);
    Memory memory;

    // Parse the input using the entry point of your grammar
    BabyDuckParser::StartContext* tree = parser.start();

    // function directory
    FunctionDirectory functionListener;
    // variable table
    VariableTable variableListener(&functionListener, &memory);
    // quadruple generator
    QuadGenerator quadruples(&memory);
    
    // functions
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&functionListener, tree);
    auto funcs = functionListener.getFunctionDirectory();
    // variables
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&variableListener, tree);
    // quadruples
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&quadruples, tree);
    auto quads = quadruples.get_quadruples();
    
    std::cout << "-----Functions-----" << std::endl;
    for (const auto &funcEntry : functionListener.getFunctionDirectory()) {
        std::cout << "Function Name: " << funcEntry.first << std::endl;
        std::cout << "Return Type: " << funcEntry.second.returnType << std::endl;
        std::cout << "Parameters" << std::endl;
        for (const auto &paramEntry : funcEntry.second.parameters) {
            std::cout << paramEntry.first << " : " << paramEntry.second << std::endl;
        }
        std::cout << "-------------------" << std::endl;
    }

    VirtualMachine vm(quads, &memory);

    // Run the Virtual Machine
    vm.run();

    //  print the tree as a string representation:
    // std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
