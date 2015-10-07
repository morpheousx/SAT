#include "solvers.h"



void solvers::DPLL(CNF formula)
{
	//Algorithm DPLL
	//Input : A set of clauses Φ.
	//Output : A Truth Value.


	//function DPLL(Φ)
	//if Φ is a consistent set of literals
	//	then return true;
	//if Φ contains an empty clause
	//	then return false;
	//for every unit clause l in Φ
	//	Φ ← unit - propagate(l, Φ);
	//for every literal l that occurs pure in Φ
	//	Φ ← pure - literal - assign(l, Φ);
	//l ← choose - literal(Φ);
	//return DPLL(Φ ∧ l) or DPLL(Φ ∧ not(l));

	//https://en.wikipedia.org/wiki/DPLL_algorithm





}


void solvers::Min_Conflicts(CNF formula)
{
	// to be implemented


	/*algorithm MIN - CONFLICTS
	input : csp, a constraint satisfaction problem
			max_steps, the number of steps allowed before giving up
			current_state, an initial assignment of values for the variables in the csp
		output : a solution set of values for the variable or failure
				 for i = 1 to max_steps do
					 if current_state is a solution of csp then return current_state
						 var <--a randomly chosen variable from the set of conflicted variables CONFLICTED[csp]
						 value <--the value v for var that minimizes CONFLICTS(var, v, current, csp)
						 set var = value in current_state
						 return failure*/
	//https://en.wikipedia.org/wiki/Min-conflicts_algorithm

}


void solvers::walkSat(CNF formula)
{
	// to be implemented


	//https://en.wikipedia.org/wiki/WalkSAT


}
