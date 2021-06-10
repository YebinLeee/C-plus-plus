#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 10) {
		this->capacity = capacity;mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray{
	int n;
public:
	MyStack(int n) {
		this->n = n;
	}
	void push(int n) {

	}
	void pop() {

	}
};
int main() {
	MyStack mStack(100);
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0;i < 5;i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "스택 용량 : " << mStack.capacity() << ", 스택 크기 : " << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl;
}