#include "CNF.h"


CNF::CNF()
{

}

CNF::CNF(vector<clause> cVec)
{
	c = cVec;
}

void CNF::addClause(clause p)
{
	c.push_back(p);
}


vector<clause> CNF::getClauses()
{
	return c;
}


bool CNF::eval()
{
	int res = c[0].evalC();
	for (int i = 0; i < c.size(); i++)
	{
		res *= c[i].evalC();
	}

	return res;
}
