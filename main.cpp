#include <iostream>
#include <fstream>
#include <string>

#include "CNF.h"
#include "clause.h"
#include "literal.h"
#include "solvers.h"



const int MAX_CHARS_PER_LINE = 512;
const int MAX_TOKENS_PER_LINE = 20;
const char* const DELIMITER = " ";
#define _CRT_SECURE_NO_WARNINGS

using namespace std;








int CNFparser(string fileName, CNF &formula)
{
	

	// create a file-reading object
	ifstream fin;
	fin.open(fileName); // open a file
	if (!fin.good())
		return 1; // exit if file not found

	// read each line of the file
	while (!fin.eof())
	{
		// read an entire line into memory
		char buf[MAX_CHARS_PER_LINE];
		fin.getline(buf, MAX_CHARS_PER_LINE);
		
		if (buf[0] == 'p')
		{
			// parse line to obtain number_of_variables and number_of_clauses
			break;
		}

		else if (buf[0] == 'c')
		{
			// ignore the line 
		}

		else
		{
			// report error and halt
		}

	}

	while (!fin.eof())
	{
		char buf[MAX_CHARS_PER_LINE];
		fin.getline(buf, MAX_CHARS_PER_LINE);

		if (buf[0] == 'c')
		{
			//ignore the line
		}

		else if (buf[0] == 'p')
		{
			// report error and halt
		}

		else
		{
			int i = 0;
			string val;
			literal templit; 
			clause term;
			while (buf[i] != '0')
			{

				if (buf[i] == '-')
				{
					templit.set_isNeg(true);
					i++;
				}
				else if (buf[i] == ' ')
				{
					i++;
				}
				else
				{
					if (buf[i + 1] == ' ' && val.size() == 0)
					{
						templit.set_iVal(buf[i] - '0');
						term.addLiteral(templit);
						templit.set_isNeg(false);
						i++;
					}
					else if (i > 0 && (buf[i - 1] != ' ' || buf[i - 1] != '-') && (buf[i+1] == ' '))
					{
						val.push_back(buf[i]);
						templit.set_iVal(stoi(val));
						term.addLiteral(templit);
						templit.set_isNeg(false);
						val.clear();
						i++;
					}
					else 
					{
						val.push_back(buf[i]);
						i++;
					}
					
				}
			}
			formula.addClause(term);
			


		}
	}




}
















int main(int argC, char* argV[])
{
	

	literal x1(0,false,1);
	literal x2(0, false, 2);
	literal x3(1, true, 1);

	vector<literal> lVector;
	lVector.push_back(x1);
	lVector.push_back(x2);
	lVector.push_back(x3);

	clause cl(lVector);

	vector<clause> frikinVector;
	frikinVector.push_back(cl);

	CNF ex;
	
	// test to make sure CNF of one clause and said clause eval to same value

	//cout << ex.eval() << endl;

	//cout << cl.evalC() << endl;

	int resVal = CNFparser("test1.cnf",ex);
	
	cout<<ex.getClauses().size()<<endl;


	cin.get();
	return 0;

}
