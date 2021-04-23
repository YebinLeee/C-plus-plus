#ifndef EXP_H
#define EXP_H

class Exp {
	int base, exp;
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getBase();
	int getValue();
	int getExp();
	bool equals(Exp ex);
};


#endif EXP_H