#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size); // int 배열을 double 배열로 변환
	static void doubleToInt(double source[], int dest[], int size); // double 배열을 int 배열로 변환
};

// 구현부에서는 static 지정자 쓰면 안됨
void ArrayUtility::intToDouble(int source[], double dest[], int size) {
	for (int i = 0;i < size;i++)
		dest[i] = (double)source[i];
}

// double, float - > int (반올림 X, 소수점 버림)
void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
	for (int i = 0;i < size;i++)
		dest[i] = (int)source[i];
}
int main() {
	int x[] = { 1,2,3,4,5 };
	double y[5];
	double z[] = { 9.9, 8.8, 7.7, 6.6, 5.6 };

	// 클래스를 이용해 static 함수에 접근
	ArrayUtility::intToDouble(x, y, 5); // x[] -> y[] 
	for (int i = 0; i < 5; i++) cout << y[i] << ' ';
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
	cout << endl;
}
