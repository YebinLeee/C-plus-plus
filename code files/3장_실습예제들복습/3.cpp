#include <iostream>
using namespace std;

class Accout {
	string name;
	int id, balance;
public:
	Accout(string n, int i, int m) { name = n;id = i;balance = m; }
	string getOwner() { return name; }
	void deposit(int m) { balance += m; }
	int withdraw(int m) { balance -= m;return m; }
	int inquiry() { return balance; }
};
int main() {
	Accout a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}