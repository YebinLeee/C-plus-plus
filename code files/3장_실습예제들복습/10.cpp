#include <iostream>
#include <string>
using namespace std;

#include "calculator.h"

int main() {
	int x, y;
	char op;

	Add a;
	Sub s;
	Mul m;
	Div d;

	while(1)
	{
		cout << "�� ������ �����ڸ� �Է��ϼ��� >>";
		cin >> x >> y >> op;

		switch (op) {
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << s.calculate() << endl << endl;
			break;
		default:break;
		}
	}
}