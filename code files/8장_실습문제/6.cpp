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

class MyStack:public BaseArray{
	int top; 
public:
	MyStack(int capacity):BaseArray(capacity){top=0;}
	void push(int n){
		if(top==getCapacity()) return;
		put(top++, n); // mem[size]=n;
	}
	int capacity(){	return getCapacity();}
	int length(){return top;}
	int pop(){
		if(length()==0) exit(1);
		return get(--top);}
};


int main(){
	MyStack mStack(5); // 5���� ������ ������ �� �ִ� ť ���� 
	int size;
	cout<<"���ÿ� �� ���� ������ �����Ͻðڽ��ϱ�? >> ";
	cin>>size;
	
	int n;
	cout<<"���ÿ� ������ "<<size<<"���� ������ �Է��϶�>> ";
	for(int i=0;i<size;i++){
		cin>>n;
		mStack.push(n); // ť�� ���� 
	}
	
	cout<<"������ �뷮: "<<mStack.capacity()<<", ������ ũ��: "<<mStack.length()<<endl;
	
	cout<<"������ ���Ҹ� �� �� ���Ͻðڽ��ϱ�? >> ";
	cin>>size;
	for(int i=0;i<size;i++)
		cout<<mStack.pop()<<' ';
		
	cout<<endl<<endl<<"������ ���� ũ��: "<<mStack.length()<<endl;
	cout<<"�����ִ� ��� ���Ҹ� ���մϴ�"<<endl;
	while(mStack.length()!=0){cout<<mStack.pop()<<' ';}
	cout<<endl<<"������ ���� ũ��: "<<mStack.length()<<endl;
}
