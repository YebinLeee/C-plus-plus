#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick;this->punch = punch; }
	Power& operator << (Power a) {
		this->kick += a.kick;
		this->punch += a.punch;
		return *this;
	}
	Power& operator<<(int n) {
		this->kick += n;this->punch += n;
		return *this;
	}

	Power& operator -=(int n) {
		this->kick -= n;this->punch -= n;
		return *this;
	}
	void show() {
		cout << "kick=" << kick << ", punch=" << punch << endl;
	}
};

int main() {
	Power a(5, 5), b(3, 3);

	a.show();
	b.show();
	cout << endl;

	a << 3 << b -= 1;

	a.show();
	b.show();
	cout << endl;

}