
#pragma once

#include "Quads.h"
#include "Memory.h"
#include <string>

class VirtualMachine {
private:
    std::vector<Quadruple> &quadruples;
    Memory *memory; 
    VariableTable variableTable;

public:
    VirtualMachine(std::vector<Quadruple> &quads, Memory *mem)
        : quadruples(quads), memory(mem) {}

    void printQuadruples() {
        std::cout << "-----Quadruples-----" << std::endl;
        for (const auto& quadruple : quadruples) {
            std::cout << quadruple.num << "\t" << quadruple.operation << "\t" << quadruple.operand1 << "\t" << quadruple.operand2 << "\t" << quadruple.result << std::endl;
        }
    }

    void run() {
        printQuadruples();
    }
};