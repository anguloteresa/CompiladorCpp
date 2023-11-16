
#pragma once

#include "generated/BabyDuckBaseListener.h"
#include "Memory.h"
#include "FunctionDirectory.h"
#include "SemanticAnalyzer.h"
#include <stack>
#include <vector>
#include <string>

// Define a Quadruple structure
struct Quadruple {
    int num;
    std::string operation;  // Operator
    std::string operand1;   // First operand
    std::string operand2;   // Second operand
    std::string result;     // Result
};

class QuadGenerator: public BabyDuckBaseListener {
private:
    // results stack
    int quadCount = 0;
    int tempCount = 0;
    int labelCount = 0;
    std::stack<float> int_stack;
    std::vector<Quadruple> quadruples;
    std::stack<std::string> operatorStack;
    std::stack<std::string> operandStack;
    std::stack<std::string> jumpStack;
    std::stack<std::string> typeStack;
    std::stack<std::string> labelStack;
    std::stack<std::string> loopStack;

    SemanticAnalyzer cube;
    void generateQuadruple(int num, const std::string& operation, const std::string& operand1, const std::string& operand2, const std::string& result);
    Memory* memory;
    Memory constants;
    std::string currentFunction = "global";
    FunctionDirectory* functionDirectory;
public:
    QuadGenerator(Memory* mm) : memory(mm) {

    }
    

    std::string get_result();
    std::vector<Quadruple>& get_quadruples();

    // expresion (compare)
    // virtual void exitExprComp(BabyDuckParser::ExprCompContext * ctx) override ;
    
    virtual void enterPrograma(BabyDuckParser::ProgramaContext * /*ctx*/) override {
    
    }

    // curr func tracking
    virtual void enterFuncs(BabyDuckParser::FuncsContext *ctx) override;
    virtual void exitFuncs(BabyDuckParser::FuncsContext *ctx) override;

    // Assigns
    virtual void enterAssign(BabyDuckParser::AssignContext * ctx) override;
    virtual void exitAssign(BabyDuckParser::AssignContext * ctx) override;

    // cycle
    virtual void enterCycle(BabyDuckParser::CycleContext * ctx) override ;
    virtual void exitCycle(BabyDuckParser::CycleContext * ctx) override ;

    // conditionals
    // single
    virtual void exitIf_cond(BabyDuckParser::If_condContext * /*ctx*/) override;
    virtual void exitIf_body(BabyDuckParser::If_bodyContext * /*ctx*/) override;
    // two-way
    virtual void exitTwo_if_cond(BabyDuckParser::Two_if_condContext * /*ctx*/) override;
    virtual void exitTwo_if_body(BabyDuckParser::Two_if_bodyContext * /*ctx*/) override;
    virtual void exitElse_stmt(BabyDuckParser::Else_stmtContext * /*ctx*/) override;

    // Print
    virtual void exitPrintExp(BabyDuckParser::PrintExpContext * /*ctx*/) override;
    virtual void exitPrintString(BabyDuckParser::PrintStringContext * /*ctx*/) override;

    // void exitIfCond(BabyDuckParser::IfCondContext * ctx) override;
    // void exitIfElseCond(BabyDuckParser::IfElseCondContext * ctx) override;

    // Expresion
    // virtual void enterComp(BabyDuckParser::CompContext * ctx) override;
    // virtual void exitComp(BabyDuckParser::CompContext * ctx) override;
    virtual void enterExprComp(BabyDuckParser::ExprCompContext * /*ctx*/) override;
    virtual void exitExprComp(BabyDuckParser::ExprCompContext * /*ctx*/) override;


    // Exp
    virtual void enterExpSum(BabyDuckParser::ExpSumContext * ctx) override;
    virtual void exitExpSum(BabyDuckParser::ExpSumContext * ctx) override;

    virtual void enterExpRes(BabyDuckParser::ExpResContext * ctx) override;
    virtual void exitExpRes(BabyDuckParser::ExpResContext * ctx) override;

    virtual void enterTermMul(BabyDuckParser::TermMulContext * /*ctx*/) override;
    virtual void exitTermMul(BabyDuckParser::TermMulContext * ctx) override;

    virtual void enterTermDiv(BabyDuckParser::TermDivContext * /*ctx*/) override;
    virtual void exitTermDiv(BabyDuckParser::TermDivContext * ctx) override;

    virtual void enterUnaryMin(BabyDuckParser::UnaryMinContext * ctx) override;
    virtual void exitUnaryMin(BabyDuckParser::UnaryMinContext * ctx) override;
    virtual void exitAtomId(BabyDuckParser::AtomIdContext * ctx) override;
    virtual void exitAtomCte(BabyDuckParser::AtomCteContext * ctx) override;
};
