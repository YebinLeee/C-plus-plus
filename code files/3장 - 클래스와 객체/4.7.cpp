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
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.even();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ Ȧ�� ���� ���� 10 �� --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.oddInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;

}