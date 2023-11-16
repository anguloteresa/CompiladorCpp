
#pragma once

#include <tuple>
#include <unordered_map>
#include <stdexcept>
#include <iostream>
#include "CustomHash.h"

class SemanticAnalyzer {
private:
    std::unordered_map<std::tuple<std::string, std::string, std::string>, std::string> semanticCube;
public:
    SemanticAnalyzer() {
        // Para números
        // Suma
        semanticCube[std::make_tuple("int", "+", "int")] = "int";
        semanticCube[std::make_tuple("float", "+", "float")] = "float";
        semanticCube[std::make_tuple("int", "+", "float")] = "float";
        semanticCube[std::make_tuple("float", "+", "int")] = "float";
        // Resta
        semanticCube[std::make_tuple("int", "-", "int")] = "int";
        semanticCube[std::make_tuple("float", "-", "float")] = "float";
        semanticCube[std::make_tuple("int", "-", "float")] = "float";
        semanticCube[std::make_tuple("float", "-", "int")] = "float";
        // Multiplicación
        semanticCube[std::make_tuple("int", "*", "int")] = "int";
        semanticCube[std::make_tuple("float", "*", "float")] = "float";
        semanticCube[std::make_tuple("int", "*", "float")] = "float";
        semanticCube[std::make_tuple("float", "*", "int")] = "float";
        // División
        semanticCube[std::make_tuple("int", "/", "int")] = "int";
        semanticCube[std::make_tuple("float", "/", "float")] = "float";
        semanticCube[std::make_tuple("int", "/", "float")] = "float";
        semanticCube[std::make_tuple("float", "/", "int")] = "float";
        // Mayor que
        semanticCube[std::make_tuple("int", ">", "int")] = "bool";
        semanticCube[std::make_tuple("float", ">", "float")] = "bool";
        semanticCube[std::make_tuple("int", ">", "float")] = "bool";
        semanticCube[std::make_tuple("float", ">", "int")] = "bool";
        // Menor que
        semanticCube[std::make_tuple("int", "<", "int")] = "bool";
        semanticCube[std::make_tuple("float", "<", "float")] = "bool";
        semanticCube[std::make_tuple("int", "<", "float")] = "bool";
        semanticCube[std::make_tuple("float", "<", "int")] = "bool";
        // Distinto que
        semanticCube[std::make_tuple("int", "!=", "int")] = "bool";
        semanticCube[std::make_tuple("float", "!=", "float")] = "bool";
        semanticCube[std::make_tuple("int", "!=", "float")] = "bool";
        semanticCube[std::make_tuple("float", "!=", "int")] = "bool";
        // Para strings
        semanticCube[std::make_tuple("string", "+", "string")] = "string";
        semanticCube[std::make_tuple("string", "!=", "string")] = "bool";
    }

    std::string checkCube(const std::string& type1, const std::string& op, const std::string& type2) {
        auto it = semanticCube.find(std::make_tuple(type1, op, type2));
        if (it != semanticCube.end()) {
            return it->second;
        } else {
            throw std::runtime_error("Error: Incompatible types (" + type1 + ", " + type2 + ") for operation '" + op + "'.");
        }
    }
};