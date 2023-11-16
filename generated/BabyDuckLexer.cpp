
// Generated from BabyDuck.g4 by ANTLR 4.13.1


#include "BabyDuckLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BabyDuckLexerStaticData final {
  BabyDuckLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BabyDuckLexerStaticData(const BabyDuckLexerStaticData&) = delete;
  BabyDuckLexerStaticData(BabyDuckLexerStaticData&&) = delete;
  BabyDuckLexerStaticData& operator=(const BabyDuckLexerStaticData&) = delete;
  BabyDuckLexerStaticData& operator=(BabyDuckLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag babyducklexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BabyDuckLexerStaticData *babyducklexerLexerStaticData = nullptr;

void babyducklexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (babyducklexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(babyducklexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BabyDuckLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "Cte_int", "Cte_float", 
      "Cte_string", "Id", "Sum", "Res", "Mul", "Div", "LessThan", "MoreThan", 
      "DiffThan", "WS", "DIGIT", "LETTER"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,36,206,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,
  	1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,
  	17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,
  	21,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,5,24,161,8,24,10,
  	24,12,24,164,9,24,1,24,1,24,1,25,1,25,5,25,170,8,25,10,25,12,25,173,9,
  	25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,
  	32,1,32,1,33,4,33,191,8,33,11,33,12,33,192,1,33,1,33,1,34,4,34,198,8,
  	34,11,34,12,34,199,1,35,4,35,203,8,35,11,35,12,35,204,0,0,36,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,1,0,5,1,0,34,34,
  	2,0,65,90,97,122,3,0,48,57,65,90,97,122,3,0,9,10,13,13,32,32,1,0,48,57,
  	210,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,
  	0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,1,73,1,0,0,0,3,81,
  	1,0,0,0,5,83,1,0,0,0,7,88,1,0,0,0,9,92,1,0,0,0,11,96,1,0,0,0,13,98,1,
  	0,0,0,15,100,1,0,0,0,17,104,1,0,0,0,19,110,1,0,0,0,21,112,1,0,0,0,23,
  	114,1,0,0,0,25,116,1,0,0,0,27,119,1,0,0,0,29,121,1,0,0,0,31,123,1,0,0,
  	0,33,128,1,0,0,0,35,134,1,0,0,0,37,137,1,0,0,0,39,143,1,0,0,0,41,145,
  	1,0,0,0,43,147,1,0,0,0,45,152,1,0,0,0,47,154,1,0,0,0,49,158,1,0,0,0,51,
  	167,1,0,0,0,53,174,1,0,0,0,55,176,1,0,0,0,57,178,1,0,0,0,59,180,1,0,0,
  	0,61,182,1,0,0,0,63,184,1,0,0,0,65,186,1,0,0,0,67,190,1,0,0,0,69,197,
  	1,0,0,0,71,202,1,0,0,0,73,74,5,112,0,0,74,75,5,114,0,0,75,76,5,111,0,
  	0,76,77,5,103,0,0,77,78,5,114,0,0,78,79,5,97,0,0,79,80,5,109,0,0,80,2,
  	1,0,0,0,81,82,5,59,0,0,82,4,1,0,0,0,83,84,5,109,0,0,84,85,5,97,0,0,85,
  	86,5,105,0,0,86,87,5,110,0,0,87,6,1,0,0,0,88,89,5,101,0,0,89,90,5,110,
  	0,0,90,91,5,100,0,0,91,8,1,0,0,0,92,93,5,118,0,0,93,94,5,97,0,0,94,95,
  	5,114,0,0,95,10,1,0,0,0,96,97,5,58,0,0,97,12,1,0,0,0,98,99,5,44,0,0,99,
  	14,1,0,0,0,100,101,5,105,0,0,101,102,5,110,0,0,102,103,5,116,0,0,103,
  	16,1,0,0,0,104,105,5,102,0,0,105,106,5,108,0,0,106,107,5,111,0,0,107,
  	108,5,97,0,0,108,109,5,116,0,0,109,18,1,0,0,0,110,111,5,123,0,0,111,20,
  	1,0,0,0,112,113,5,125,0,0,113,22,1,0,0,0,114,115,5,61,0,0,115,24,1,0,
  	0,0,116,117,5,105,0,0,117,118,5,102,0,0,118,26,1,0,0,0,119,120,5,40,0,
  	0,120,28,1,0,0,0,121,122,5,41,0,0,122,30,1,0,0,0,123,124,5,101,0,0,124,
  	125,5,108,0,0,125,126,5,115,0,0,126,127,5,101,0,0,127,32,1,0,0,0,128,
  	129,5,119,0,0,129,130,5,104,0,0,130,131,5,105,0,0,131,132,5,108,0,0,132,
  	133,5,101,0,0,133,34,1,0,0,0,134,135,5,100,0,0,135,136,5,111,0,0,136,
  	36,1,0,0,0,137,138,5,112,0,0,138,139,5,114,0,0,139,140,5,105,0,0,140,
  	141,5,110,0,0,141,142,5,116,0,0,142,38,1,0,0,0,143,144,5,91,0,0,144,40,
  	1,0,0,0,145,146,5,93,0,0,146,42,1,0,0,0,147,148,5,118,0,0,148,149,5,111,
  	0,0,149,150,5,105,0,0,150,151,5,100,0,0,151,44,1,0,0,0,152,153,3,69,34,
  	0,153,46,1,0,0,0,154,155,3,69,34,0,155,156,5,46,0,0,156,157,3,69,34,0,
  	157,48,1,0,0,0,158,162,5,34,0,0,159,161,8,0,0,0,160,159,1,0,0,0,161,164,
  	1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,165,1,0,0,0,164,162,1,0,0,
  	0,165,166,5,34,0,0,166,50,1,0,0,0,167,171,7,1,0,0,168,170,7,2,0,0,169,
  	168,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,52,1,
  	0,0,0,173,171,1,0,0,0,174,175,5,43,0,0,175,54,1,0,0,0,176,177,5,45,0,
  	0,177,56,1,0,0,0,178,179,5,42,0,0,179,58,1,0,0,0,180,181,5,47,0,0,181,
  	60,1,0,0,0,182,183,5,60,0,0,183,62,1,0,0,0,184,185,5,62,0,0,185,64,1,
  	0,0,0,186,187,5,33,0,0,187,188,5,61,0,0,188,66,1,0,0,0,189,191,7,3,0,
  	0,190,189,1,0,0,0,191,192,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,
  	194,1,0,0,0,194,195,6,33,0,0,195,68,1,0,0,0,196,198,7,4,0,0,197,196,1,
  	0,0,0,198,199,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,70,1,0,0,0,
  	201,203,7,1,0,0,202,201,1,0,0,0,203,204,1,0,0,0,204,202,1,0,0,0,204,205,
  	1,0,0,0,205,72,1,0,0,0,7,0,162,171,192,199,202,204,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  babyducklexerLexerStaticData = staticData.release();
}

}

BabyDuckLexer::BabyDuckLexer(CharStream *input) : Lexer(input) {
  BabyDuckLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *babyducklexerLexerStaticData->atn, babyducklexerLexerStaticData->decisionToDFA, babyducklexerLexerStaticData->sharedContextCache);
}

BabyDuckLexer::~BabyDuckLexer() {
  delete _interpreter;
}

std::string BabyDuckLexer::getGrammarFileName() const {
  return "BabyDuck.g4";
}

const std::vector<std::string>& BabyDuckLexer::getRuleNames() const {
  return babyducklexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BabyDuckLexer::getChannelNames() const {
  return babyducklexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BabyDuckLexer::getModeNames() const {
  return babyducklexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BabyDuckLexer::getVocabulary() const {
  return babyducklexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BabyDuckLexer::getSerializedATN() const {
  return babyducklexerLexerStaticData->serializedATN;
}

const atn::ATN& BabyDuckLexer::getATN() const {
  return *babyducklexerLexerStaticData->atn;
}




void BabyDuckLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  babyducklexerLexerInitialize();
#else
  ::antlr4::internal::call_once(babyducklexerLexerOnceFlag, babyducklexerLexerInitialize);
#endif
}
