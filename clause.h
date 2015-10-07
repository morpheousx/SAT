//
// Created by Derek Jones on 10/6/15.
//

#ifndef CLAUSE_H
#define CLAUSE_H

#include "literal.h"

#include <vector>

using namespace std;

class clause
{
private:
	vector<literal> l;
public:
	clause();
	clause(vector<literal> lVec);

	vector<literal>getL();

	void addLiteral(literal lVal);

	bool evalC();

};




#endif //PROGRAM3CPP_CLAUSE_H
