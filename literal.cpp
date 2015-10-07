#include "literal.h"

literal:: literal()
{
	tAss = false;
	isNeg = false;
	iVal = 1;
}

literal::literal(bool t, bool n, bool i)
{
	tAss = t;
	isNeg = n;
	iVal = i;
}

bool literal::get_tAss()
{
	if (isNeg == false) {
		return tAss;
	}
	else
	{
		if (tAss == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void literal::set_tAss(bool a)
{
	tAss = a;
}

bool literal::get_isNeg()
{
	return isNeg;
}

void literal::set_isNeg(bool a)
{
	isNeg = a;
}

int literal::get_iVal()
{
	return iVal;
}

void literal::set_iVal(int a)
{
	iVal = a;
}
