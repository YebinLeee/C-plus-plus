#include <iostream>
using namespace std;
// ���� ������ ��������� ����ϱ�
// return �� �ȿ��� �Լ� ��ȯ�� ��������
// return �� �ȿ��� ���� ������ ���

/*
int big(int a, int b) {
	int result = a > b ? a : b;
	if (result < 100)return result;
	else return 100;
	
	/*
	int result = result < 100 ? result : 100;
	return result;
	*/


int big(int a, int b, int c = 100) {
	int big = a > b ? a : b;
	if (big < c)return big;
	else return c;

	/*
	int m=(a>b)?a:b;
	return (m>c)?c:m;
	*/
	// 	return (a>b?a:b) <=c? c : (a>b?a:b);
}

int big(int a, int b){
	return big(a,b,100);
}


int main() {
	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
	int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
	cout << x << ' ' << y << ' ' << z << endl;
}
