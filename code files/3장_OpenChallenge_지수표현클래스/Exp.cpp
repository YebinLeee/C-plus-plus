#include "Exp.h"


Exp::Exp(int b, int e) {
	this->base = b;
	this->expon = e;
}
Exp::Exp(int b) {
	this->base = b;
	this->expon = 1;
}
Exp::Exp() {
	this->base = 1;
	this->expon = 1;
}
int Exp::getValue() {
	int res = 1;
	for (int i = 0;i < expon;i++)
		res *= base;
	return res;
}
bool Exp::equals(Exp b) {
	if (getValue()==b.getValue())return true;
	else return false;
}