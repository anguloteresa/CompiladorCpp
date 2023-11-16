
// Generated from BabyDuck.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "BabyDuckParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BabyDuckParser.
 */
class  BabyDuckVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BabyDuckParser.
   */
    virtual std::any visitStart(BabyDuckParser::StartContext *context) = 0;

    virtual std::any visitPrograma(BabyDuckParser::ProgramaContext *context) = 0;

    virtual std::any visitVars(BabyDuckParser::VarsContext *context) = 0;

    virtual std::any visitList_vars(BabyDuckParser::List_varsContext *context) = 0;

    virtual std::any visitList_id(BabyDuckParser::List_idContext *context) = 0;

    virtual std::any visitId_prime(BabyDuckParser::Id_primeContext *context) = 0;

    virtual std::any visitType(BabyDuckParser::TypeContext *context) = 0;

    virtual std::any visitBody(BabyDuckParser::BodyContext *context) = 0;

    virtual std::any visitStatement(BabyDuckParser::StatementContext *context) = 0;

    virtual std::any visitAssign(BabyDuckParser::AssignContext *context) = 0;

    virtual std::any visitCondition(BabyDuckParser::ConditionContext *context) = 0;

    virtual std::any visitIf_stmt(BabyDuckParser::If_stmtContext *context) = 0;

    virtual std::any visitIf_cond(BabyDuckParser::If_condContext *context) = 0;

    virtual std::any visitIf_body(BabyDuckParser::If_bodyContext *context) = 0;

    virtual std::any visitIf_else_stmt(BabyDuckParser::If_else_stmtContext *context) = 0;

    virtual std::any visitTwo_if_cond(BabyDuckParser::Two_if_condContext *context) = 0;

    virtual std::any visitTwo_if_body(BabyDuckParser::Two_if_bodyContext *context) = 0;

    virtual std::any visitElse_stmt(BabyDuckParser::Else_stmtContext *context) = 0;

    virtual std::any visitCycle(BabyDuckParser::CycleContext *context) = 0;

    virtual std::any visitF_call(BabyDuckParser::F_callContext *context) = 0;

    virtual std::any visitList_expresion(BabyDuckParser::List_expresionContext *context) = 0;

    virtual std::any visitExpresion_prime(BabyDuckParser::Expresion_primeContext *context) = 0;

    virtual std::any visitPrint(BabyDuckParser::PrintContext *context) = 0;

    virtual std::any visitList_print(BabyDuckParser::List_printContext *context) = 0;

    virtual std::any visitPrintExp(BabyDuckParser::PrintExpContext *context) = 0;

    virtual std::any visitPrintString(BabyDuckParser::PrintStringContext *context) = 0;

    virtual std::any visitExprComp(BabyDuckParser::ExprCompContext *context) = 0;

    virtual std::any visitExpr(BabyDuckParser::ExprContext *context) = 0;

    virtual std::any visitExpSum(BabyDuckParser::ExpSumContext *context) = 0;

    virtual std::any visitTerm(BabyDuckParser::TermContext *context) = 0;

    virtual std::any visitExpRes(BabyDuckParser::ExpResContext *context) = 0;

    virtual std::any visitTermMul(BabyDuckParser::TermMulContext *context) = 0;

    virtual std::any visitTermDiv(BabyDuckParser::TermDivContext *context) = 0;

    virtual std::any visitFact(BabyDuckParser::FactContext *context) = 0;

    virtual std::any visitParenthesisExpr(BabyDuckParser::ParenthesisExprContext *context) = 0;

    virtual std::any visitUnaryMin(BabyDuckParser::UnaryMinContext *context) = 0;

    virtual std::any visitAtomId(BabyDuckParser::AtomIdContext *context) = 0;

    virtual std::any visitAtomCte(BabyDuckParser::AtomCteContext *context) = 0;

    virtual std::any visitFuncs(BabyDuckParser::FuncsContext *context) = 0;

    virtual std::any visitList_parameters(BabyDuckParser::List_parametersContext *context) = 0;

    virtual std::any visitParameter(BabyDuckParser::ParameterContext *context) = 0;

    virtual std::any visitParameter_prime(BabyDuckParser::Parameter_primeContext *context) = 0;

    virtual std::any visitFuncType(BabyDuckParser::FuncTypeContext *context) = 0;

    virtual std::any visitCte(BabyDuckParser::CteContext *context) = 0;

    virtual std::any visitComp(BabyDuckParser::CompContext *context) = 0;


};

