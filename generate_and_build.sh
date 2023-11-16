
# generate antlr4 files
CLASSPATH=".:/usr/local/lib/antlr-4.13.1-complete.jar:$CLASSPATH"
java -Xmx500M -cp $CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o ./generated BabyDuck.g4

# build
g++ -o a00825411 *.cpp -I /Users/tere/ITC/8S/Compilador/antlr4-runtime -L /Users/tere/ITC/8S/Compilador/antlr4-runtime -lantlr4-runtime -std=c++17