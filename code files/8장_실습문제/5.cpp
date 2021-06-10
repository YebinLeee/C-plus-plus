#include <iostream>
using namespace std;

class BaseArray{
private:
	int capacity; // �迭�� ũ�� 
	int *mem; // ���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity=100){
		this->capacity=capacity;
		mem=new int[capacity];
	}
	~BaseArray(){delete []mem;}
	void put(int index, int val){mem[index]=val;}
	int get(int index){return mem[index];}
	int getCapacity(){return capacity;}
};

class MyQueue : public BaseArray{
	int front, rear; 
public:
	MyQueue(int capacity):BaseArray(capacity){front=0;rear=0;};
	void enqueue(int n){
		if(rear==getCapacity()) return;
		put(rear++, n); // mem[size]=n;
	}
	int capacity(){	return getCapacity();}
	int length(){return (rear-front);}
	int dequeue(){
		if(length()==0) exit(1);
	return get(front++);}
};

int main(){
	MyQueue mQ(5); // 5���� ������ ������ �� �ִ� ť ���� 
	int size;
	cout<<"ť�� �� ���� ������ �����Ͻðڽ��ϱ�? >> ";
	cin>>size;
	
	int n;
	cout<<"ť�� ������ "<<size<<"���� ������ �Է��϶�>> ";
	for(int i=0;i<size;i++){
		cin>>n;
		mQ.enqueue(n); // ť�� ���� 
	}
	
	cout<<"ť�� �뷮: "<<mQ.capacity()<<", ť�� ũ��: "<<mQ.length()<<endl;
	
	cout<<"ť�� ���Ҹ� ������� �� �� �����Ͻðڽ��ϱ�? >> ";
	cin>>size;
	for(int i=0;i<size;i++)
		cout<<mQ.dequeue()<<' ';
		
	cout<<endl<<endl<<"ť�� ���� ũ��: "<<mQ.length()<<endl;
	cout<<"�����ִ� ��� ���Ҹ� �����մϴ�"<<endl;
	while(mQ.length()!=0){cout<<mQ.dequeue()<<' ';}
	cout<<endl<<"ť�� ���� ũ��: "<<mQ.length()<<endl;
}
