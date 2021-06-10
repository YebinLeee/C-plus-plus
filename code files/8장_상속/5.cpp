#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int *mem;
protected:
	BaseArray(int capacity=100) {
		this->capacity = capacity; mem = new int [capacity];
	}
	~BaseArray() { delete [] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue:public BaseArray{
	int head,tail,size;	
public:
		MyQueue(int c): BaseArray(c){
			head=0; // ť�� �����Ͱ� ���Ե� ��ġ
			tail=1;
			size=0;
		}
		void enqueue(int n);
		int dequeue();
		int length();
		int capacity();		
};

void MyQueue::enqueue(int n){
	
	if(size==getCapacity()) return;
	
	put(head, n);
	head++;
	size++;
}

int MyQueue::length(){
	return size;
}

int MyQueue::dequeue(){
	if(size==0) return -1;
	size--;
	tail++;
	return get(tail);
}


int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for(int i=0; i<5; i++) {
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl; 
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while(mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}


