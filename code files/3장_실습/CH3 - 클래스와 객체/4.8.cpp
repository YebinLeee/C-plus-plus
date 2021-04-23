#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:
	Integer(int n) { this->num = n; }
	Integer(string s) { this->num = stoi(s); }
	void set(int n) { this->num = n; }
	int get() { return this->num; }
	bool isEven() { if (num % 2 == 0) return true; }
};
int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}