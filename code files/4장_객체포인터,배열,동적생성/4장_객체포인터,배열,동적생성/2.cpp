#include <iostream>
using namespace std;

int main() {
	char* p = new char[10]{'b', 'c', 'd', 'e', 'e', 'e', 'e', 'e', 'e', 'e'}; // �迭 �ʱ��

	char* q = p; // p[0]�� �ּҰ� ���Եȴ�.

	q[0] = 'a';

	for (int i = 0;i < 10;i++)
		cout << p[i] << endl;

	cout << endl<< q[0] << endl << q;

	delete[]p;


	int* arr = new int[5];
	
	// �Է� �ޱ�
	for (int i = 0;i < 3;i++) {
		cout << "�Է�: ";
		cin >> arr[i];
	}

	int n = *arr;
	cout << n << endl;

	// ���� ū �� ã��
	int max = arr[0];
	for (int i = 1;i < 5;i++)
		if (*(arr + i) > max)
			max = *(arr + i);

	// ���
	cout << "���� ū ���� " << max << endl;

	// �迭 ��ȯ
	delete[]arr;
}