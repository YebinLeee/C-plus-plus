#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		arr[0] = a;arr[1] = b;arr[2] = c;arr[3] = d;
	}
	Matrix& operator +=(Matrix m) {
		for (int i = 0;i < 4;i++)
			arr[i] += m.arr[i];
		return *this;
	}
	Matrix operator +(Matrix m) {
		Matrix tmp;
		for (int i = 0;i < 4;i++)
			tmp.arr[i] = arr[i] + m.arr[i];
		return tmp;
	}
	bool operator ==(Matrix m) {
		for (int i = 0;i < 4;i++)
			if (arr[i] != m.arr[i]) return false;
		return true;
	}
	void show() {
		cout << "Matrx = { ";
		for (int i = 0;i < 4;i++) cout << arr[i] << ' ';
		cout << "}" << endl;
	}

};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	a.show();b.show();c.show();
	cout << endl;

	c = a + b; // c = (1+2, 2+3, 3+4, 4+5) = (3, 5, 7, 9)
	a.show();b.show();c.show();
	cout << endl;

	a += b += c;
	// a= (1+2, 2+3, 3+4, 4+5) = (3, 5, 7, 9) => (3+3, 5+5, 7+7, 9+9) = (6, 10, 14, 18)
	// b= (2+3, 3+5, 4+7, 5+9) = (5, 7, 11, 14)
	a.show();b.show();c.show();

	if (a == b) cout << "a and c are the same" << endl;
}