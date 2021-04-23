#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom() {}
	int next() {
		int n;
		do {
			n = rand();
		} while (n % 2);
		return n; }
	int nextInRange(int n1, int n2) {
		int n;
		do {
			n = rand()%n2+n1;
		} while (n % 2);
		return n;
	}
};

int main() {
	srand((unsigned)time(NULL));
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;

}