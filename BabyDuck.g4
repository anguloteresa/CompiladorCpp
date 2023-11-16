grammar BabyDuck;

start: programa EOF;

// Programa
programa  : 'program' Id ';' (vars? funcs* 'main' body 'end');

// Vars
vars	  : 'var' list_vars*;
list_vars : list_id ':' type ';';
list_id   : Id id_prime;
id_prime  : ',' list_id
          | // epsilon
          ;

// Type
type : 'int'  | 'float';

// Body
body : '{' statement* '}';

// Statement 
statement : assign
          | condition
          | cycle
          | f_call
          | print
          ;

// Assign
assign    : Id '=' expresion ';';

// Condition
condition       : if_stmt   
                | if_else_stmt        
                ;

// if
if_stmt         : if_cond if_body ';';
if_cond         : 'if' '(' expresion ')';
if_body         : body;

// if-else
if_else_stmt    : two_if_cond two_if_body else_stmt ';';
two_if_cond     : 'if' '(' expresion ')';
two_if_body     : body;
else_stmt       : 'else' body;

// if_else_condition       : if_block else_statement body ';';
// if_else_if              :
// if_condition      : if_block ';';

// if_block        : if_statement body;

// if_statement    : 'if' '(' expresion ')';
// else_statement  : 'else';

// Cycle
cycle           : 'while' body 'do' '(' expresion ')' ';';
// F_call
f_call          : Id  '(' list_expresion? ')' ';';

list_expresion  : expresion expresion_prime;
expresion_prime : ',' list_expresion
                | // epsilons
                ;
// Print
print           : 'print' '('  list_print ')' ';';
list_print      : list_print ',' print_element
                | print_element
                ;
print_element   : expresion     #PrintExp
                | Cte_string    #PrintString
                ;

// Expresion
expresion : exp comp exp        #ExprComp
          | exp                 #Expr
          ;

// exp
// plus or minus
exp           : exp Sum termino   #ExpSum
              | exp Res termino   #ExpRes
              | termino           #Term
              ;

// termino
termino       : termino Mul factor   #TermMul
              | termino Div factor   #TermDiv
              | factor               #Fact
              ;

// factor
factor  : '(' expresion ')'     # ParenthesisExpr
        | Res factor            # UnaryMin
        | Id                    # AtomId
        | cte                   # AtomCte
        ;

// funcs
funcs           : funcType Id '(' list_parameters ')' '[' vars? body ']' ';';
list_parameters : parameter*;
parameter       : Id ':' type parameter_prime;
parameter_prime : ',' parameter
                | // epsilon
                ;

funcType    : 'int' | 'float' | 'void';

// Constante
cte         : Cte_int | Cte_float;
Cte_int     : DIGIT;
Cte_float   : DIGIT '.' DIGIT;
Cte_string  : '"' ~["]* '"';

Id  : [a-zA-Z][a-zA-Z0-9]*;

comp        : LessThan | MoreThan | DiffThan;

Sum : '+';
Res : '-';
Mul : '*';
Div : '/';
LessThan : '<' ;
MoreThan : '>' ;
DiffThan : '!=';

WS      : [ \t\r\n]+ -> skip;
DIGIT   : [0-9]+;
LETTER  : ([A-Z] | [a-z])+;