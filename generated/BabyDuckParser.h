
// Generated from BabyDuck.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BabyDuckParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, Cte_int = 23, Cte_float = 24, Cte_string = 25, 
    Id = 26, Sum = 27, Res = 28, Mul = 29, Div = 30, LessThan = 31, MoreThan = 32, 
    DiffThan = 33, WS = 34, DIGIT = 35, LETTER = 36
  };

  enum {
    RuleStart = 0, RulePrograma = 1, RuleVars = 2, RuleList_vars = 3, RuleList_id = 4, 
    RuleId_prime = 5, RuleType = 6, RuleBody = 7, RuleStatement = 8, RuleAssign = 9, 
    RuleCondition = 10, RuleIf_stmt = 11, RuleIf_cond = 12, RuleIf_body = 13, 
    RuleIf_else_stmt = 14, RuleTwo_if_cond = 15, RuleTwo_if_body = 16, RuleElse_stmt = 17, 
    RuleCycle = 18, RuleF_call = 19, RuleList_expresion = 20, RuleExpresion_prime = 21, 
    RulePrint = 22, RuleList_print = 23, RulePrint_element = 24, RuleExpresion = 25, 
    RuleExp = 26, RuleTermino = 27, RuleFactor = 28, RuleFuncs = 29, RuleList_parameters = 30, 
    RuleParameter = 31, RuleParameter_prime = 32, RuleFuncType = 33, RuleCte = 34, 
    RuleComp = 35
  };

  explicit BabyDuckParser(antlr4::TokenStream *input);

  BabyDuckParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BabyDuckParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class ProgramaContext;
  class VarsContext;
  class List_varsContext;
  class List_idContext;
  class Id_primeContext;
  class TypeContext;
  class BodyContext;
  class StatementContext;
  class AssignContext;
  class ConditionContext;
  class If_stmtContext;
  class If_condContext;
  class If_bodyContext;
  class If_else_stmtContext;
  class Two_if_condContext;
  class Two_if_bodyContext;
  class Else_stmtContext;
  class CycleContext;
  class F_callContext;
  class List_expresionContext;
  class Expresion_primeContext;
  class PrintContext;
  class List_printContext;
  class Print_elementContext;
  class ExpresionContext;
  class ExpContext;
  class TerminoContext;
  class FactorContext;
  class FuncsContext;
  class List_parametersContext;
  class ParameterContext;
  class Parameter_primeContext;
  class FuncTypeContext;
  class CteContext;
  class CompContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramaContext *programa();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    BodyContext *body();
    VarsContext *vars();
    std::vector<FuncsContext *> funcs();
    FuncsContext* funcs(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramaContext* programa();

  class  VarsContext : public antlr4::ParserRuleContext {
  public:
    VarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<List_varsContext *> list_vars();
    List_varsContext* list_vars(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarsContext* vars();

  class  List_varsContext : public antlr4::ParserRuleContext {
  public:
    List_varsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_idContext *list_id();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_varsContext* list_vars();

  class  List_idContext : public antlr4::ParserRuleContext {
  public:
    List_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    Id_primeContext *id_prime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_idContext* list_id();

  class  Id_primeContext : public antlr4::ParserRuleContext {
  public:
    Id_primeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_idContext *list_id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_primeContext* id_prime();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyContext* body();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignContext *assign();
    ConditionContext *condition();
    CycleContext *cycle();
    F_callContext *f_call();
    PrintContext *print();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    ExpresionContext *expresion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_stmtContext *if_stmt();
    If_else_stmtContext *if_else_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_condContext *if_cond();
    If_bodyContext *if_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  If_condContext : public antlr4::ParserRuleContext {
  public:
    If_condContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_condContext* if_cond();

  class  If_bodyContext : public antlr4::ParserRuleContext {
  public:
    If_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_bodyContext* if_body();

  class  If_else_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_else_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Two_if_condContext *two_if_cond();
    Two_if_bodyContext *two_if_body();
    Else_stmtContext *else_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_else_stmtContext* if_else_stmt();

  class  Two_if_condContext : public antlr4::ParserRuleContext {
  public:
    Two_if_condContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Two_if_condContext* two_if_cond();

  class  Two_if_bodyContext : public antlr4::ParserRuleContext {
  public:
    Two_if_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Two_if_bodyContext* two_if_body();

  class  Else_stmtContext : public antlr4::ParserRuleContext {
  public:
    Else_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_stmtContext* else_stmt();

  class  CycleContext : public antlr4::ParserRuleContext {
  public:
    CycleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();
    ExpresionContext *expresion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CycleContext* cycle();

  class  F_callContext : public antlr4::ParserRuleContext {
  public:
    F_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    List_expresionContext *list_expresion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  F_callContext* f_call();

  class  List_expresionContext : public antlr4::ParserRuleContext {
  public:
    List_expresionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpresionContext *expresion();
    Expresion_primeContext *expresion_prime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_expresionContext* list_expresion();

  class  Expresion_primeContext : public antlr4::ParserRuleContext {
  public:
    Expresion_primeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_expresionContext *list_expresion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expresion_primeContext* expresion_prime();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_printContext *list_print();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  List_printContext : public antlr4::ParserRuleContext {
  public:
    List_printContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Print_elementContext *print_element();
    List_printContext *list_print();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_printContext* list_print();
  List_printContext* list_print(int precedence);
  class  Print_elementContext : public antlr4::ParserRuleContext {
  public:
    Print_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Print_elementContext() = default;
    void copyFrom(Print_elementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintStringContext : public Print_elementContext {
  public:
    PrintStringContext(Print_elementContext *ctx);

    antlr4::tree::TerminalNode *Cte_string();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintExpContext : public Print_elementContext {
  public:
    PrintExpContext(Print_elementContext *ctx);

    ExpresionContext *expresion();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_elementContext* print_element();

  class  ExpresionContext : public antlr4::ParserRuleContext {
  public:
    ExpresionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpresionContext() = default;
    void copyFrom(ExpresionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprContext : public ExpresionContext {
  public:
    ExprContext(ExpresionContext *ctx);

    ExpContext *exp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCompContext : public ExpresionContext {
  public:
    ExprCompContext(ExpresionContext *ctx);

    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    CompContext *comp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpresionContext* expresion();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpContext() = default;
    void copyFrom(ExpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpSumContext : public ExpContext {
  public:
    ExpSumContext(ExpContext *ctx);

    ExpContext *exp();
    antlr4::tree::TerminalNode *Sum();
    TerminoContext *termino();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TermContext : public ExpContext {
  public:
    TermContext(ExpContext *ctx);

    TerminoContext *termino();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpResContext : public ExpContext {
  public:
    ExpResContext(ExpContext *ctx);

    ExpContext *exp();
    antlr4::tree::TerminalNode *Res();
    TerminoContext *termino();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  TerminoContext : public antlr4::ParserRuleContext {
  public:
    TerminoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TerminoContext() = default;
    void copyFrom(TerminoContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TermMulContext : public TerminoContext {
  public:
    TermMulContext(TerminoContext *ctx);

    TerminoContext *termino();
    antlr4::tree::TerminalNode *Mul();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TermDivContext : public TerminoContext {
  public:
    TermDivContext(TerminoContext *ctx);

    TerminoContext *termino();
    antlr4::tree::TerminalNode *Div();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactContext : public TerminoContext {
  public:
    FactContext(TerminoContext *ctx);

    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TerminoContext* termino();
  TerminoContext* termino(int precedence);
  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParenthesisExprContext : public FactorContext {
  public:
    ParenthesisExprContext(FactorContext *ctx);

    ExpresionContext *expresion();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryMinContext : public FactorContext {
  public:
    UnaryMinContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *Res();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomCteContext : public FactorContext {
  public:
    AtomCteContext(FactorContext *ctx);

    CteContext *cte();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtomIdContext : public FactorContext {
  public:
    AtomIdContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *Id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  FuncsContext : public antlr4::ParserRuleContext {
  public:
    FuncsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncTypeContext *funcType();
    antlr4::tree::TerminalNode *Id();
    List_parametersContext *list_parameters();
    BodyContext *body();
    VarsContext *vars();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncsContext* funcs();

  class  List_parametersContext : public antlr4::ParserRuleContext {
  public:
    List_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_parametersContext* list_parameters();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    TypeContext *type();
    Parameter_primeContext *parameter_prime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  Parameter_primeContext : public antlr4::ParserRuleContext {
  public:
    Parameter_primeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_primeContext* parameter_prime();

  class  FuncTypeContext : public antlr4::ParserRuleContext {
  public:
    FuncTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncTypeContext* funcType();

  class  CteContext : public antlr4::ParserRuleContext {
  public:
    CteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Cte_int();
    antlr4::tree::TerminalNode *Cte_float();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CteContext* cte();

  class  CompContext : public antlr4::ParserRuleContext {
  public:
    CompContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    antlr4::tree::TerminalNode *DiffThan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompContext* comp();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool list_printSempred(List_printContext *_localctx, size_t predicateIndex);
  bool expSempred(ExpContext *_localctx, size_t predicateIndex);
  bool terminoSempred(TerminoContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

