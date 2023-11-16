
#include "FunctionDirectory.h"


std::unordered_map<std::string, Function> FunctionDirectory::getFunctionDirectory() {
    return functionDirectory;
}

Function& FunctionDirectory::getCurrentFunction() {
    return currentFunction;
}

Function& FunctionDirectory::getFunction(std::string funcName) {
    return functionDirectory[funcName];
}

void FunctionDirectory::enterFuncs(BabyDuckParser::FuncsContext *ctx) {
    currentFunction = {};
    currentFunction.returnType = ctx->funcType()->getText();
    currentFunction.variables = VariableTable();
}

void FunctionDirectory::exitFuncs(BabyDuckParser::FuncsContext *ctx) {
    std::string functionName = ctx->Id()->getText();
    if (functionDirectory.find(functionName) != functionDirectory.end()) {
        std::cerr << "Error: Function " << functionName << " already declared." << std::endl;
        // throw std::runtime_error("Error: Function " + functionName + " already declared in the directory.");
    } else {
        functionDirectory[functionName] = currentFunction;
        std::cout << "Added function " << functionName << " to directory." << std::endl;
    }
}

void FunctionDirectory::enterParameter(BabyDuckParser::ParameterContext *ctx) {
    std::string paramName = ctx->Id()->getText();
    std::string paramType = ctx->type()->getText();
    currentFunction.parameters[paramName] = paramType;
}

