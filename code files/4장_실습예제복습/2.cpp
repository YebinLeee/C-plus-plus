#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;

	cout << "������ ���� �� ��? >> ";
	cin >> n;

	int* arr = new int[n];
	cout << "���� " << n << "�� �Է�>> ";
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	cout << "��� " << (double)sum / n << endl;
}