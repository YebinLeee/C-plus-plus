#include <iostream>
using namespace std;

class AbstractStack{
protected:
public:
	virtual bool push(int n)=0; // 스택에 n push하고 스택이 full이면 false return 
	virtual bool pop(int& n)=0; // 스택에서 정수를 n에 저장하고 스택이 empty면 false return 
	virtual int size()=0; // 현재 스택에 저장된 정수 리턴 
};

class IntStack:public AbstractStack{
	int top; // 스택의 상단 
	int capacity; // 전체 용량
	int *mem; // 동적 메모리 할당받을 포인터 
public:
	IntStack(int capacity){
		this->capacity=capacity;
		top=0;
		mem=new int[capacity];
	}
	~IntStack(){
		if(mem) delete []mem;
	} 
	bool push(int n){
		if(top==capacity) return false;
		mem[top++]=n;
		return true;
	}
	bool pop(int& n){
		if(top==0) return false;
		n=mem[--top];
		return true;		
	}
	int size(){return top;}
};

int main(){
	IntStack intStack(3); // 5개의 요소를 저장할 수 있는 스택 생성
	for(int i=0;i<5;i++){
		if(intStack.push(i)) cout<<"스택에 "<<i<<" push, 스택의 요소 개수 : "<<intStack.size()<<endl;
		else{
			cout<<"스택 포화"<<endl<<endl;;
			break;
		}
	}
	int data;
	for(int i=0;i<5;i++){
		if(intStack.pop(data)) cout<<"스택에서 "<<data<<" pop, 스택의 요소 개수 : "<<intStack.size()<<endl;
		else{
			cout<<"스택 공백"<<endl;
			break;
		}
	}
}
