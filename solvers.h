#ifndef SOLVERS_H
#define SOLVERS_H

#include "CNF.h"

class solvers
{
public:
	void Min_Conflicts(CNF formula);
	void walkSat(CNF formula);
	void DPLL(CNF formula);

};









#endif
