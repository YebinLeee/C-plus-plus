#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class SelectableRandom {
	int seed = 0;
public:
	int Even() {
		int n;
		do { n = rand(); } while (n % 2 != 0);
		return n;
	}
	int Odd() {
		int n;
		do { n = rand();} while (n % 2 == 1);
		return n;
	}
	int EvenInRange(int s, int e) {
		int n;
		do { n = rand() % (e - s + 1) + s; } while (n % 2 != 0);
		return n;
	}
	int OddInRange(int s, int e) {
		int n;
		do { n = rand() % (e - s + 1) + s; } while (n % 2 != 1);
		return n;
	}
};

int main() {
	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� ���� 10�� --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.Even();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 9������ ���� Ȧ�� ���� 10�� -- " << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.OddInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}