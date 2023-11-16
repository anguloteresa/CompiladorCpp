
#pragma once
#include <unordered_map>
#include <string>
#include "VariableTable.h"

class Memory {
private:
    std::unordered_map<std::string, int> integers;
    std::unordered_map<std::string, int> floats;
    std::unordered_map<std::string, int> booleans;
    int intCount = 0;
    int floatCount = 0;
    int boolCount = 0;
public:
    Memory() {};

    // std::variant<int, float, std::string> getValue(const std::string& name, const std::string& type) {
    //     if (type == "int") {
    //         return integers[name];
    //     } else if (type == "float") {
    //         return floats[name];
    //     } else if (type == "bool") {
    //         return booleans[name];
    //     }
    // }

    // void setValue(const std::string& name, const std::string& type, const std::variant<int, float, std::string>& value) {
    //     if (type == "int") {
    //         integers[name] = std::get<int>(value);
    //     } else if (type == "float") {
    //         floats[name] = std::get<float>(value);
    //     } else if (type == "bool") {
    //         booleans[name] = std::get<bool>(value);
    //     }
    // }
    
    void pushInteger(const std::string& name) {
        integers[name] = intCount++;
    }

    void pushFloat(const std::string& name) {
        floats[name] = floatCount++;
    }

    void pushBool(const std::string& name) {
        booleans[name] = boolCount++;
    }

    int getIntVariable(const std::string& name) {
        // You might want to add error handling if the variable is not found
        return integers[name];
    }

    float getFloatVariable(const std::string& name) {
        // You might want to add error handling if the variable is not found
        return floats[name];
    }

    bool getBoolVariable(const std::string& name) {
        // You might want to add error handling if the variable is not found
        return booleans[name];
    }

    std::unordered_map<std::string, int> getIntegers() {
        return integers;
    }

    std::unordered_map<std::string, int> getFloats() {
        return integers;
    }

    std::unordered_map<std::string, int> getBools() {
        return integers;
    }
};
