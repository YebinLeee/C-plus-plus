#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) { this->a = a;this->b = b;this->c = c;this->d = d; }
	void show() {cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << " }" << endl;
}
	friend void operator >> (Matrix&, int* x);
	friend void operator <<(Matrix&, int* x);
};

void operator >>(Matrix& m, int* x) { x[0] = m.a;x[1] = m.b;x[2] = m.c;x[3] = m.d; }
void operator <<(Matrix& m , int* x) { m.a = x[0];m.b = x[1];m.c = x[2];m.d = x[3]; }


int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };

	a >> x; // a의 원소를 x에 복사
	b << y; // y를 b의 원소로 설정

	for (int i = 0;i < 4;i++)cout << x[i] << ' ';
	cout << endl;
	b.show();
}