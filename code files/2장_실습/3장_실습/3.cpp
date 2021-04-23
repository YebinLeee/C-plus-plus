#include <iostream>
#include <string>
using namespace std;


class Account {
private:
	string name;
	int id;
	int balance;

public:
	Account(string, int, int);
	void deposit(int);
	string getOwner();
	int inquiry();
	int withdraw(int);
};

Account::Account(string n, int i, int b){
	name = n;
	id = i;
	balance = b;
}

void Account::deposit(int money) {
	balance += money;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}
int Account::withdraw(int money) {
	if (money > balance)
		money = 0;
	else
		balance -= money;
	return money;
}

int main() {     

	Account a("¿µÈñ", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	
	return 0;
}