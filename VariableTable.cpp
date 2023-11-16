#include "Memory.h"
#include "VariableTable.h"
#include "FunctionDirectory.h"

void VariableTable::addToVariableTable(const std::string& name, const Variable& variable) {
    symbolTable[name] = variable;
}

void VariableTable::exitList_vars(BabyDuckParser::List_varsContext *ctx) {
    std::string type = ctx->type()->getText();
    std::string allIds = ctx->list_id()->getText();
    std::vector<std::string> ids;
    std::stringstream ss(allIds);
    std::string id;
    
    while (std::getline(ss, id, ',')) {
        if(symbolTable.find(id) != symbolTable.end()) {
            // La variable ya ha sido declarada
            std::cerr << "Error: Variable " << id << " has already been declared." << std::endl;
        } else {
            symbolTable[id].type = type;
            // std::cout << "Variable " << id << " declared successfully." << std::endl;
            addToMemory(id, type);
        }
    }

    Function& currentFunc = functionDirectory->getFunction(currentFunction);

    for (auto& variable : symbolTable) {
        currentFunc.variables.addToVariableTable(variable.first, variable.second);
    }
}

void VariableTable::addToMemory(std::string id, std::string type) {
    if (memory) {
        Variable* var = &symbolTable[id];
        // Check if memory is not null
        if (type == "int") {
            symbolTable[id].memory = intMem++;
            memory->pushInteger(id);
        } else if (type == "float") {
            symbolTable[id].memory = floatMem++;
            memory->pushFloat(id);
        } else if (type == "bool") {
            symbolTable[id].memory = boolMem++;
            memory->pushBool(id);
        } else {
            // Handle type mismatch error
            std::cerr << "Error: Type mismatch for variable " << id << std::endl;
        }
        // Add more cases for other types as needed
    }
}


void VariableTable::enterFuncs(BabyDuckParser::FuncsContext *ctx) { 
    currentScope = "local";
    currentFunction = ctx->Id()->getText();
}

void VariableTable::exitFuncs(BabyDuckParser::FuncsContext *ctx) {
    currentScope = "global";
    currentFunction = "global";
    intMem = 0;
    floatMem = 0;
    boolMem = 0;
}

void VariableTable::exitAssign(BabyDuckParser::AssignContext *ctx) {
        std::string varName = ctx->Id()->getText();
        // int value = std::stoi(ctx->expresion()->getText());

        if (symbolTable.find(varName) == symbolTable.end()) {
            std::cerr << "Error: Variable " << varName << " not declared." << std::endl;
        } else {
            // std::cout << "Can assign value correctly to var " << varName << std::endl;
            // Implement assign logic here
            // symbolTable[varName].value = value;
        }
    }