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
	} while (n % 2==0); // n%2가 0이 아닌 경우(==홀수인경우) 계속 반복 실행
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

	cout << "-- 0 에서 " << RAND_MAX << "까지의 랜덤 홀수 정수 10 개--" << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 5에서 " << "20까지의 랜덤 홀수 정수 10 개 -- " << endl;
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(5,20);
		cout << n << ' ';
	}
	cout << endl;
}