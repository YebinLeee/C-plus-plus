#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* remove(int s1[], int s2[], int size, int& retSize);
	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
};


int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* s = new int[size * 2];
	if (!s) return NULL; // s1�� s2��� null ������ �ʱ�ȭ�� �迭�� ��� s�� �� �迭�� �Ǹ�, �����Ҵ���� ����
	for (int i = 0;i < size;i++)s[i] = s1[i];
	for (int i = 0;i < size;i++)s[size + i] = s2[i];
	return s;
}

// x�� y�� ������ (x�� ������ y�� �ִ� ���Ҵ� ��� ��)
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	retSize = 0;
	int* s = new int[size];
	int i, j;

	if (!s) return NULL; // size�� 0�̰ų� ��� �� �迭�� ����� �Ǵ� ���

	// ������ ���� �߰ߵǸ� break��
	for (i = 0;i < size;i++) {
		// int check = 1;
		for (j = 0;j < size;j++)
			if (s1[i] == s2[j]) {
				// check = 0;
				break;
			}
		// if (check) s[retSize++] = s1[i]; // ������ ������ ���� �迭�� �ϳ� �� ũ�� ������.
		if (i == j) // ���� ���� ������ ���
			s[retSize++] = s1[i];
	}
	int* p = new int[retSize];
	for (int i = 0;i < retSize;i++)
		p[i] = s[i];

	delete[]s;
	return p;
}



int main() {
	int x[5], y[5];

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> y[i];

	int* p = ArrayUtility2::concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	for (int i = 0; i < 10; i++) cout << p[i] << ' ';
	cout << endl;

	int retSize;
	int* q = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << q[i] << ' ';
	cout << endl;

	delete[] p;
	delete[] q;
}
