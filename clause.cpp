#ifndef CLAUSE_CPP
#define CLAUSE_CPP

#include "clause.h"

clause::clause()
{

}


clause::clause(vector<literal> lVec)
{
	l = lVec;
}

vector<literal> clause::getL()
{
	return l;
}

void clause::addLiteral(literal lVal)
{
	l.push_back(lVal);
}

bool clause::evalC()
{
	int res = l[0].get_tAss();
	for (int i = 0; i < l.size(); i++)
	{
		res += l[i].get_tAss();
		if (res > 1)
		{
			res = 1;
		}
	}
	return res;

}

#endif
