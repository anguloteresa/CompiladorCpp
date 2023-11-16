// Generated from /Users/tere/ITC/8S/Compilador/BabyDuck.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link BabyDuckParser}.
 */
public interface BabyDuckListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#start}.
	 * @param ctx the parse tree
	 */
	void enterStart(BabyDuckParser.StartContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#start}.
	 * @param ctx the parse tree
	 */
	void exitStart(BabyDuckParser.StartContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#programa}.
	 * @param ctx the parse tree
	 */
	void enterPrograma(BabyDuckParser.ProgramaContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#programa}.
	 * @param ctx the parse tree
	 */
	void exitPrograma(BabyDuckParser.ProgramaContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#vars}.
	 * @param ctx the parse tree
	 */
	void enterVars(BabyDuckParser.VarsContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#vars}.
	 * @param ctx the parse tree
	 */
	void exitVars(BabyDuckParser.VarsContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#list_vars}.
	 * @param ctx the parse tree
	 */
	void enterList_vars(BabyDuckParser.List_varsContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#list_vars}.
	 * @param ctx the parse tree
	 */
	void exitList_vars(BabyDuckParser.List_varsContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#list_id}.
	 * @param ctx the parse tree
	 */
	void enterList_id(BabyDuckParser.List_idContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#list_id}.
	 * @param ctx the parse tree
	 */
	void exitList_id(BabyDuckParser.List_idContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#id_prime}.
	 * @param ctx the parse tree
	 */
	void enterId_prime(BabyDuckParser.Id_primeContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#id_prime}.
	 * @param ctx the parse tree
	 */
	void exitId_prime(BabyDuckParser.Id_primeContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(BabyDuckParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(BabyDuckParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#body}.
	 * @param ctx the parse tree
	 */
	void enterBody(BabyDuckParser.BodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#body}.
	 * @param ctx the parse tree
	 */
	void exitBody(BabyDuckParser.BodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(BabyDuckParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(BabyDuckParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#assign}.
	 * @param ctx the parse tree
	 */
	void enterAssign(BabyDuckParser.AssignContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#assign}.
	 * @param ctx the parse tree
	 */
	void exitAssign(BabyDuckParser.AssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(BabyDuckParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(BabyDuckParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#cycle}.
	 * @param ctx the parse tree
	 */
	void enterCycle(BabyDuckParser.CycleContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#cycle}.
	 * @param ctx the parse tree
	 */
	void exitCycle(BabyDuckParser.CycleContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#f_call}.
	 * @param ctx the parse tree
	 */
	void enterF_call(BabyDuckParser.F_callContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#f_call}.
	 * @param ctx the parse tree
	 */
	void exitF_call(BabyDuckParser.F_callContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#list_expresion}.
	 * @param ctx the parse tree
	 */
	void enterList_expresion(BabyDuckParser.List_expresionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#list_expresion}.
	 * @param ctx the parse tree
	 */
	void exitList_expresion(BabyDuckParser.List_expresionContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#expresion_prime}.
	 * @param ctx the parse tree
	 */
	void enterExpresion_prime(BabyDuckParser.Expresion_primeContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#expresion_prime}.
	 * @param ctx the parse tree
	 */
	void exitExpresion_prime(BabyDuckParser.Expresion_primeContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#print}.
	 * @param ctx the parse tree
	 */
	void enterPrint(BabyDuckParser.PrintContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#print}.
	 * @param ctx the parse tree
	 */
	void exitPrint(BabyDuckParser.PrintContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#expresion}.
	 * @param ctx the parse tree
	 */
	void enterExpresion(BabyDuckParser.ExpresionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#expresion}.
	 * @param ctx the parse tree
	 */
	void exitExpresion(BabyDuckParser.ExpresionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ExpSum}
	 * labeled alternative in {@link BabyDuckParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExpSum(BabyDuckParser.ExpSumContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ExpSum}
	 * labeled alternative in {@link BabyDuckParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExpSum(BabyDuckParser.ExpSumContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Expr}
	 * labeled alternative in {@link BabyDuckParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExpr(BabyDuckParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Expr}
	 * labeled alternative in {@link BabyDuckParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExpr(BabyDuckParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ExpRes}
	 * labeled alternative in {@link BabyDuckParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExpRes(BabyDuckParser.ExpResContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ExpRes}
	 * labeled alternative in {@link BabyDuckParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExpRes(BabyDuckParser.ExpResContext ctx);
	/**
	 * Enter a parse tree produced by the {@code TermMul}
	 * labeled alternative in {@link BabyDuckParser#termino}.
	 * @param ctx the parse tree
	 */
	void enterTermMul(BabyDuckParser.TermMulContext ctx);
	/**
	 * Exit a parse tree produced by the {@code TermMul}
	 * labeled alternative in {@link BabyDuckParser#termino}.
	 * @param ctx the parse tree
	 */
	void exitTermMul(BabyDuckParser.TermMulContext ctx);
	/**
	 * Enter a parse tree produced by the {@code TermDiv}
	 * labeled alternative in {@link BabyDuckParser#termino}.
	 * @param ctx the parse tree
	 */
	void enterTermDiv(BabyDuckParser.TermDivContext ctx);
	/**
	 * Exit a parse tree produced by the {@code TermDiv}
	 * labeled alternative in {@link BabyDuckParser#termino}.
	 * @param ctx the parse tree
	 */
	void exitTermDiv(BabyDuckParser.TermDivContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Term}
	 * labeled alternative in {@link BabyDuckParser#termino}.
	 * @param ctx the parse tree
	 */
	void enterTerm(BabyDuckParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Term}
	 * labeled alternative in {@link BabyDuckParser#termino}.
	 * @param ctx the parse tree
	 */
	void exitTerm(BabyDuckParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ParenthesisExpr}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterParenthesisExpr(BabyDuckParser.ParenthesisExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ParenthesisExpr}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitParenthesisExpr(BabyDuckParser.ParenthesisExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code UnarySum}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterUnarySum(BabyDuckParser.UnarySumContext ctx);
	/**
	 * Exit a parse tree produced by the {@code UnarySum}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitUnarySum(BabyDuckParser.UnarySumContext ctx);
	/**
	 * Enter a parse tree produced by the {@code UnaryMinus}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterUnaryMinus(BabyDuckParser.UnaryMinusContext ctx);
	/**
	 * Exit a parse tree produced by the {@code UnaryMinus}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitUnaryMinus(BabyDuckParser.UnaryMinusContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Atom}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterAtom(BabyDuckParser.AtomContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Atom}
	 * labeled alternative in {@link BabyDuckParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitAtom(BabyDuckParser.AtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#funcs}.
	 * @param ctx the parse tree
	 */
	void enterFuncs(BabyDuckParser.FuncsContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#funcs}.
	 * @param ctx the parse tree
	 */
	void exitFuncs(BabyDuckParser.FuncsContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#list_parameters}.
	 * @param ctx the parse tree
	 */
	void enterList_parameters(BabyDuckParser.List_parametersContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#list_parameters}.
	 * @param ctx the parse tree
	 */
	void exitList_parameters(BabyDuckParser.List_parametersContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(BabyDuckParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(BabyDuckParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#parameter_prime}.
	 * @param ctx the parse tree
	 */
	void enterParameter_prime(BabyDuckParser.Parameter_primeContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#parameter_prime}.
	 * @param ctx the parse tree
	 */
	void exitParameter_prime(BabyDuckParser.Parameter_primeContext ctx);
	/**
	 * Enter a parse tree produced by {@link BabyDuckParser#cte}.
	 * @param ctx the parse tree
	 */
	void enterCte(BabyDuckParser.CteContext ctx);
	/**
	 * Exit a parse tree produced by {@link BabyDuckParser#cte}.
	 * @param ctx the parse tree
	 */
	void exitCte(BabyDuckParser.CteContext ctx);
}