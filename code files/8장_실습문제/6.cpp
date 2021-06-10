#include <iostream>
using namespace std;

class BaseArray{
private:
	int capacity; // 배열의 크기 
	int *mem; // 정수 배열을 만들기 위한 메모리의 포인터
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
	MyStack mStack(5); // 5개의 정수를 저장할 수 있는 큐 생성 
	int size;
	cout<<"스택에 몇 개의 정수를 삽입하시겠습니까? >> ";
	cin>>size;
	
	int n;
	cout<<"스택에 삽입할 "<<size<<"개의 정수를 입력하라>> ";
	for(int i=0;i<size;i++){
		cin>>n;
		mStack.push(n); // 큐에 삽입 
	}
	
	cout<<"스택의 용량: "<<mStack.capacity()<<", 스택의 크기: "<<mStack.length()<<endl;
	
	cout<<"스택의 원소를 몇 개 팝하시겠습니까? >> ";
	cin>>size;
	for(int i=0;i<size;i++)
		cout<<mStack.pop()<<' ';
		
	cout<<endl<<endl<<"스택의 현재 크기: "<<mStack.length()<<endl;
	cout<<"남아있는 모든 원소를 팝합니다"<<endl;
	while(mStack.length()!=0){cout<<mStack.pop()<<' ';}
	cout<<endl<<"스택의 현재 크기: "<<mStack.length()<<endl;
}
