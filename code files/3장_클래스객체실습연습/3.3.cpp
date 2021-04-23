#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int balance;
public:
	Account(string name, int id, int b) {
		this->name = name;
		this->id = id;
		this->balance = b;
	}
	void deposit(int money) { this->balance += money; }
	string getOwner() { return this->name; }
	int inquiry() { return this->balance; }
	int withDraw(int money) { this->balance -= money; return money; }
};
int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withDraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}