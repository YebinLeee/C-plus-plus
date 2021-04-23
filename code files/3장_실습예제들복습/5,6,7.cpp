#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class OddRandom {
public:
	OddRandom() {}
	int next();
	int nextInRange(int s, int e);
};

int OddRandom::next() {
	int n;
	do {
		n = rand() % RAND_MAX;
	} while (n % 2==0); // n%2�� 0�� �ƴ� ���(==Ȧ���ΰ��) ��� �ݺ� ����
	return n;
}

int OddRandom::nextInRange(int s, int e) {
	int n;
	do {
		n = rand() % (e - s + 1) + s;
	} while (n % 2==0);
	return n;
}
int main() {
	srand((unsigned)time(NULL));
	OddRandom r;

	cout << "-- 0 ���� " << RAND_MAX << "������ ���� Ȧ�� ���� 10 ��--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 5���� " << "20������ ���� Ȧ�� ���� 10 �� -- " << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(5,20);
		cout << n << ' ';
	}
	cout << endl;
}