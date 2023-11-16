
#include "Quads.h"
#include "Memory.h"

// General funcs
std::string QuadGenerator::get_result() {
    return operandStack.top();
}

std::vector<Quadruple>& QuadGenerator::get_quadruples() {
    return quadruples;
}

void QuadGenerator::generateQuadruple(int num, const std::string& oper, const std::string& op1, const std::string& op2, const std::string& res) {
    // std::cout << "gen q " << std::endl;
    Quadruple quadruple = {num, oper, op1, op2, res};
    quadruples.push_back(quadruple);
}

// Functions
void QuadGenerator::enterFuncs(BabyDuckParser::FuncsContext *ctx) { 
    // std::cout << "enter func " << std::endl;
    currentFunction = ctx->Id()->getText();
}

void QuadGenerator::exitFuncs(BabyDuckParser::FuncsContext *ctx) {
    // std::cout << "exit func " << std::endl;
    currentFunction = "global";
}

// Assign
void QuadGenerator::enterAssign(BabyDuckParser::AssignContext * ctx) {
    // std::cout << "enter assign " << std::endl;
    operatorStack.push("=");
}

void QuadGenerator::exitAssign(BabyDuckParser::AssignContext *ctx) {
    // std::cout << "Exit Assignment" << std::endl;
    // std::cout << operatorStack.top() << std::endl;

    std::string var = ctx->Id()->getText(); 
    if (!operandStack.empty() && !operatorStack.empty() && operatorStack.top() == "=") {
        std::string res = operandStack.top();
        operandStack.pop();
        operatorStack.pop();
        generateQuadruple(quadCount++, "=", res, "", var);
    }
}

// conditionals
void QuadGenerator::exitIf_cond(BabyDuckParser::If_condContext * /*ctx*/) {
    // std::cout << "Exit IF-COND" << std::endl;
    std::string res = operandStack.top();
    operandStack.pop();
    std::string endIfLabel = "label" + std::to_string(labelCount++);
    generateQuadruple(quadCount++, "gotoF", res, "", endIfLabel);
    jumpStack.push(endIfLabel);
}

void QuadGenerator::exitIf_body(BabyDuckParser::If_bodyContext * /*ctx*/) {
    // std::cout << "Exit IF-BODY" << std::endl;
    std::string currLabel = jumpStack.top();
    jumpStack.pop();
    generateQuadruple(quadCount++, "label", "", "", currLabel);
}

void QuadGenerator::exitTwo_if_cond(BabyDuckParser::Two_if_condContext * /*ctx*/) {
    // std::cout << "Exit TWO-IF-COND" << std::endl;
    std::string res = operandStack.top();
    operandStack.pop();
    std::string endIfLabel = "label" + std::to_string(labelCount++);
    generateQuadruple(quadCount++, "gotoF", res, "", endIfLabel);
    jumpStack.push(endIfLabel);
}

void QuadGenerator::exitTwo_if_body(BabyDuckParser::Two_if_bodyContext * /*ctx*/) {
    // std::cout << "Exit Two-IF-BODY" << std::endl;
    std::string currLabel = jumpStack.top();
    jumpStack.pop();
    generateQuadruple(quadCount++, "label", "", "", currLabel);
    std::string goToEndIf = "label" + std::to_string(labelCount++);
    generateQuadruple(quadCount++, "goto", "", "", goToEndIf);
    jumpStack.push(goToEndIf);

}

void QuadGenerator::exitElse_stmt(BabyDuckParser::Else_stmtContext * /*ctx*/) {
    // std::cout << "Exit ELSE-BODY" << std::endl;
    std::string currLabel = jumpStack.top();
    jumpStack.pop();
    generateQuadruple(quadCount++, "label", "", "", currLabel);
}


// cycle
void QuadGenerator::enterCycle(BabyDuckParser::CycleContext * ctx) {
    std::string startLoopLabel = "label" + std::to_string(labelCount++);
    generateQuadruple(quadCount++, "label", startLoopLabel, "", "");
    loopStack.push(startLoopLabel); // Push this label to be used for jumping back at the end of the loop
}

void QuadGenerator::exitCycle(BabyDuckParser::CycleContext * ctx) {
    std::string conditionResult = operandStack.top();
    operandStack.pop();
    std::string endLoopLabel = "label" + std::to_string(labelCount++);

    generateQuadruple(quadCount++, "gotoT", conditionResult, "", loopStack.top());
    generateQuadruple(quadCount++, "label", endLoopLabel, "", "");

    loopStack.pop(); // Pop the start loop label as we are exiting the loop
}


// Print
void QuadGenerator::exitPrintExp(BabyDuckParser::PrintExpContext * ctx) {
    std::string result = operandStack.top();
    operandStack.pop();
    generateQuadruple(quadCount++, "print", result, "", "");
}

void QuadGenerator::exitPrintString(BabyDuckParser::PrintStringContext * ctx) {
    std::string str = ctx->Cte_string()->getText();
    generateQuadruple(quadCount++, "print", str, "", "");
}

// Expresion
// oneway
void QuadGenerator::enterExprComp(BabyDuckParser::ExprCompContext * ctx) {
    std::string oper = ctx->comp()->getText(); 
    operatorStack.push(oper);
}

void QuadGenerator::exitExprComp(BabyDuckParser::ExprCompContext * ctx) {
    std::string op2 = operandStack.top();
    operandStack.pop();
    std::string op1 = operandStack.top();
    operandStack.pop();
    std::string oper = operatorStack.top();
    operatorStack.pop();
    std::string res = "temp" + std::to_string(tempCount++) + "b";
    generateQuadruple(quadCount++, oper, op1, op2, res);
    operandStack.push(res); // Push the result of the comparison for further use
}



// Exp
void QuadGenerator::enterExpSum(BabyDuckParser::ExpSumContext * ctx) {
    // std::cout << "enter expsum " << std::endl;
    operatorStack.push("+");
}

void QuadGenerator::exitExpSum(BabyDuckParser::ExpSumContext * ctx) {
    // std::cout << "exit sum " << std::endl;
    // std::cout << operatorStack.top() << std::endl;

    if (!operatorStack.empty() && operatorStack.top() == "+") {  //also check for -
        std::string op2 = operandStack.top();
        operandStack.pop();
        std::string op1 = operandStack.top();
        operandStack.pop();
        std::string oper = operatorStack.top();
        operatorStack.pop();
        std::string res = "temp" + std::to_string(tempCount++);
        generateQuadruple(quadCount++, oper, op1, op2, res);
        operandStack.push(res);
    }
}

void QuadGenerator::enterExpRes(BabyDuckParser::ExpResContext * ctx) {
    // std::cout << "enter res " << std::endl;
    operatorStack.push("-");
}

void QuadGenerator::exitExpRes(BabyDuckParser::ExpResContext * ctx) {
    // std::cout << "exit res " << std::endl;
    // std::cout << operatorStack.top() << std::endl;

    if (!operatorStack.empty() && operatorStack.top() == "-") {  //also check for -
        std::string op2 = operandStack.top();
        operandStack.pop();
        std::string op1 = operandStack.top();
        operandStack.pop();
        std::string oper = operatorStack.top();
        operatorStack.pop();
        std::string res = "temp" + std::to_string(tempCount++);
        generateQuadruple(quadCount++, oper, op1, op2, res);
        operandStack.push(res);
    }
}

void QuadGenerator::enterTermMul(BabyDuckParser::TermMulContext * ctx) {
    // std::cout << "enter mul " << std::endl;
    operatorStack.push("*");
}

void QuadGenerator::exitTermMul(BabyDuckParser::TermMulContext * ctx) {
    // std::cout << "exit mul " << std::endl;
    // std::cout << operatorStack.top() << std::endl;

    if (!operatorStack.empty() && operatorStack.top() == "*") {  //also check for -
        std::string op2 = operandStack.top();
        operandStack.pop();
        std::string op1 = operandStack.top();
        operandStack.pop();
        std::string oper = operatorStack.top();
        operatorStack.pop();
        std::string res = "temp" + std::to_string(tempCount++);
        generateQuadruple(quadCount++, oper, op1, op2, res);
        operandStack.push(res);
    }
}

void QuadGenerator::enterTermDiv(BabyDuckParser::TermDivContext * ctx) {
    // std::cout << "enter div " << std::endl;
    operatorStack.push("/");
}

void QuadGenerator::exitTermDiv(BabyDuckParser::TermDivContext * ctx) {
    // std::cout << "ex d " << std::endl;
    // std::cout << operatorStack.top() << std::endl;

    if (!operatorStack.empty() && operatorStack.top() == "/") {  //also check for -
        std::string op2 = operandStack.top();
        operandStack.pop();
        std::string op1 = operandStack.top();
        operandStack.pop();
        std::string oper = operatorStack.top();
        operatorStack.pop();
        std::string res = "temp" + std::to_string(tempCount++);
        generateQuadruple(quadCount++, oper, op1, op2, res);
        operandStack.push(res);
    }
}

void QuadGenerator::enterUnaryMin(BabyDuckParser::UnaryMinContext * ctx) {
    // std::cout << "Enter Unary Min" << std::endl;
    operatorStack.push("u-"); // Use a distinct identifier for unary minus
}

void QuadGenerator::exitUnaryMin(BabyDuckParser::UnaryMinContext * ctx) {
    // std::cout << "Exit Unary Min" << std::endl;
    // std::cout << operatorStack.top() << std::endl;

    if (!operandStack.empty()) {
        std::string operand = operandStack.top();
        operandStack.pop();
        std::string oper = operatorStack.top();
        operatorStack.pop();
        std::string res = "temp" + std::to_string(tempCount++);
        generateQuadruple(quadCount++, oper, operand, "", res);
        operandStack.push(res);
    }
}

void QuadGenerator::exitAtomId(BabyDuckParser::AtomIdContext * ctx) {
    std::string val = ctx->Id()->getText();
    // std::cout << "got func " << std::endl;
    // Function& currentFunc = functionDirectory->getFunction(currentFunction);
    // std::cout << "got func " << std::endl;
    operandStack.push(val);
};

void QuadGenerator::exitAtomCte(BabyDuckParser::AtomCteContext * ctx) {
    std::string val = ctx->cte()->getText();
    // std::cout << "got func " << std::endl;
    // Function& currentFunc = functionDirectory->getFunction(currentFunction);
    // std::cout << "got func " << std::endl;
    operandStack.push(val);
};
