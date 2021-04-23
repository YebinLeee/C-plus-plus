#include <iostream>
using namespace std;

int main() {
	char* p = new char[10]{'b', 'c', 'd', 'e', 'e', 'e', 'e', 'e', 'e', 'e'}; // 배열 초기솨

	char* q = p; // p[0]의 주소가 대입된다.

	q[0] = 'a';

	for (int i = 0;i < 10;i++)
		cout << p[i] << endl;

	cout << endl<< q[0] << endl << q;

	delete[]p;


	int* arr = new int[5];
	
	// 입력 받기
	for (int i = 0;i < 3;i++) {
		cout << "입력: ";
		cin >> arr[i];
	}

	int n = *arr;
	cout << n << endl;

	// 가장 큰 수 찾기
	int max = arr[0];
	for (int i = 1;i < 5;i++)
		if (*(arr + i) > max)
			max = *(arr + i);

	// 출력
	cout << "가장 큰 수는 " << max << endl;

	// 배열 반환
	delete[]arr;
}