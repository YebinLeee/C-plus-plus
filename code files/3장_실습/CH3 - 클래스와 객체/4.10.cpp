#include <iostream>
#include <string>
#include "calculator.h"
using namespace std;


int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	
	int n1,n2;
	char op;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>> ";
		cin >> n1>>n2>>op;

		switch (op) {
		case '+':
			a.setValue(n1, n2);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(n1, n2);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(n1, n2);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(n1, n2);
			cout << d.calculate() << endl;
			break;
		}

	}

}