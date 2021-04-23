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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개 --" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.Even();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 9까지의 랜덤 홀수 정수 10개 -- " << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.OddInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}