
// Generated from BabyDuck.g4 by ANTLR 4.13.1


#include "BabyDuckListener.h"
#include "BabyDuckVisitor.h"

#include "BabyDuckParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BabyDuckParserStaticData final {
  BabyDuckParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BabyDuckParserStaticData(const BabyDuckParserStaticData&) = delete;
  BabyDuckParserStaticData(BabyDuckParserStaticData&&) = delete;
  BabyDuckParserStaticData& operator=(const BabyDuckParserStaticData&) = delete;
  BabyDuckParserStaticData& operator=(BabyDuckParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag babyduckParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BabyDuckParserStaticData *babyduckParserStaticData = nullptr;

void babyduckParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (babyduckParserStaticData != nullptr) {
    return;
  }
#else
  assert(babyduckParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BabyDuckParserStaticData>(
    std::vector<std::string>{
      "start", "programa", "vars", "list_vars", "list_id", "id_prime", "type", 
      "body", "statement", "assign", "condition", "if_stmt", "if_cond", 
      "if_body", "if_else_stmt", "two_if_cond", "two_if_body", "else_stmt", 
      "cycle", "f_call", "list_expresion", "expresion_prime", "print", "list_print", 
      "print_element", "expresion", "exp", "termino", "factor", "funcs", 
      "list_parameters", "parameter", "parameter_prime", "funcType", "cte", 
      "comp"
    },
    std::vector<std::string>{
      "", "'program'", "';'", "'main'", "'end'", "'var'", "':'", "','", 
      "'int'", "'float'", "'{'", "'}'", "'='", "'if'", "'('", "')'", "'else'", 
      "'while'", "'do'", "'print'", "'['", "']'", "'void'", "", "", "", 
      "", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'!='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "Cte_int", "Cte_float", "Cte_string", "Id", 
      "Sum", "Res", "Mul", "Div", "LessThan", "MoreThan", "DiffThan", "WS", 
      "DIGIT", "LETTER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,290,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,1,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,80,8,1,1,1,5,1,83,8,1,10,1,12,1,86,
  	9,1,1,1,1,1,1,1,1,1,1,2,1,2,5,2,94,8,2,10,2,12,2,97,9,2,1,3,1,3,1,3,1,
  	3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,3,5,110,8,5,1,6,1,6,1,7,1,7,5,7,116,8,7,
  	10,7,12,7,119,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,3,8,128,8,8,1,9,1,9,1,9,
  	1,9,1,9,1,10,1,10,3,10,137,8,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,
  	12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,
  	16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,
  	19,1,19,3,19,176,8,19,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,3,
  	21,187,8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,
  	23,5,23,201,8,23,10,23,12,23,204,9,23,1,24,1,24,3,24,208,8,24,1,25,1,
  	25,1,25,1,25,1,25,3,25,215,8,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,5,26,226,8,26,10,26,12,26,229,9,26,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,5,27,240,8,27,10,27,12,27,243,9,27,1,28,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,3,28,253,8,28,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,3,29,262,8,29,1,29,1,29,1,29,1,29,1,30,5,30,269,8,30,10,30,12,30,272,
  	9,30,1,31,1,31,1,31,1,31,1,31,1,32,1,32,1,32,3,32,282,8,32,1,33,1,33,
  	1,34,1,34,1,35,1,35,1,35,0,3,46,52,54,36,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,
  	68,70,0,4,1,0,8,9,2,0,8,9,22,22,1,0,23,24,1,0,31,33,278,0,72,1,0,0,0,
  	2,75,1,0,0,0,4,91,1,0,0,0,6,98,1,0,0,0,8,103,1,0,0,0,10,109,1,0,0,0,12,
  	111,1,0,0,0,14,113,1,0,0,0,16,127,1,0,0,0,18,129,1,0,0,0,20,136,1,0,0,
  	0,22,138,1,0,0,0,24,142,1,0,0,0,26,147,1,0,0,0,28,149,1,0,0,0,30,154,
  	1,0,0,0,32,159,1,0,0,0,34,161,1,0,0,0,36,164,1,0,0,0,38,172,1,0,0,0,40,
  	180,1,0,0,0,42,186,1,0,0,0,44,188,1,0,0,0,46,194,1,0,0,0,48,207,1,0,0,
  	0,50,214,1,0,0,0,52,216,1,0,0,0,54,230,1,0,0,0,56,252,1,0,0,0,58,254,
  	1,0,0,0,60,270,1,0,0,0,62,273,1,0,0,0,64,281,1,0,0,0,66,283,1,0,0,0,68,
  	285,1,0,0,0,70,287,1,0,0,0,72,73,3,2,1,0,73,74,5,0,0,1,74,1,1,0,0,0,75,
  	76,5,1,0,0,76,77,5,26,0,0,77,79,5,2,0,0,78,80,3,4,2,0,79,78,1,0,0,0,79,
  	80,1,0,0,0,80,84,1,0,0,0,81,83,3,58,29,0,82,81,1,0,0,0,83,86,1,0,0,0,
  	84,82,1,0,0,0,84,85,1,0,0,0,85,87,1,0,0,0,86,84,1,0,0,0,87,88,5,3,0,0,
  	88,89,3,14,7,0,89,90,5,4,0,0,90,3,1,0,0,0,91,95,5,5,0,0,92,94,3,6,3,0,
  	93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,5,1,0,0,0,
  	97,95,1,0,0,0,98,99,3,8,4,0,99,100,5,6,0,0,100,101,3,12,6,0,101,102,5,
  	2,0,0,102,7,1,0,0,0,103,104,5,26,0,0,104,105,3,10,5,0,105,9,1,0,0,0,106,
  	107,5,7,0,0,107,110,3,8,4,0,108,110,1,0,0,0,109,106,1,0,0,0,109,108,1,
  	0,0,0,110,11,1,0,0,0,111,112,7,0,0,0,112,13,1,0,0,0,113,117,5,10,0,0,
  	114,116,3,16,8,0,115,114,1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,
  	118,1,0,0,0,118,120,1,0,0,0,119,117,1,0,0,0,120,121,5,11,0,0,121,15,1,
  	0,0,0,122,128,3,18,9,0,123,128,3,20,10,0,124,128,3,36,18,0,125,128,3,
  	38,19,0,126,128,3,44,22,0,127,122,1,0,0,0,127,123,1,0,0,0,127,124,1,0,
  	0,0,127,125,1,0,0,0,127,126,1,0,0,0,128,17,1,0,0,0,129,130,5,26,0,0,130,
  	131,5,12,0,0,131,132,3,50,25,0,132,133,5,2,0,0,133,19,1,0,0,0,134,137,
  	3,22,11,0,135,137,3,28,14,0,136,134,1,0,0,0,136,135,1,0,0,0,137,21,1,
  	0,0,0,138,139,3,24,12,0,139,140,3,26,13,0,140,141,5,2,0,0,141,23,1,0,
  	0,0,142,143,5,13,0,0,143,144,5,14,0,0,144,145,3,50,25,0,145,146,5,15,
  	0,0,146,25,1,0,0,0,147,148,3,14,7,0,148,27,1,0,0,0,149,150,3,30,15,0,
  	150,151,3,32,16,0,151,152,3,34,17,0,152,153,5,2,0,0,153,29,1,0,0,0,154,
  	155,5,13,0,0,155,156,5,14,0,0,156,157,3,50,25,0,157,158,5,15,0,0,158,
  	31,1,0,0,0,159,160,3,14,7,0,160,33,1,0,0,0,161,162,5,16,0,0,162,163,3,
  	14,7,0,163,35,1,0,0,0,164,165,5,17,0,0,165,166,3,14,7,0,166,167,5,18,
  	0,0,167,168,5,14,0,0,168,169,3,50,25,0,169,170,5,15,0,0,170,171,5,2,0,
  	0,171,37,1,0,0,0,172,173,5,26,0,0,173,175,5,14,0,0,174,176,3,40,20,0,
  	175,174,1,0,0,0,175,176,1,0,0,0,176,177,1,0,0,0,177,178,5,15,0,0,178,
  	179,5,2,0,0,179,39,1,0,0,0,180,181,3,50,25,0,181,182,3,42,21,0,182,41,
  	1,0,0,0,183,184,5,7,0,0,184,187,3,40,20,0,185,187,1,0,0,0,186,183,1,0,
  	0,0,186,185,1,0,0,0,187,43,1,0,0,0,188,189,5,19,0,0,189,190,5,14,0,0,
  	190,191,3,46,23,0,191,192,5,15,0,0,192,193,5,2,0,0,193,45,1,0,0,0,194,
  	195,6,23,-1,0,195,196,3,48,24,0,196,202,1,0,0,0,197,198,10,2,0,0,198,
  	199,5,7,0,0,199,201,3,48,24,0,200,197,1,0,0,0,201,204,1,0,0,0,202,200,
  	1,0,0,0,202,203,1,0,0,0,203,47,1,0,0,0,204,202,1,0,0,0,205,208,3,50,25,
  	0,206,208,5,25,0,0,207,205,1,0,0,0,207,206,1,0,0,0,208,49,1,0,0,0,209,
  	210,3,52,26,0,210,211,3,70,35,0,211,212,3,52,26,0,212,215,1,0,0,0,213,
  	215,3,52,26,0,214,209,1,0,0,0,214,213,1,0,0,0,215,51,1,0,0,0,216,217,
  	6,26,-1,0,217,218,3,54,27,0,218,227,1,0,0,0,219,220,10,3,0,0,220,221,
  	5,27,0,0,221,226,3,54,27,0,222,223,10,2,0,0,223,224,5,28,0,0,224,226,
  	3,54,27,0,225,219,1,0,0,0,225,222,1,0,0,0,226,229,1,0,0,0,227,225,1,0,
  	0,0,227,228,1,0,0,0,228,53,1,0,0,0,229,227,1,0,0,0,230,231,6,27,-1,0,
  	231,232,3,56,28,0,232,241,1,0,0,0,233,234,10,3,0,0,234,235,5,29,0,0,235,
  	240,3,56,28,0,236,237,10,2,0,0,237,238,5,30,0,0,238,240,3,56,28,0,239,
  	233,1,0,0,0,239,236,1,0,0,0,240,243,1,0,0,0,241,239,1,0,0,0,241,242,1,
  	0,0,0,242,55,1,0,0,0,243,241,1,0,0,0,244,245,5,14,0,0,245,246,3,50,25,
  	0,246,247,5,15,0,0,247,253,1,0,0,0,248,249,5,28,0,0,249,253,3,56,28,0,
  	250,253,5,26,0,0,251,253,3,68,34,0,252,244,1,0,0,0,252,248,1,0,0,0,252,
  	250,1,0,0,0,252,251,1,0,0,0,253,57,1,0,0,0,254,255,3,66,33,0,255,256,
  	5,26,0,0,256,257,5,14,0,0,257,258,3,60,30,0,258,259,5,15,0,0,259,261,
  	5,20,0,0,260,262,3,4,2,0,261,260,1,0,0,0,261,262,1,0,0,0,262,263,1,0,
  	0,0,263,264,3,14,7,0,264,265,5,21,0,0,265,266,5,2,0,0,266,59,1,0,0,0,
  	267,269,3,62,31,0,268,267,1,0,0,0,269,272,1,0,0,0,270,268,1,0,0,0,270,
  	271,1,0,0,0,271,61,1,0,0,0,272,270,1,0,0,0,273,274,5,26,0,0,274,275,5,
  	6,0,0,275,276,3,12,6,0,276,277,3,64,32,0,277,63,1,0,0,0,278,279,5,7,0,
  	0,279,282,3,62,31,0,280,282,1,0,0,0,281,278,1,0,0,0,281,280,1,0,0,0,282,
  	65,1,0,0,0,283,284,7,1,0,0,284,67,1,0,0,0,285,286,7,2,0,0,286,69,1,0,
  	0,0,287,288,7,3,0,0,288,71,1,0,0,0,20,79,84,95,109,117,127,136,175,186,
  	202,207,214,225,227,239,241,252,261,270,281
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  babyduckParserStaticData = staticData.release();
}

}

BabyDuckParser::BabyDuckParser(TokenStream *input) : BabyDuckParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BabyDuckParser::BabyDuckParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BabyDuckParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *babyduckParserStaticData->atn, babyduckParserStaticData->decisionToDFA, babyduckParserStaticData->sharedContextCache, options);
}

BabyDuckParser::~BabyDuckParser() {
  delete _interpreter;
}

const atn::ATN& BabyDuckParser::getATN() const {
  return *babyduckParserStaticData->atn;
}

std::string BabyDuckParser::getGrammarFileName() const {
  return "BabyDuck.g4";
}

const std::vector<std::string>& BabyDuckParser::getRuleNames() const {
  return babyduckParserStaticData->ruleNames;
}

const dfa::Vocabulary& BabyDuckParser::getVocabulary() const {
  return babyduckParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BabyDuckParser::getSerializedATN() const {
  return babyduckParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

BabyDuckParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::ProgramaContext* BabyDuckParser::StartContext::programa() {
  return getRuleContext<BabyDuckParser::ProgramaContext>(0);
}

tree::TerminalNode* BabyDuckParser::StartContext::EOF() {
  return getToken(BabyDuckParser::EOF, 0);
}


size_t BabyDuckParser::StartContext::getRuleIndex() const {
  return BabyDuckParser::RuleStart;
}

void BabyDuckParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void BabyDuckParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


std::any BabyDuckParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::StartContext* BabyDuckParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, BabyDuckParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    programa();
    setState(73);
    match(BabyDuckParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramaContext ------------------------------------------------------------------

BabyDuckParser::ProgramaContext::ProgramaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::ProgramaContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::BodyContext* BabyDuckParser::ProgramaContext::body() {
  return getRuleContext<BabyDuckParser::BodyContext>(0);
}

BabyDuckParser::VarsContext* BabyDuckParser::ProgramaContext::vars() {
  return getRuleContext<BabyDuckParser::VarsContext>(0);
}

std::vector<BabyDuckParser::FuncsContext *> BabyDuckParser::ProgramaContext::funcs() {
  return getRuleContexts<BabyDuckParser::FuncsContext>();
}

BabyDuckParser::FuncsContext* BabyDuckParser::ProgramaContext::funcs(size_t i) {
  return getRuleContext<BabyDuckParser::FuncsContext>(i);
}


size_t BabyDuckParser::ProgramaContext::getRuleIndex() const {
  return BabyDuckParser::RulePrograma;
}

void BabyDuckParser::ProgramaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrograma(this);
}

void BabyDuckParser::ProgramaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrograma(this);
}


std::any BabyDuckParser::ProgramaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitPrograma(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::ProgramaContext* BabyDuckParser::programa() {
  ProgramaContext *_localctx = _tracker.createInstance<ProgramaContext>(_ctx, getState());
  enterRule(_localctx, 2, BabyDuckParser::RulePrograma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(BabyDuckParser::T__0);
    setState(76);
    match(BabyDuckParser::Id);
    setState(77);
    match(BabyDuckParser::T__1);

    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyDuckParser::T__4) {
      setState(78);
      vars();
    }
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4195072) != 0)) {
      setState(81);
      funcs();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(87);
    match(BabyDuckParser::T__2);
    setState(88);
    body();
    setState(89);
    match(BabyDuckParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarsContext ------------------------------------------------------------------

BabyDuckParser::VarsContext::VarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BabyDuckParser::List_varsContext *> BabyDuckParser::VarsContext::list_vars() {
  return getRuleContexts<BabyDuckParser::List_varsContext>();
}

BabyDuckParser::List_varsContext* BabyDuckParser::VarsContext::list_vars(size_t i) {
  return getRuleContext<BabyDuckParser::List_varsContext>(i);
}


size_t BabyDuckParser::VarsContext::getRuleIndex() const {
  return BabyDuckParser::RuleVars;
}

void BabyDuckParser::VarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVars(this);
}

void BabyDuckParser::VarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVars(this);
}


std::any BabyDuckParser::VarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitVars(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::VarsContext* BabyDuckParser::vars() {
  VarsContext *_localctx = _tracker.createInstance<VarsContext>(_ctx, getState());
  enterRule(_localctx, 4, BabyDuckParser::RuleVars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(BabyDuckParser::T__4);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyDuckParser::Id) {
      setState(92);
      list_vars();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_varsContext ------------------------------------------------------------------

BabyDuckParser::List_varsContext::List_varsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::List_idContext* BabyDuckParser::List_varsContext::list_id() {
  return getRuleContext<BabyDuckParser::List_idContext>(0);
}

BabyDuckParser::TypeContext* BabyDuckParser::List_varsContext::type() {
  return getRuleContext<BabyDuckParser::TypeContext>(0);
}


size_t BabyDuckParser::List_varsContext::getRuleIndex() const {
  return BabyDuckParser::RuleList_vars;
}

void BabyDuckParser::List_varsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_vars(this);
}

void BabyDuckParser::List_varsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_vars(this);
}


std::any BabyDuckParser::List_varsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitList_vars(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::List_varsContext* BabyDuckParser::list_vars() {
  List_varsContext *_localctx = _tracker.createInstance<List_varsContext>(_ctx, getState());
  enterRule(_localctx, 6, BabyDuckParser::RuleList_vars);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    list_id();
    setState(99);
    match(BabyDuckParser::T__5);
    setState(100);
    type();
    setState(101);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_idContext ------------------------------------------------------------------

BabyDuckParser::List_idContext::List_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::List_idContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::Id_primeContext* BabyDuckParser::List_idContext::id_prime() {
  return getRuleContext<BabyDuckParser::Id_primeContext>(0);
}


size_t BabyDuckParser::List_idContext::getRuleIndex() const {
  return BabyDuckParser::RuleList_id;
}

void BabyDuckParser::List_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_id(this);
}

void BabyDuckParser::List_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_id(this);
}


std::any BabyDuckParser::List_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitList_id(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::List_idContext* BabyDuckParser::list_id() {
  List_idContext *_localctx = _tracker.createInstance<List_idContext>(_ctx, getState());
  enterRule(_localctx, 8, BabyDuckParser::RuleList_id);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(BabyDuckParser::Id);
    setState(104);
    id_prime();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_primeContext ------------------------------------------------------------------

BabyDuckParser::Id_primeContext::Id_primeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::List_idContext* BabyDuckParser::Id_primeContext::list_id() {
  return getRuleContext<BabyDuckParser::List_idContext>(0);
}


size_t BabyDuckParser::Id_primeContext::getRuleIndex() const {
  return BabyDuckParser::RuleId_prime;
}

void BabyDuckParser::Id_primeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_prime(this);
}

void BabyDuckParser::Id_primeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_prime(this);
}


std::any BabyDuckParser::Id_primeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitId_prime(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::Id_primeContext* BabyDuckParser::id_prime() {
  Id_primeContext *_localctx = _tracker.createInstance<Id_primeContext>(_ctx, getState());
  enterRule(_localctx, 10, BabyDuckParser::RuleId_prime);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyDuckParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(106);
        match(BabyDuckParser::T__6);
        setState(107);
        list_id();
        break;
      }

      case BabyDuckParser::T__5: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

BabyDuckParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::TypeContext::getRuleIndex() const {
  return BabyDuckParser::RuleType;
}

void BabyDuckParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void BabyDuckParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any BabyDuckParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::TypeContext* BabyDuckParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, BabyDuckParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    _la = _input->LA(1);
    if (!(_la == BabyDuckParser::T__7

    || _la == BabyDuckParser::T__8)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

BabyDuckParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BabyDuckParser::StatementContext *> BabyDuckParser::BodyContext::statement() {
  return getRuleContexts<BabyDuckParser::StatementContext>();
}

BabyDuckParser::StatementContext* BabyDuckParser::BodyContext::statement(size_t i) {
  return getRuleContext<BabyDuckParser::StatementContext>(i);
}


size_t BabyDuckParser::BodyContext::getRuleIndex() const {
  return BabyDuckParser::RuleBody;
}

void BabyDuckParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void BabyDuckParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}


std::any BabyDuckParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::BodyContext* BabyDuckParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 14, BabyDuckParser::RuleBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(BabyDuckParser::T__9);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67772416) != 0)) {
      setState(114);
      statement();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
    match(BabyDuckParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BabyDuckParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::AssignContext* BabyDuckParser::StatementContext::assign() {
  return getRuleContext<BabyDuckParser::AssignContext>(0);
}

BabyDuckParser::ConditionContext* BabyDuckParser::StatementContext::condition() {
  return getRuleContext<BabyDuckParser::ConditionContext>(0);
}

BabyDuckParser::CycleContext* BabyDuckParser::StatementContext::cycle() {
  return getRuleContext<BabyDuckParser::CycleContext>(0);
}

BabyDuckParser::F_callContext* BabyDuckParser::StatementContext::f_call() {
  return getRuleContext<BabyDuckParser::F_callContext>(0);
}

BabyDuckParser::PrintContext* BabyDuckParser::StatementContext::print() {
  return getRuleContext<BabyDuckParser::PrintContext>(0);
}


size_t BabyDuckParser::StatementContext::getRuleIndex() const {
  return BabyDuckParser::RuleStatement;
}

void BabyDuckParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BabyDuckParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any BabyDuckParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::StatementContext* BabyDuckParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 16, BabyDuckParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      condition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      cycle();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(125);
      f_call();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(126);
      print();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

BabyDuckParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::AssignContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::ExpresionContext* BabyDuckParser::AssignContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}


size_t BabyDuckParser::AssignContext::getRuleIndex() const {
  return BabyDuckParser::RuleAssign;
}

void BabyDuckParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void BabyDuckParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


std::any BabyDuckParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::AssignContext* BabyDuckParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 18, BabyDuckParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(BabyDuckParser::Id);
    setState(130);
    match(BabyDuckParser::T__11);
    setState(131);
    expresion();
    setState(132);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

BabyDuckParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::If_stmtContext* BabyDuckParser::ConditionContext::if_stmt() {
  return getRuleContext<BabyDuckParser::If_stmtContext>(0);
}

BabyDuckParser::If_else_stmtContext* BabyDuckParser::ConditionContext::if_else_stmt() {
  return getRuleContext<BabyDuckParser::If_else_stmtContext>(0);
}


size_t BabyDuckParser::ConditionContext::getRuleIndex() const {
  return BabyDuckParser::RuleCondition;
}

void BabyDuckParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void BabyDuckParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any BabyDuckParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::ConditionContext* BabyDuckParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 20, BabyDuckParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      if_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      if_else_stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

BabyDuckParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::If_condContext* BabyDuckParser::If_stmtContext::if_cond() {
  return getRuleContext<BabyDuckParser::If_condContext>(0);
}

BabyDuckParser::If_bodyContext* BabyDuckParser::If_stmtContext::if_body() {
  return getRuleContext<BabyDuckParser::If_bodyContext>(0);
}


size_t BabyDuckParser::If_stmtContext::getRuleIndex() const {
  return BabyDuckParser::RuleIf_stmt;
}

void BabyDuckParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void BabyDuckParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}


std::any BabyDuckParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::If_stmtContext* BabyDuckParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, BabyDuckParser::RuleIf_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    if_cond();
    setState(139);
    if_body();
    setState(140);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_condContext ------------------------------------------------------------------

BabyDuckParser::If_condContext::If_condContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::ExpresionContext* BabyDuckParser::If_condContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}


size_t BabyDuckParser::If_condContext::getRuleIndex() const {
  return BabyDuckParser::RuleIf_cond;
}

void BabyDuckParser::If_condContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_cond(this);
}

void BabyDuckParser::If_condContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_cond(this);
}


std::any BabyDuckParser::If_condContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitIf_cond(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::If_condContext* BabyDuckParser::if_cond() {
  If_condContext *_localctx = _tracker.createInstance<If_condContext>(_ctx, getState());
  enterRule(_localctx, 24, BabyDuckParser::RuleIf_cond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(BabyDuckParser::T__12);
    setState(143);
    match(BabyDuckParser::T__13);
    setState(144);
    expresion();
    setState(145);
    match(BabyDuckParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_bodyContext ------------------------------------------------------------------

BabyDuckParser::If_bodyContext::If_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::BodyContext* BabyDuckParser::If_bodyContext::body() {
  return getRuleContext<BabyDuckParser::BodyContext>(0);
}


size_t BabyDuckParser::If_bodyContext::getRuleIndex() const {
  return BabyDuckParser::RuleIf_body;
}

void BabyDuckParser::If_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_body(this);
}

void BabyDuckParser::If_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_body(this);
}


std::any BabyDuckParser::If_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitIf_body(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::If_bodyContext* BabyDuckParser::if_body() {
  If_bodyContext *_localctx = _tracker.createInstance<If_bodyContext>(_ctx, getState());
  enterRule(_localctx, 26, BabyDuckParser::RuleIf_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_else_stmtContext ------------------------------------------------------------------

BabyDuckParser::If_else_stmtContext::If_else_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::Two_if_condContext* BabyDuckParser::If_else_stmtContext::two_if_cond() {
  return getRuleContext<BabyDuckParser::Two_if_condContext>(0);
}

BabyDuckParser::Two_if_bodyContext* BabyDuckParser::If_else_stmtContext::two_if_body() {
  return getRuleContext<BabyDuckParser::Two_if_bodyContext>(0);
}

BabyDuckParser::Else_stmtContext* BabyDuckParser::If_else_stmtContext::else_stmt() {
  return getRuleContext<BabyDuckParser::Else_stmtContext>(0);
}


size_t BabyDuckParser::If_else_stmtContext::getRuleIndex() const {
  return BabyDuckParser::RuleIf_else_stmt;
}

void BabyDuckParser::If_else_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_else_stmt(this);
}

void BabyDuckParser::If_else_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_else_stmt(this);
}


std::any BabyDuckParser::If_else_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitIf_else_stmt(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::If_else_stmtContext* BabyDuckParser::if_else_stmt() {
  If_else_stmtContext *_localctx = _tracker.createInstance<If_else_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, BabyDuckParser::RuleIf_else_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    two_if_cond();
    setState(150);
    two_if_body();
    setState(151);
    else_stmt();
    setState(152);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Two_if_condContext ------------------------------------------------------------------

BabyDuckParser::Two_if_condContext::Two_if_condContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::ExpresionContext* BabyDuckParser::Two_if_condContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}


size_t BabyDuckParser::Two_if_condContext::getRuleIndex() const {
  return BabyDuckParser::RuleTwo_if_cond;
}

void BabyDuckParser::Two_if_condContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTwo_if_cond(this);
}

void BabyDuckParser::Two_if_condContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTwo_if_cond(this);
}


std::any BabyDuckParser::Two_if_condContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitTwo_if_cond(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::Two_if_condContext* BabyDuckParser::two_if_cond() {
  Two_if_condContext *_localctx = _tracker.createInstance<Two_if_condContext>(_ctx, getState());
  enterRule(_localctx, 30, BabyDuckParser::RuleTwo_if_cond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(BabyDuckParser::T__12);
    setState(155);
    match(BabyDuckParser::T__13);
    setState(156);
    expresion();
    setState(157);
    match(BabyDuckParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Two_if_bodyContext ------------------------------------------------------------------

BabyDuckParser::Two_if_bodyContext::Two_if_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::BodyContext* BabyDuckParser::Two_if_bodyContext::body() {
  return getRuleContext<BabyDuckParser::BodyContext>(0);
}


size_t BabyDuckParser::Two_if_bodyContext::getRuleIndex() const {
  return BabyDuckParser::RuleTwo_if_body;
}

void BabyDuckParser::Two_if_bodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTwo_if_body(this);
}

void BabyDuckParser::Two_if_bodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTwo_if_body(this);
}


std::any BabyDuckParser::Two_if_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitTwo_if_body(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::Two_if_bodyContext* BabyDuckParser::two_if_body() {
  Two_if_bodyContext *_localctx = _tracker.createInstance<Two_if_bodyContext>(_ctx, getState());
  enterRule(_localctx, 32, BabyDuckParser::RuleTwo_if_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_stmtContext ------------------------------------------------------------------

BabyDuckParser::Else_stmtContext::Else_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::BodyContext* BabyDuckParser::Else_stmtContext::body() {
  return getRuleContext<BabyDuckParser::BodyContext>(0);
}


size_t BabyDuckParser::Else_stmtContext::getRuleIndex() const {
  return BabyDuckParser::RuleElse_stmt;
}

void BabyDuckParser::Else_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_stmt(this);
}

void BabyDuckParser::Else_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_stmt(this);
}


std::any BabyDuckParser::Else_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitElse_stmt(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::Else_stmtContext* BabyDuckParser::else_stmt() {
  Else_stmtContext *_localctx = _tracker.createInstance<Else_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, BabyDuckParser::RuleElse_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(BabyDuckParser::T__15);
    setState(162);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CycleContext ------------------------------------------------------------------

BabyDuckParser::CycleContext::CycleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::BodyContext* BabyDuckParser::CycleContext::body() {
  return getRuleContext<BabyDuckParser::BodyContext>(0);
}

BabyDuckParser::ExpresionContext* BabyDuckParser::CycleContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}


size_t BabyDuckParser::CycleContext::getRuleIndex() const {
  return BabyDuckParser::RuleCycle;
}

void BabyDuckParser::CycleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCycle(this);
}

void BabyDuckParser::CycleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCycle(this);
}


std::any BabyDuckParser::CycleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitCycle(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::CycleContext* BabyDuckParser::cycle() {
  CycleContext *_localctx = _tracker.createInstance<CycleContext>(_ctx, getState());
  enterRule(_localctx, 36, BabyDuckParser::RuleCycle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(BabyDuckParser::T__16);
    setState(165);
    body();
    setState(166);
    match(BabyDuckParser::T__17);
    setState(167);
    match(BabyDuckParser::T__13);
    setState(168);
    expresion();
    setState(169);
    match(BabyDuckParser::T__14);
    setState(170);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- F_callContext ------------------------------------------------------------------

BabyDuckParser::F_callContext::F_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::F_callContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::List_expresionContext* BabyDuckParser::F_callContext::list_expresion() {
  return getRuleContext<BabyDuckParser::List_expresionContext>(0);
}


size_t BabyDuckParser::F_callContext::getRuleIndex() const {
  return BabyDuckParser::RuleF_call;
}

void BabyDuckParser::F_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterF_call(this);
}

void BabyDuckParser::F_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitF_call(this);
}


std::any BabyDuckParser::F_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitF_call(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::F_callContext* BabyDuckParser::f_call() {
  F_callContext *_localctx = _tracker.createInstance<F_callContext>(_ctx, getState());
  enterRule(_localctx, 38, BabyDuckParser::RuleF_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(BabyDuckParser::Id);
    setState(173);
    match(BabyDuckParser::T__13);
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 360726528) != 0)) {
      setState(174);
      list_expresion();
    }
    setState(177);
    match(BabyDuckParser::T__14);
    setState(178);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_expresionContext ------------------------------------------------------------------

BabyDuckParser::List_expresionContext::List_expresionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::ExpresionContext* BabyDuckParser::List_expresionContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}

BabyDuckParser::Expresion_primeContext* BabyDuckParser::List_expresionContext::expresion_prime() {
  return getRuleContext<BabyDuckParser::Expresion_primeContext>(0);
}


size_t BabyDuckParser::List_expresionContext::getRuleIndex() const {
  return BabyDuckParser::RuleList_expresion;
}

void BabyDuckParser::List_expresionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_expresion(this);
}

void BabyDuckParser::List_expresionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_expresion(this);
}


std::any BabyDuckParser::List_expresionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitList_expresion(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::List_expresionContext* BabyDuckParser::list_expresion() {
  List_expresionContext *_localctx = _tracker.createInstance<List_expresionContext>(_ctx, getState());
  enterRule(_localctx, 40, BabyDuckParser::RuleList_expresion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    expresion();
    setState(181);
    expresion_prime();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expresion_primeContext ------------------------------------------------------------------

BabyDuckParser::Expresion_primeContext::Expresion_primeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::List_expresionContext* BabyDuckParser::Expresion_primeContext::list_expresion() {
  return getRuleContext<BabyDuckParser::List_expresionContext>(0);
}


size_t BabyDuckParser::Expresion_primeContext::getRuleIndex() const {
  return BabyDuckParser::RuleExpresion_prime;
}

void BabyDuckParser::Expresion_primeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpresion_prime(this);
}

void BabyDuckParser::Expresion_primeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpresion_prime(this);
}


std::any BabyDuckParser::Expresion_primeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitExpresion_prime(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::Expresion_primeContext* BabyDuckParser::expresion_prime() {
  Expresion_primeContext *_localctx = _tracker.createInstance<Expresion_primeContext>(_ctx, getState());
  enterRule(_localctx, 42, BabyDuckParser::RuleExpresion_prime);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyDuckParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(183);
        match(BabyDuckParser::T__6);
        setState(184);
        list_expresion();
        break;
      }

      case BabyDuckParser::T__14: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

BabyDuckParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::List_printContext* BabyDuckParser::PrintContext::list_print() {
  return getRuleContext<BabyDuckParser::List_printContext>(0);
}


size_t BabyDuckParser::PrintContext::getRuleIndex() const {
  return BabyDuckParser::RulePrint;
}

void BabyDuckParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void BabyDuckParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any BabyDuckParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::PrintContext* BabyDuckParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 44, BabyDuckParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(BabyDuckParser::T__18);
    setState(189);
    match(BabyDuckParser::T__13);
    setState(190);
    list_print(0);
    setState(191);
    match(BabyDuckParser::T__14);
    setState(192);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_printContext ------------------------------------------------------------------

BabyDuckParser::List_printContext::List_printContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::Print_elementContext* BabyDuckParser::List_printContext::print_element() {
  return getRuleContext<BabyDuckParser::Print_elementContext>(0);
}

BabyDuckParser::List_printContext* BabyDuckParser::List_printContext::list_print() {
  return getRuleContext<BabyDuckParser::List_printContext>(0);
}


size_t BabyDuckParser::List_printContext::getRuleIndex() const {
  return BabyDuckParser::RuleList_print;
}

void BabyDuckParser::List_printContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_print(this);
}

void BabyDuckParser::List_printContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_print(this);
}


std::any BabyDuckParser::List_printContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitList_print(this);
  else
    return visitor->visitChildren(this);
}


BabyDuckParser::List_printContext* BabyDuckParser::list_print() {
   return list_print(0);
}

BabyDuckParser::List_printContext* BabyDuckParser::list_print(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyDuckParser::List_printContext *_localctx = _tracker.createInstance<List_printContext>(_ctx, parentState);
  BabyDuckParser::List_printContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, BabyDuckParser::RuleList_print, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(195);
    print_element();
    _ctx->stop = _input->LT(-1);
    setState(202);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<List_printContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleList_print);
        setState(197);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(198);
        match(BabyDuckParser::T__6);
        setState(199);
        print_element(); 
      }
      setState(204);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Print_elementContext ------------------------------------------------------------------

BabyDuckParser::Print_elementContext::Print_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::Print_elementContext::getRuleIndex() const {
  return BabyDuckParser::RulePrint_element;
}

void BabyDuckParser::Print_elementContext::copyFrom(Print_elementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintStringContext ------------------------------------------------------------------

tree::TerminalNode* BabyDuckParser::PrintStringContext::Cte_string() {
  return getToken(BabyDuckParser::Cte_string, 0);
}

BabyDuckParser::PrintStringContext::PrintStringContext(Print_elementContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::PrintStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintString(this);
}
void BabyDuckParser::PrintStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintString(this);
}

std::any BabyDuckParser::PrintStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitPrintString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExpContext ------------------------------------------------------------------

BabyDuckParser::ExpresionContext* BabyDuckParser::PrintExpContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}

BabyDuckParser::PrintExpContext::PrintExpContext(Print_elementContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::PrintExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExp(this);
}
void BabyDuckParser::PrintExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExp(this);
}

std::any BabyDuckParser::PrintExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitPrintExp(this);
  else
    return visitor->visitChildren(this);
}
BabyDuckParser::Print_elementContext* BabyDuckParser::print_element() {
  Print_elementContext *_localctx = _tracker.createInstance<Print_elementContext>(_ctx, getState());
  enterRule(_localctx, 48, BabyDuckParser::RulePrint_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyDuckParser::T__13:
      case BabyDuckParser::Cte_int:
      case BabyDuckParser::Cte_float:
      case BabyDuckParser::Id:
      case BabyDuckParser::Res: {
        _localctx = _tracker.createInstance<BabyDuckParser::PrintExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(205);
        expresion();
        break;
      }

      case BabyDuckParser::Cte_string: {
        _localctx = _tracker.createInstance<BabyDuckParser::PrintStringContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(206);
        match(BabyDuckParser::Cte_string);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpresionContext ------------------------------------------------------------------

BabyDuckParser::ExpresionContext::ExpresionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::ExpresionContext::getRuleIndex() const {
  return BabyDuckParser::RuleExpresion;
}

void BabyDuckParser::ExpresionContext::copyFrom(ExpresionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprContext ------------------------------------------------------------------

BabyDuckParser::ExpContext* BabyDuckParser::ExprContext::exp() {
  return getRuleContext<BabyDuckParser::ExpContext>(0);
}

BabyDuckParser::ExprContext::ExprContext(ExpresionContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}
void BabyDuckParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

std::any BabyDuckParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprCompContext ------------------------------------------------------------------

std::vector<BabyDuckParser::ExpContext *> BabyDuckParser::ExprCompContext::exp() {
  return getRuleContexts<BabyDuckParser::ExpContext>();
}

BabyDuckParser::ExpContext* BabyDuckParser::ExprCompContext::exp(size_t i) {
  return getRuleContext<BabyDuckParser::ExpContext>(i);
}

BabyDuckParser::CompContext* BabyDuckParser::ExprCompContext::comp() {
  return getRuleContext<BabyDuckParser::CompContext>(0);
}

BabyDuckParser::ExprCompContext::ExprCompContext(ExpresionContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::ExprCompContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprComp(this);
}
void BabyDuckParser::ExprCompContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprComp(this);
}

std::any BabyDuckParser::ExprCompContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitExprComp(this);
  else
    return visitor->visitChildren(this);
}
BabyDuckParser::ExpresionContext* BabyDuckParser::expresion() {
  ExpresionContext *_localctx = _tracker.createInstance<ExpresionContext>(_ctx, getState());
  enterRule(_localctx, 50, BabyDuckParser::RuleExpresion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BabyDuckParser::ExprCompContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(209);
      exp(0);
      setState(210);
      comp();
      setState(211);
      exp(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BabyDuckParser::ExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(213);
      exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

BabyDuckParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::ExpContext::getRuleIndex() const {
  return BabyDuckParser::RuleExp;
}

void BabyDuckParser::ExpContext::copyFrom(ExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpSumContext ------------------------------------------------------------------

BabyDuckParser::ExpContext* BabyDuckParser::ExpSumContext::exp() {
  return getRuleContext<BabyDuckParser::ExpContext>(0);
}

tree::TerminalNode* BabyDuckParser::ExpSumContext::Sum() {
  return getToken(BabyDuckParser::Sum, 0);
}

BabyDuckParser::TerminoContext* BabyDuckParser::ExpSumContext::termino() {
  return getRuleContext<BabyDuckParser::TerminoContext>(0);
}

BabyDuckParser::ExpSumContext::ExpSumContext(ExpContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::ExpSumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpSum(this);
}
void BabyDuckParser::ExpSumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpSum(this);
}

std::any BabyDuckParser::ExpSumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitExpSum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermContext ------------------------------------------------------------------

BabyDuckParser::TerminoContext* BabyDuckParser::TermContext::termino() {
  return getRuleContext<BabyDuckParser::TerminoContext>(0);
}

BabyDuckParser::TermContext::TermContext(ExpContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}
void BabyDuckParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

std::any BabyDuckParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpResContext ------------------------------------------------------------------

BabyDuckParser::ExpContext* BabyDuckParser::ExpResContext::exp() {
  return getRuleContext<BabyDuckParser::ExpContext>(0);
}

tree::TerminalNode* BabyDuckParser::ExpResContext::Res() {
  return getToken(BabyDuckParser::Res, 0);
}

BabyDuckParser::TerminoContext* BabyDuckParser::ExpResContext::termino() {
  return getRuleContext<BabyDuckParser::TerminoContext>(0);
}

BabyDuckParser::ExpResContext::ExpResContext(ExpContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::ExpResContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpRes(this);
}
void BabyDuckParser::ExpResContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpRes(this);
}

std::any BabyDuckParser::ExpResContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitExpRes(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::ExpContext* BabyDuckParser::exp() {
   return exp(0);
}

BabyDuckParser::ExpContext* BabyDuckParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyDuckParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  BabyDuckParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, BabyDuckParser::RuleExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<TermContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(217);
    termino(0);
    _ctx->stop = _input->LT(-1);
    setState(227);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(225);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpSumContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(219);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(220);
          match(BabyDuckParser::Sum);
          setState(221);
          termino(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpResContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(222);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(223);
          match(BabyDuckParser::Res);
          setState(224);
          termino(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(229);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TerminoContext ------------------------------------------------------------------

BabyDuckParser::TerminoContext::TerminoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::TerminoContext::getRuleIndex() const {
  return BabyDuckParser::RuleTermino;
}

void BabyDuckParser::TerminoContext::copyFrom(TerminoContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermMulContext ------------------------------------------------------------------

BabyDuckParser::TerminoContext* BabyDuckParser::TermMulContext::termino() {
  return getRuleContext<BabyDuckParser::TerminoContext>(0);
}

tree::TerminalNode* BabyDuckParser::TermMulContext::Mul() {
  return getToken(BabyDuckParser::Mul, 0);
}

BabyDuckParser::FactorContext* BabyDuckParser::TermMulContext::factor() {
  return getRuleContext<BabyDuckParser::FactorContext>(0);
}

BabyDuckParser::TermMulContext::TermMulContext(TerminoContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::TermMulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermMul(this);
}
void BabyDuckParser::TermMulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermMul(this);
}

std::any BabyDuckParser::TermMulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitTermMul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermDivContext ------------------------------------------------------------------

BabyDuckParser::TerminoContext* BabyDuckParser::TermDivContext::termino() {
  return getRuleContext<BabyDuckParser::TerminoContext>(0);
}

tree::TerminalNode* BabyDuckParser::TermDivContext::Div() {
  return getToken(BabyDuckParser::Div, 0);
}

BabyDuckParser::FactorContext* BabyDuckParser::TermDivContext::factor() {
  return getRuleContext<BabyDuckParser::FactorContext>(0);
}

BabyDuckParser::TermDivContext::TermDivContext(TerminoContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::TermDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermDiv(this);
}
void BabyDuckParser::TermDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermDiv(this);
}

std::any BabyDuckParser::TermDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitTermDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactContext ------------------------------------------------------------------

BabyDuckParser::FactorContext* BabyDuckParser::FactContext::factor() {
  return getRuleContext<BabyDuckParser::FactorContext>(0);
}

BabyDuckParser::FactContext::FactContext(TerminoContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::FactContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFact(this);
}
void BabyDuckParser::FactContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFact(this);
}

std::any BabyDuckParser::FactContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitFact(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::TerminoContext* BabyDuckParser::termino() {
   return termino(0);
}

BabyDuckParser::TerminoContext* BabyDuckParser::termino(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyDuckParser::TerminoContext *_localctx = _tracker.createInstance<TerminoContext>(_ctx, parentState);
  BabyDuckParser::TerminoContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, BabyDuckParser::RuleTermino, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<FactContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(231);
    factor();
    _ctx->stop = _input->LT(-1);
    setState(241);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(239);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<TermMulContext>(_tracker.createInstance<TerminoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTermino);
          setState(233);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(234);
          match(BabyDuckParser::Mul);
          setState(235);
          factor();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TermDivContext>(_tracker.createInstance<TerminoContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTermino);
          setState(236);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(237);
          match(BabyDuckParser::Div);
          setState(238);
          factor();
          break;
        }

        default:
          break;
        } 
      }
      setState(243);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

BabyDuckParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::FactorContext::getRuleIndex() const {
  return BabyDuckParser::RuleFactor;
}

void BabyDuckParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenthesisExprContext ------------------------------------------------------------------

BabyDuckParser::ExpresionContext* BabyDuckParser::ParenthesisExprContext::expresion() {
  return getRuleContext<BabyDuckParser::ExpresionContext>(0);
}

BabyDuckParser::ParenthesisExprContext::ParenthesisExprContext(FactorContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::ParenthesisExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisExpr(this);
}
void BabyDuckParser::ParenthesisExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisExpr(this);
}

std::any BabyDuckParser::ParenthesisExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitParenthesisExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinContext ------------------------------------------------------------------

tree::TerminalNode* BabyDuckParser::UnaryMinContext::Res() {
  return getToken(BabyDuckParser::Res, 0);
}

BabyDuckParser::FactorContext* BabyDuckParser::UnaryMinContext::factor() {
  return getRuleContext<BabyDuckParser::FactorContext>(0);
}

BabyDuckParser::UnaryMinContext::UnaryMinContext(FactorContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::UnaryMinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMin(this);
}
void BabyDuckParser::UnaryMinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMin(this);
}

std::any BabyDuckParser::UnaryMinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitUnaryMin(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomCteContext ------------------------------------------------------------------

BabyDuckParser::CteContext* BabyDuckParser::AtomCteContext::cte() {
  return getRuleContext<BabyDuckParser::CteContext>(0);
}

BabyDuckParser::AtomCteContext::AtomCteContext(FactorContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::AtomCteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomCte(this);
}
void BabyDuckParser::AtomCteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomCte(this);
}

std::any BabyDuckParser::AtomCteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitAtomCte(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomIdContext ------------------------------------------------------------------

tree::TerminalNode* BabyDuckParser::AtomIdContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::AtomIdContext::AtomIdContext(FactorContext *ctx) { copyFrom(ctx); }

void BabyDuckParser::AtomIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomId(this);
}
void BabyDuckParser::AtomIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomId(this);
}

std::any BabyDuckParser::AtomIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitAtomId(this);
  else
    return visitor->visitChildren(this);
}
BabyDuckParser::FactorContext* BabyDuckParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 56, BabyDuckParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyDuckParser::T__13: {
        _localctx = _tracker.createInstance<BabyDuckParser::ParenthesisExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(244);
        match(BabyDuckParser::T__13);
        setState(245);
        expresion();
        setState(246);
        match(BabyDuckParser::T__14);
        break;
      }

      case BabyDuckParser::Res: {
        _localctx = _tracker.createInstance<BabyDuckParser::UnaryMinContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(248);
        match(BabyDuckParser::Res);
        setState(249);
        factor();
        break;
      }

      case BabyDuckParser::Id: {
        _localctx = _tracker.createInstance<BabyDuckParser::AtomIdContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(250);
        match(BabyDuckParser::Id);
        break;
      }

      case BabyDuckParser::Cte_int:
      case BabyDuckParser::Cte_float: {
        _localctx = _tracker.createInstance<BabyDuckParser::AtomCteContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(251);
        cte();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncsContext ------------------------------------------------------------------

BabyDuckParser::FuncsContext::FuncsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::FuncTypeContext* BabyDuckParser::FuncsContext::funcType() {
  return getRuleContext<BabyDuckParser::FuncTypeContext>(0);
}

tree::TerminalNode* BabyDuckParser::FuncsContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::List_parametersContext* BabyDuckParser::FuncsContext::list_parameters() {
  return getRuleContext<BabyDuckParser::List_parametersContext>(0);
}

BabyDuckParser::BodyContext* BabyDuckParser::FuncsContext::body() {
  return getRuleContext<BabyDuckParser::BodyContext>(0);
}

BabyDuckParser::VarsContext* BabyDuckParser::FuncsContext::vars() {
  return getRuleContext<BabyDuckParser::VarsContext>(0);
}


size_t BabyDuckParser::FuncsContext::getRuleIndex() const {
  return BabyDuckParser::RuleFuncs;
}

void BabyDuckParser::FuncsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncs(this);
}

void BabyDuckParser::FuncsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncs(this);
}


std::any BabyDuckParser::FuncsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitFuncs(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::FuncsContext* BabyDuckParser::funcs() {
  FuncsContext *_localctx = _tracker.createInstance<FuncsContext>(_ctx, getState());
  enterRule(_localctx, 58, BabyDuckParser::RuleFuncs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    funcType();
    setState(255);
    match(BabyDuckParser::Id);
    setState(256);
    match(BabyDuckParser::T__13);
    setState(257);
    list_parameters();
    setState(258);
    match(BabyDuckParser::T__14);
    setState(259);
    match(BabyDuckParser::T__19);
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyDuckParser::T__4) {
      setState(260);
      vars();
    }
    setState(263);
    body();
    setState(264);
    match(BabyDuckParser::T__20);
    setState(265);
    match(BabyDuckParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_parametersContext ------------------------------------------------------------------

BabyDuckParser::List_parametersContext::List_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BabyDuckParser::ParameterContext *> BabyDuckParser::List_parametersContext::parameter() {
  return getRuleContexts<BabyDuckParser::ParameterContext>();
}

BabyDuckParser::ParameterContext* BabyDuckParser::List_parametersContext::parameter(size_t i) {
  return getRuleContext<BabyDuckParser::ParameterContext>(i);
}


size_t BabyDuckParser::List_parametersContext::getRuleIndex() const {
  return BabyDuckParser::RuleList_parameters;
}

void BabyDuckParser::List_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_parameters(this);
}

void BabyDuckParser::List_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_parameters(this);
}


std::any BabyDuckParser::List_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitList_parameters(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::List_parametersContext* BabyDuckParser::list_parameters() {
  List_parametersContext *_localctx = _tracker.createInstance<List_parametersContext>(_ctx, getState());
  enterRule(_localctx, 60, BabyDuckParser::RuleList_parameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyDuckParser::Id) {
      setState(267);
      parameter();
      setState(272);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

BabyDuckParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::ParameterContext::Id() {
  return getToken(BabyDuckParser::Id, 0);
}

BabyDuckParser::TypeContext* BabyDuckParser::ParameterContext::type() {
  return getRuleContext<BabyDuckParser::TypeContext>(0);
}

BabyDuckParser::Parameter_primeContext* BabyDuckParser::ParameterContext::parameter_prime() {
  return getRuleContext<BabyDuckParser::Parameter_primeContext>(0);
}


size_t BabyDuckParser::ParameterContext::getRuleIndex() const {
  return BabyDuckParser::RuleParameter;
}

void BabyDuckParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void BabyDuckParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any BabyDuckParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::ParameterContext* BabyDuckParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 62, BabyDuckParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(BabyDuckParser::Id);
    setState(274);
    match(BabyDuckParser::T__5);
    setState(275);
    type();
    setState(276);
    parameter_prime();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_primeContext ------------------------------------------------------------------

BabyDuckParser::Parameter_primeContext::Parameter_primeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyDuckParser::ParameterContext* BabyDuckParser::Parameter_primeContext::parameter() {
  return getRuleContext<BabyDuckParser::ParameterContext>(0);
}


size_t BabyDuckParser::Parameter_primeContext::getRuleIndex() const {
  return BabyDuckParser::RuleParameter_prime;
}

void BabyDuckParser::Parameter_primeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_prime(this);
}

void BabyDuckParser::Parameter_primeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_prime(this);
}


std::any BabyDuckParser::Parameter_primeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitParameter_prime(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::Parameter_primeContext* BabyDuckParser::parameter_prime() {
  Parameter_primeContext *_localctx = _tracker.createInstance<Parameter_primeContext>(_ctx, getState());
  enterRule(_localctx, 64, BabyDuckParser::RuleParameter_prime);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyDuckParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(278);
        match(BabyDuckParser::T__6);
        setState(279);
        parameter();
        break;
      }

      case BabyDuckParser::T__14:
      case BabyDuckParser::Id: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

BabyDuckParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyDuckParser::FuncTypeContext::getRuleIndex() const {
  return BabyDuckParser::RuleFuncType;
}

void BabyDuckParser::FuncTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncType(this);
}

void BabyDuckParser::FuncTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncType(this);
}


std::any BabyDuckParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::FuncTypeContext* BabyDuckParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 66, BabyDuckParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4195072) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CteContext ------------------------------------------------------------------

BabyDuckParser::CteContext::CteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::CteContext::Cte_int() {
  return getToken(BabyDuckParser::Cte_int, 0);
}

tree::TerminalNode* BabyDuckParser::CteContext::Cte_float() {
  return getToken(BabyDuckParser::Cte_float, 0);
}


size_t BabyDuckParser::CteContext::getRuleIndex() const {
  return BabyDuckParser::RuleCte;
}

void BabyDuckParser::CteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCte(this);
}

void BabyDuckParser::CteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCte(this);
}


std::any BabyDuckParser::CteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitCte(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::CteContext* BabyDuckParser::cte() {
  CteContext *_localctx = _tracker.createInstance<CteContext>(_ctx, getState());
  enterRule(_localctx, 68, BabyDuckParser::RuleCte);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    _la = _input->LA(1);
    if (!(_la == BabyDuckParser::Cte_int

    || _la == BabyDuckParser::Cte_float)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompContext ------------------------------------------------------------------

BabyDuckParser::CompContext::CompContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyDuckParser::CompContext::LessThan() {
  return getToken(BabyDuckParser::LessThan, 0);
}

tree::TerminalNode* BabyDuckParser::CompContext::MoreThan() {
  return getToken(BabyDuckParser::MoreThan, 0);
}

tree::TerminalNode* BabyDuckParser::CompContext::DiffThan() {
  return getToken(BabyDuckParser::DiffThan, 0);
}


size_t BabyDuckParser::CompContext::getRuleIndex() const {
  return BabyDuckParser::RuleComp;
}

void BabyDuckParser::CompContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp(this);
}

void BabyDuckParser::CompContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyDuckListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp(this);
}


std::any BabyDuckParser::CompContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BabyDuckVisitor*>(visitor))
    return parserVisitor->visitComp(this);
  else
    return visitor->visitChildren(this);
}

BabyDuckParser::CompContext* BabyDuckParser::comp() {
  CompContext *_localctx = _tracker.createInstance<CompContext>(_ctx, getState());
  enterRule(_localctx, 70, BabyDuckParser::RuleComp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15032385536) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BabyDuckParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return list_printSempred(antlrcpp::downCast<List_printContext *>(context), predicateIndex);
    case 26: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);
    case 27: return terminoSempred(antlrcpp::downCast<TerminoContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BabyDuckParser::list_printSempred(List_printContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool BabyDuckParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool BabyDuckParser::terminoSempred(TerminoContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void BabyDuckParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  babyduckParserInitialize();
#else
  ::antlr4::internal::call_once(babyduckParserOnceFlag, babyduckParserInitialize);
#endif
}
