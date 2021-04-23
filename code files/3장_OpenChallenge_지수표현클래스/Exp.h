#ifndef EXP_H
#define EXP_H

class Exp {
	int base;
	int expon;
public:
	Exp(int b, int e);
	Exp(int b);
	Exp();
	int getValue();
	int getBase() { return this->base; }
	int getExp() { return this->expon; }
	bool equals(Exp b);
};

#endif