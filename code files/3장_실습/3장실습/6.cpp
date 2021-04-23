#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EvenRandom {
	int seed = 0;
public:
	int next() {
		int n;
		do {
			n = rand();
		} while (n % 2 == 1);
		return n;
	}
	int nextInRange(int s, int e) {
		int n;
		do {
			n = rand() % (e - s + 1) + s;
		} while (n % 2 == 1);
		return n;
	}
};

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10�� --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 4������ ���� ���� 10�� -- " << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}