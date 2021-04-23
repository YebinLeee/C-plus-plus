#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;

	cout << "정수의 개수 몇 개? >> ";
	cin >> n;

	int* arr = new int[n];
	cout << "정수 " << n << "개 입력>> ";
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	cout << "평균 " << (double)sum / n << endl;
}