#include "Exp.h"

Exp::Exp() {
	base = 1, exp = 1;
}
Exp::Exp(int a) {
	base = a, exp = 1;
}
Exp::Exp(int a, int b) {
	base = a, exp = b;
}

int Exp::getBase() { return base; }
int Exp::getValue() {
	int value = 1;
	for (int i = 0;i < exp;i++)
		value *= base;
	return value;
}
int Exp::getExp() { return exp; }
bool Exp::equals(Exp ex) {
	if (getValue() == ex.getValue())
		return 1;
	else return 0;
}