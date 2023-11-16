
// Generated from BabyDuck.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "BabyDuckListener.h"


/**
 * This class provides an empty implementation of BabyDuckListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BabyDuckBaseListener : public BabyDuckListener {
public:

  virtual void enterStart(BabyDuckParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(BabyDuckParser::StartContext * /*ctx*/) override { }

  virtual void enterPrograma(BabyDuckParser::ProgramaContext * /*ctx*/) override { }
  virtual void exitPrograma(BabyDuckParser::ProgramaContext * /*ctx*/) override { }

  virtual void enterVars(BabyDuckParser::VarsContext * /*ctx*/) override { }
  virtual void exitVars(BabyDuckParser::VarsContext * /*ctx*/) override { }

  virtual void enterList_vars(BabyDuckParser::List_varsContext * /*ctx*/) override { }
  virtual void exitList_vars(BabyDuckParser::List_varsContext * /*ctx*/) override { }

  virtual void enterList_id(BabyDuckParser::List_idContext * /*ctx*/) override { }
  virtual void exitList_id(BabyDuckParser::List_idContext * /*ctx*/) override { }

  virtual void enterId_prime(BabyDuckParser::Id_primeContext * /*ctx*/) override { }
  virtual void exitId_prime(BabyDuckParser::Id_primeContext * /*ctx*/) override { }

  virtual void enterType(BabyDuckParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(BabyDuckParser::TypeContext * /*ctx*/) override { }

  virtual void enterBody(BabyDuckParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(BabyDuckParser::BodyContext * /*ctx*/) override { }

  virtual void enterStatement(BabyDuckParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BabyDuckParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssign(BabyDuckParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(BabyDuckParser::AssignContext * /*ctx*/) override { }

  virtual void enterCondition(BabyDuckParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(BabyDuckParser::ConditionContext * /*ctx*/) override { }

  virtual void enterIf_stmt(BabyDuckParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(BabyDuckParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterIf_cond(BabyDuckParser::If_condContext * /*ctx*/) override { }
  virtual void exitIf_cond(BabyDuckParser::If_condContext * /*ctx*/) override { }

  virtual void enterIf_body(BabyDuckParser::If_bodyContext * /*ctx*/) override { }
  virtual void exitIf_body(BabyDuckParser::If_bodyContext * /*ctx*/) override { }

  virtual void enterIf_else_stmt(BabyDuckParser::If_else_stmtContext * /*ctx*/) override { }
  virtual void exitIf_else_stmt(BabyDuckParser::If_else_stmtContext * /*ctx*/) override { }

  virtual void enterTwo_if_cond(BabyDuckParser::Two_if_condContext * /*ctx*/) override { }
  virtual void exitTwo_if_cond(BabyDuckParser::Two_if_condContext * /*ctx*/) override { }

  virtual void enterTwo_if_body(BabyDuckParser::Two_if_bodyContext * /*ctx*/) override { }
  virtual void exitTwo_if_body(BabyDuckParser::Two_if_bodyContext * /*ctx*/) override { }

  virtual void enterElse_stmt(BabyDuckParser::Else_stmtContext * /*ctx*/) override { }
  virtual void exitElse_stmt(BabyDuckParser::Else_stmtContext * /*ctx*/) override { }

  virtual void enterCycle(BabyDuckParser::CycleContext * /*ctx*/) override { }
  virtual void exitCycle(BabyDuckParser::CycleContext * /*ctx*/) override { }

  virtual void enterF_call(BabyDuckParser::F_callContext * /*ctx*/) override { }
  virtual void exitF_call(BabyDuckParser::F_callContext * /*ctx*/) override { }

  virtual void enterList_expresion(BabyDuckParser::List_expresionContext * /*ctx*/) override { }
  virtual void exitList_expresion(BabyDuckParser::List_expresionContext * /*ctx*/) override { }

  virtual void enterExpresion_prime(BabyDuckParser::Expresion_primeContext * /*ctx*/) override { }
  virtual void exitExpresion_prime(BabyDuckParser::Expresion_primeContext * /*ctx*/) override { }

  virtual void enterPrint(BabyDuckParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(BabyDuckParser::PrintContext * /*ctx*/) override { }

  virtual void enterList_print(BabyDuckParser::List_printContext * /*ctx*/) override { }
  virtual void exitList_print(BabyDuckParser::List_printContext * /*ctx*/) override { }

  virtual void enterPrintExp(BabyDuckParser::PrintExpContext * /*ctx*/) override { }
  virtual void exitPrintExp(BabyDuckParser::PrintExpContext * /*ctx*/) override { }

  virtual void enterPrintString(BabyDuckParser::PrintStringContext * /*ctx*/) override { }
  virtual void exitPrintString(BabyDuckParser::PrintStringContext * /*ctx*/) override { }

  virtual void enterExprComp(BabyDuckParser::ExprCompContext * /*ctx*/) override { }
  virtual void exitExprComp(BabyDuckParser::ExprCompContext * /*ctx*/) override { }

  virtual void enterExpr(BabyDuckParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(BabyDuckParser::ExprContext * /*ctx*/) override { }

  virtual void enterExpSum(BabyDuckParser::ExpSumContext * /*ctx*/) override { }
  virtual void exitExpSum(BabyDuckParser::ExpSumContext * /*ctx*/) override { }

  virtual void enterTerm(BabyDuckParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(BabyDuckParser::TermContext * /*ctx*/) override { }

  virtual void enterExpRes(BabyDuckParser::ExpResContext * /*ctx*/) override { }
  virtual void exitExpRes(BabyDuckParser::ExpResContext * /*ctx*/) override { }

  virtual void enterTermMul(BabyDuckParser::TermMulContext * /*ctx*/) override { }
  virtual void exitTermMul(BabyDuckParser::TermMulContext * /*ctx*/) override { }

  virtual void enterTermDiv(BabyDuckParser::TermDivContext * /*ctx*/) override { }
  virtual void exitTermDiv(BabyDuckParser::TermDivContext * /*ctx*/) override { }

  virtual void enterFact(BabyDuckParser::FactContext * /*ctx*/) override { }
  virtual void exitFact(BabyDuckParser::FactContext * /*ctx*/) override { }

  virtual void enterParenthesisExpr(BabyDuckParser::ParenthesisExprContext * /*ctx*/) override { }
  virtual void exitParenthesisExpr(BabyDuckParser::ParenthesisExprContext * /*ctx*/) override { }

  virtual void enterUnaryMin(BabyDuckParser::UnaryMinContext * /*ctx*/) override { }
  virtual void exitUnaryMin(BabyDuckParser::UnaryMinContext * /*ctx*/) override { }

  virtual void enterAtomId(BabyDuckParser::AtomIdContext * /*ctx*/) override { }
  virtual void exitAtomId(BabyDuckParser::AtomIdContext * /*ctx*/) override { }

  virtual void enterAtomCte(BabyDuckParser::AtomCteContext * /*ctx*/) override { }
  virtual void exitAtomCte(BabyDuckParser::AtomCteContext * /*ctx*/) override { }

  virtual void enterFuncs(BabyDuckParser::FuncsContext * /*ctx*/) override { }
  virtual void exitFuncs(BabyDuckParser::FuncsContext * /*ctx*/) override { }

  virtual void enterList_parameters(BabyDuckParser::List_parametersContext * /*ctx*/) override { }
  virtual void exitList_parameters(BabyDuckParser::List_parametersContext * /*ctx*/) override { }

  virtual void enterParameter(BabyDuckParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(BabyDuckParser::ParameterContext * /*ctx*/) override { }

  virtual void enterParameter_prime(BabyDuckParser::Parameter_primeContext * /*ctx*/) override { }
  virtual void exitParameter_prime(BabyDuckParser::Parameter_primeContext * /*ctx*/) override { }

  virtual void enterFuncType(BabyDuckParser::FuncTypeContext * /*ctx*/) override { }
  virtual void exitFuncType(BabyDuckParser::FuncTypeContext * /*ctx*/) override { }

  virtual void enterCte(BabyDuckParser::CteContext * /*ctx*/) override { }
  virtual void exitCte(BabyDuckParser::CteContext * /*ctx*/) override { }

  virtual void enterComp(BabyDuckParser::CompContext * /*ctx*/) override { }
  virtual void exitComp(BabyDuckParser::CompContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

