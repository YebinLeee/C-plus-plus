#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* p = new int[2 * size];

	for (int i = 0;i < size;i++)
		p[i] = s1[i];
	for (int i = 0;i < size;i++)
		p[size + i] = s2[i];
	return p;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* tmp = new int[size]; // 임시로 size만큼의 배열 동적 할당
	retSize = 0;

	for (int i = 0;i < size;i++) {
		int j;
		for (j = 0;j < size;j++)
			if (s1[i] == s2[j])break;
		if (j == size)
			tmp[retSize++] = s1[i];
	}
	
	int* p = new int[retSize];
	for (int i = 0;i < retSize;i++)
		p[i] = tmp[i];
	
	delete[]tmp;
	return p;
}
int main() {
	int x[5], y[5];
	int retSize;

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다 >> ";
	for (int i = 0;i < 5;i++)
		cin >> x[i];
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다 >> ";
	for (int i = 0;i < 5;i++)
		cin >> y[i];

	int* arr1 = ArrayUtility2::concat(x, y, 5);
	int* arr2 = ArrayUtility2::remove(x, y, 5, retSize);

	cout << endl<<"힙친 정수 배열을 출력한다" << endl;
	for (int i = 0;i < 10;i++) cout << arr1[i]<<' ';
	cout << endl<<"배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0;i < retSize;i++)cout << arr2[i]<<' ';
	cout << endl;

	delete[]arr1;
	delete[]arr2;
}