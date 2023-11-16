
// Generated from BabyDuck.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "BabyDuckVisitor.h"


/**
 * This class provides an empty implementation of BabyDuckVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BabyDuckBaseVisitor : public BabyDuckVisitor {
public:

  virtual std::any visitStart(BabyDuckParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrograma(BabyDuckParser::ProgramaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVars(BabyDuckParser::VarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_vars(BabyDuckParser::List_varsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_id(BabyDuckParser::List_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_prime(BabyDuckParser::Id_primeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(BabyDuckParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(BabyDuckParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(BabyDuckParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(BabyDuckParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(BabyDuckParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_stmt(BabyDuckParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_cond(BabyDuckParser::If_condContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_body(BabyDuckParser::If_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_else_stmt(BabyDuckParser::If_else_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTwo_if_cond(BabyDuckParser::Two_if_condContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTwo_if_body(BabyDuckParser::Two_if_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_stmt(BabyDuckParser::Else_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCycle(BabyDuckParser::CycleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitF_call(BabyDuckParser::F_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_expresion(BabyDuckParser::List_expresionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpresion_prime(BabyDuckParser::Expresion_primeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(BabyDuckParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_print(BabyDuckParser::List_printContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExp(BabyDuckParser::PrintExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintString(BabyDuckParser::PrintStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprComp(BabyDuckParser::ExprCompContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(BabyDuckParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpSum(BabyDuckParser::ExpSumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(BabyDuckParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpRes(BabyDuckParser::ExpResContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermMul(BabyDuckParser::TermMulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermDiv(BabyDuckParser::TermDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFact(BabyDuckParser::FactContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesisExpr(BabyDuckParser::ParenthesisExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryMin(BabyDuckParser::UnaryMinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomId(BabyDuckParser::AtomIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomCte(BabyDuckParser::AtomCteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncs(BabyDuckParser::FuncsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_parameters(BabyDuckParser::List_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(BabyDuckParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_prime(BabyDuckParser::Parameter_primeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncType(BabyDuckParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCte(BabyDuckParser::CteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComp(BabyDuckParser::CompContext *ctx) override {
    return visitChildren(ctx);
  }


};

