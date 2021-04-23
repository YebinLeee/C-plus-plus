#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize);
	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
};


int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* s = new int[size * 2];
	if (!s) return NULL; // s1과 s2모두 null 값으로 초기화된 배열인 경우 s는 빈 배열이 되며, 동적할당되지 않음
	for (int i = 0;i < size;i++)s[i] = s1[i];
	for (int i = 0;i < size;i++)s[size + i] = s2[i];
	return s;
}

// x와 y의 차집합 (x의 원소중 y에 있는 원소는 모두 뺌)
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	retSize = 0;
	int* s = new int[size];
	int i, j;

	if (!s) return NULL; // size가 0이거나 비어 빈 배열을 만들게 되는 경우

	// 동일한 값이 발견되면 break문
	for (i = 0;i < size;i++) {
		// int check = 1;
		for (j = 0;j < size;j++)
			if (s1[i] == s2[j]) {
				// check = 0;
				break;
			}
		// if (check) s[retSize++] = s1[i]; // 후증가 연산자 쓰면 배열이 하나 더 크게 잡힌다.
		if (i == j) // 같은 값이 없었던 경우
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

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> y[i];

	int* p = ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; i++) cout << p[i] << ' ';
	cout << endl;

	int retSize;
	int* q = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << q[i] << ' ';
	cout << endl;

	delete[] p;
	delete[] q;
}
