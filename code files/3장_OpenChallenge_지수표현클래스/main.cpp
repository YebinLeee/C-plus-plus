#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2); // 3^2=9 (베이스:3, 지수:2, 결과:9_
	Exp b(9); // 9^1=9 (베이스:9, 지수:1, 결과:9)
	Exp c; // 1^1=1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b)) cout << "same" << endl;
	else cout << "not same" << endl;
}