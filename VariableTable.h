
#pragma once

#include "generated/BabyDuckBaseListener.h"
#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>

class Memory;
class FunctionDirectory;

struct Variable {
    std::string type;
    std::variant<int, float, std::string> value;
    int memory;
};

class VariableTable : public BabyDuckBaseListener {
private:
    std::string currentScope = "global";
    std::string currentFunction = "global";

    FunctionDirectory* functionDirectory;
    Memory* memory;
    std::unordered_map<std::string, Variable> symbolTable;
    int intMem = 0;
    int floatMem = 0;
    int boolMem = 0;

public:
    VariableTable() : functionDirectory(nullptr), memory(nullptr) {}

    VariableTable(FunctionDirectory* fd) : functionDirectory(fd), memory(nullptr) {}

    VariableTable(FunctionDirectory* fd, Memory* mm) : functionDirectory(fd), memory(mm) {}

    void addToVariableTable(const std::string& name, const Variable& variable);

    std::unordered_map<std::string, Variable> getSymbolTable() {
        return symbolTable;
    }

    Variable getVariable(std::string id) {
        return symbolTable[id];
    }

    std::string getType(const std::string& variableName) {
        auto it = symbolTable.find(variableName);
        if (it != symbolTable.end()) {
            return it->second.type;  // Return the type of the variable
        } else {
            throw std::runtime_error("Variable not found: " + variableName);
        }
    }

    void addToMemory(std::string id, std::string type);

    virtual void exitList_vars(BabyDuckParser::List_varsContext *ctx) override;
    virtual void enterFuncs(BabyDuckParser::FuncsContext *ctx) override;
    virtual void exitFuncs(BabyDuckParser::FuncsContext *ctx) override;
    virtual void exitAssign(BabyDuckParser::AssignContext *ctx) override;
};
