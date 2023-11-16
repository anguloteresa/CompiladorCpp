
#pragma once

#include "generated/BabyDuckBaseListener.h"
#include "Memory.h"
#include "VariableTable.h"
#include <unordered_map>
#include <iostream>
#include <vector>

struct Function {
    std::string returnType;
    std::unordered_map<std::string, std::string> parameters;
    VariableTable variables;
};

class FunctionDirectory : public BabyDuckBaseListener {
private:
    Function currentFunction;
    std::unordered_map<std::string, Function> functionDirectory;  // Mapa de nombre de función a FunctionInfo

public:
    FunctionDirectory() {
        currentFunction = {};
        currentFunction.returnType = "void";
        currentFunction.variables = VariableTable();
        functionDirectory["global"] = currentFunction;
    };

    Function& getCurrentFunction();
    Function& getFunction(std::string name);

    std::unordered_map<std::string, Function> getFunctionDirectory();
    virtual void enterFuncs(BabyDuckParser::FuncsContext *ctx) override;
    virtual void exitFuncs(BabyDuckParser::FuncsContext *ctx) override;
    virtual void enterParameter(BabyDuckParser::ParameterContext *ctx) override;
};
