#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { this->a = a;this->b = b;this->c = c;this->d = d; }
	void show() {
		cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << " }" << endl;
	}
	void operator >> (int* x) { x[0] = a;x[1] = b;x[2] = c;x[3] = d; }
	void operator <<(int* x) { a = x[0];b = x[1];c = x[2];d = x[3]; }
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };

	a >> x; // a의 원소를 x에 복사
	b << y; // y를 b의 원소로 설정

	for (int i = 0;i < 4;i++)cout << x[i] << ' ';
	cout << endl;
	b.show();
}
