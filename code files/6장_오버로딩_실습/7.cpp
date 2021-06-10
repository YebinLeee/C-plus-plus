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

// ���ĺ��� ��� �ԷµǾ� �ִ� char �迭 ��ҵ� �� ���� ����
/*char Random::nextAlphabet() {
	static const char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	return alpha[rand()%sizeof(alpha)-1];
}*/

// ���ĺ��� �ƽ�Ű�ڵ� �̿�
char Random::nextAlphabet() {
	int n = rand() % 2; // �빮��, �ҹ��� �Ǻ�
	if (n) return rand() % 26 + 65; // �빮��
	else return rand() % 26 + 97; // �ҹ���
}

double Random::nextDouble() {
	return (double)rand()/RAND_MAX;
}

int main() {
	Random::seed();
	
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0;i < 10;i++)
		cout << Random::nextInt()<< ' ';
	
	cout << endl<<endl << "���ĺ��� �����ϰ� 10���� ����մϴ�"<<endl;
	for (int i = 0;i < 10;i++)
		cout << Random::nextAlphabet() << ' ';

	cout << endl<<endl << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0;i < 10;i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;

}