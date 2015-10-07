//
// Created by Derek Jones on 10/6/15.
//

#ifndef CNF_H
#define CNF_H

#include "clause.h"

class CNF
{
private:
	vector<clause> c;
public:
	CNF();
	CNF(vector<clause> cVec);
	void addClause(clause p);

	vector<clause> getClauses();

	bool eval();
};




#endif //PROGRAM3CPP_CNF_H
