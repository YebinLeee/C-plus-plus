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
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0;i < 5;i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "���� �뷮 : " << mStack.capacity() << ", ���� ũ�� : " << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl;
}