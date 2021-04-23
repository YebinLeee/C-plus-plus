#include <iostream>
using namespace std;

int add(int arr[], int size) {
	int sum = 0;
	for (int i = 0;i < size;i++)
		sum += arr[i];
	return sum;
}

int add(int a[], int size, int b[]) {
	/*
	int sum = 0;
	for (int i = 0;i < size;i++)
		sum += a[i] + b[i];
	return sum;
	*/
	return add(a, size) + add(b, size); // return������ �Լ� ȣ�� ����
}

int add(int arr[], int size, int arr2[] = nullptr) // NULL =? nullptr
{
	int sum = 0;
	/*
	for (int i = 0;i < size;i++)
		sum += arr[i];
	if (arr2 == NULL)return sum;
	for (int i = 0;i < size;i++)
		sum += arr2[i];
	return sum;
	*/
	
	for (int i = 0;i < size;i++) sum += arr[i];
	if (arr2 == nullptr) return sum;
	for (int i = 0;i < size;i++) sum += arr2[i];
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 10 ��� 
	cout << d << endl; // 55 ���
}
