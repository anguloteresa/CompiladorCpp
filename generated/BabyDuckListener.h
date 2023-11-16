
// Generated from BabyDuck.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "BabyDuckParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BabyDuckParser.
 */
class  BabyDuckListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(BabyDuckParser::StartContext *ctx) = 0;
  virtual void exitStart(BabyDuckParser::StartContext *ctx) = 0;

  virtual void enterPrograma(BabyDuckParser::ProgramaContext *ctx) = 0;
  virtual void exitPrograma(BabyDuckParser::ProgramaContext *ctx) = 0;

  virtual void enterVars(BabyDuckParser::VarsContext *ctx) = 0;
  virtual void exitVars(BabyDuckParser::VarsContext *ctx) = 0;

  virtual void enterList_vars(BabyDuckParser::List_varsContext *ctx) = 0;
  virtual void exitList_vars(BabyDuckParser::List_varsContext *ctx) = 0;

  virtual void enterList_id(BabyDuckParser::List_idContext *ctx) = 0;
  virtual void exitList_id(BabyDuckParser::List_idContext *ctx) = 0;

  virtual void enterId_prime(BabyDuckParser::Id_primeContext *ctx) = 0;
  virtual void exitId_prime(BabyDuckParser::Id_primeContext *ctx) = 0;

  virtual void enterType(BabyDuckParser::TypeContext *ctx) = 0;
  virtual void exitType(BabyDuckParser::TypeContext *ctx) = 0;

  virtual void enterBody(BabyDuckParser::BodyContext *ctx) = 0;
  virtual void exitBody(BabyDuckParser::BodyContext *ctx) = 0;

  virtual void enterStatement(BabyDuckParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BabyDuckParser::StatementContext *ctx) = 0;

  virtual void enterAssign(BabyDuckParser::AssignContext *ctx) = 0;
  virtual void exitAssign(BabyDuckParser::AssignContext *ctx) = 0;

  virtual void enterCondition(BabyDuckParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(BabyDuckParser::ConditionContext *ctx) = 0;

  virtual void enterIf_stmt(BabyDuckParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(BabyDuckParser::If_stmtContext *ctx) = 0;

  virtual void enterIf_cond(BabyDuckParser::If_condContext *ctx) = 0;
  virtual void exitIf_cond(BabyDuckParser::If_condContext *ctx) = 0;

  virtual void enterIf_body(BabyDuckParser::If_bodyContext *ctx) = 0;
  virtual void exitIf_body(BabyDuckParser::If_bodyContext *ctx) = 0;

  virtual void enterIf_else_stmt(BabyDuckParser::If_else_stmtContext *ctx) = 0;
  virtual void exitIf_else_stmt(BabyDuckParser::If_else_stmtContext *ctx) = 0;

  virtual void enterTwo_if_cond(BabyDuckParser::Two_if_condContext *ctx) = 0;
  virtual void exitTwo_if_cond(BabyDuckParser::Two_if_condContext *ctx) = 0;

  virtual void enterTwo_if_body(BabyDuckParser::Two_if_bodyContext *ctx) = 0;
  virtual void exitTwo_if_body(BabyDuckParser::Two_if_bodyContext *ctx) = 0;

  virtual void enterElse_stmt(BabyDuckParser::Else_stmtContext *ctx) = 0;
  virtual void exitElse_stmt(BabyDuckParser::Else_stmtContext *ctx) = 0;

  virtual void enterCycle(BabyDuckParser::CycleContext *ctx) = 0;
  virtual void exitCycle(BabyDuckParser::CycleContext *ctx) = 0;

  virtual void enterF_call(BabyDuckParser::F_callContext *ctx) = 0;
  virtual void exitF_call(BabyDuckParser::F_callContext *ctx) = 0;

  virtual void enterList_expresion(BabyDuckParser::List_expresionContext *ctx) = 0;
  virtual void exitList_expresion(BabyDuckParser::List_expresionContext *ctx) = 0;

  virtual void enterExpresion_prime(BabyDuckParser::Expresion_primeContext *ctx) = 0;
  virtual void exitExpresion_prime(BabyDuckParser::Expresion_primeContext *ctx) = 0;

  virtual void enterPrint(BabyDuckParser::PrintContext *ctx) = 0;
  virtual void exitPrint(BabyDuckParser::PrintContext *ctx) = 0;

  virtual void enterList_print(BabyDuckParser::List_printContext *ctx) = 0;
  virtual void exitList_print(BabyDuckParser::List_printContext *ctx) = 0;

  virtual void enterPrintExp(BabyDuckParser::PrintExpContext *ctx) = 0;
  virtual void exitPrintExp(BabyDuckParser::PrintExpContext *ctx) = 0;

  virtual void enterPrintString(BabyDuckParser::PrintStringContext *ctx) = 0;
  virtual void exitPrintString(BabyDuckParser::PrintStringContext *ctx) = 0;

  virtual void enterExprComp(BabyDuckParser::ExprCompContext *ctx) = 0;
  virtual void exitExprComp(BabyDuckParser::ExprCompContext *ctx) = 0;

  virtual void enterExpr(BabyDuckParser::ExprContext *ctx) = 0;
  virtual void exitExpr(BabyDuckParser::ExprContext *ctx) = 0;

  virtual void enterExpSum(BabyDuckParser::ExpSumContext *ctx) = 0;
  virtual void exitExpSum(BabyDuckParser::ExpSumContext *ctx) = 0;

  virtual void enterTerm(BabyDuckParser::TermContext *ctx) = 0;
  virtual void exitTerm(BabyDuckParser::TermContext *ctx) = 0;

  virtual void enterExpRes(BabyDuckParser::ExpResContext *ctx) = 0;
  virtual void exitExpRes(BabyDuckParser::ExpResContext *ctx) = 0;

  virtual void enterTermMul(BabyDuckParser::TermMulContext *ctx) = 0;
  virtual void exitTermMul(BabyDuckParser::TermMulContext *ctx) = 0;

  virtual void enterTermDiv(BabyDuckParser::TermDivContext *ctx) = 0;
  virtual void exitTermDiv(BabyDuckParser::TermDivContext *ctx) = 0;

  virtual void enterFact(BabyDuckParser::FactContext *ctx) = 0;
  virtual void exitFact(BabyDuckParser::FactContext *ctx) = 0;

  virtual void enterParenthesisExpr(BabyDuckParser::ParenthesisExprContext *ctx) = 0;
  virtual void exitParenthesisExpr(BabyDuckParser::ParenthesisExprContext *ctx) = 0;

  virtual void enterUnaryMin(BabyDuckParser::UnaryMinContext *ctx) = 0;
  virtual void exitUnaryMin(BabyDuckParser::UnaryMinContext *ctx) = 0;

  virtual void enterAtomId(BabyDuckParser::AtomIdContext *ctx) = 0;
  virtual void exitAtomId(BabyDuckParser::AtomIdContext *ctx) = 0;

  virtual void enterAtomCte(BabyDuckParser::AtomCteContext *ctx) = 0;
  virtual void exitAtomCte(BabyDuckParser::AtomCteContext *ctx) = 0;

  virtual void enterFuncs(BabyDuckParser::FuncsContext *ctx) = 0;
  virtual void exitFuncs(BabyDuckParser::FuncsContext *ctx) = 0;

  virtual void enterList_parameters(BabyDuckParser::List_parametersContext *ctx) = 0;
  virtual void exitList_parameters(BabyDuckParser::List_parametersContext *ctx) = 0;

  virtual void enterParameter(BabyDuckParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(BabyDuckParser::ParameterContext *ctx) = 0;

  virtual void enterParameter_prime(BabyDuckParser::Parameter_primeContext *ctx) = 0;
  virtual void exitParameter_prime(BabyDuckParser::Parameter_primeContext *ctx) = 0;

  virtual void enterFuncType(BabyDuckParser::FuncTypeContext *ctx) = 0;
  virtual void exitFuncType(BabyDuckParser::FuncTypeContext *ctx) = 0;

  virtual void enterCte(BabyDuckParser::CteContext *ctx) = 0;
  virtual void exitCte(BabyDuckParser::CteContext *ctx) = 0;

  virtual void enterComp(BabyDuckParser::CompContext *ctx) = 0;
  virtual void exitComp(BabyDuckParser::CompContext *ctx) = 0;


};

