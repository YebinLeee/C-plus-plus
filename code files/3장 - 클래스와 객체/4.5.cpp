#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random() {}
	int next() { return rand(); }
	int nextInRange(int n1, int n2) { return rand() % n2 + n1; }
};

int main() {
	srand((unsigned)time(NULL));
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;

}