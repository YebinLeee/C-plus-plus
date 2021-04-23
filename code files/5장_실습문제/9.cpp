#include <iostream>
#include <string>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) { this->value = value; };
	Accumulator& add(int n) { // value�� n�� ���� ���� ����; 
		this->value += n;
		//cout <<this<<endl;
		return *this;
	} 
	int get() { return value; }; // ������ �� value return
};
int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get() << endl;;
}