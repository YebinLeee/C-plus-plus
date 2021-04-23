#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom() {}
	int even() {
		int n;
		do {
			n = rand();
		} while (n % 2);
		return n;
	}
	int odd() {
		int n;
		do {
			n = rand();
		} while (n % 2==0);
		return n;
	}
	int evenInRange(int n1, int n2) {
		int n;
		do {
			n = rand() % n2 + n1;
		} while (n % 2);
		return n;
	}
	int oddInRange(int n1, int n2) {
		int n;
		do {
			n = rand() % n2 + n1;
		} while (n % 2==0);
		return n;
	}
};

int main() {
	srand((unsigned)time(NULL));
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.even();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 홀수 랜덤 정수 10 개 --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.oddInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;

}