//
// Created by Derek Jones on 10/6/15.
//

#ifndef LITERAL_H
#define LITERAL_H


class literal
{
private:
	bool tAss; // used to store truth assignment
	bool isNeg; // used to denote is negated
	int iVal; // used to denote x1 from x2 ... so on so forth
public:
	literal();
	literal(bool t, bool n, bool i);
	bool get_tAss();
	void set_tAss(bool a);
	bool get_isNeg();
	void set_isNeg(bool a);
	int get_iVal();
	void set_iVal(int a);

};


#endif //PROGRAM3CPP_LITERAL_H
