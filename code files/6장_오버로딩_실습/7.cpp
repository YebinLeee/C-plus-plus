#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min=0, int max=100);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	return rand() % max + min;
}

// 알파벳이 모두 입력되어 있는 char 배열 요소들 중 랜덤 추출
/*char Random::nextAlphabet() {
	static const char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	return alpha[rand()%sizeof(alpha)-1];
}*/

// 알파벳의 아스키코드 이용
char Random::nextAlphabet() {
	int n = rand() % 2; // 대문자, 소문자 판별
	if (n) return rand() % 26 + 65; // 대문자
	else return rand() % 26 + 97; // 소문자
}

double Random::nextDouble() {
	return (double)rand()/RAND_MAX;
}

int main() {
	Random::seed();
	
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0;i < 10;i++)
		cout << Random::nextInt()<< ' ';
	
	cout << endl<<endl << "알파벳을 랜덤하게 10개를 출력합니다"<<endl;
	for (int i = 0;i < 10;i++)
		cout << Random::nextAlphabet() << ' ';

	cout << endl<<endl << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0;i < 10;i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;

}