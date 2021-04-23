// 메모리 크기만큼 메모리를 동적 생성하는 프로그램

#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	// MyVector(); // 기본 생성자 지우기
	MyVector(int n=100, int val=0);

	~MyVector() { delete[] mem; }
	void show() {
		for (int i = 0; i < size; i++) cout << mem[i] << ' ';
		cout << endl;
	}
};
/*
MyVector::MyVector() {
	mem = new int[100];
	size = 100;
	for (int i = 0; i < size; i++) mem[i] = 0;
}
*/

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

int main() {
	MyVector a; // a(100, 0);과 동일
	MyVector b(10, 3);

	a.show(); // 100개의 0이 출력
	b.show(); // 10개의 3이 출력
}

