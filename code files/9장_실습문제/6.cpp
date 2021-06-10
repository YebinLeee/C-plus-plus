#include <iostream>
using namespace std;

class AbstractStack{
protected:
public:
	virtual bool push(int n)=0; // ���ÿ� n push�ϰ� ������ full�̸� false return 
	virtual bool pop(int& n)=0; // ���ÿ��� ������ n�� �����ϰ� ������ empty�� false return 
	virtual int size()=0; // ���� ���ÿ� ����� ���� ���� 
};

class IntStack:public AbstractStack{
	int top; // ������ ��� 
	int capacity; // ��ü �뷮
	int *mem; // ���� �޸� �Ҵ���� ������ 
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
	IntStack intStack(3); // 5���� ��Ҹ� ������ �� �ִ� ���� ����
	for(int i=0;i<5;i++){
		if(intStack.push(i)) cout<<"���ÿ� "<<i<<" push, ������ ��� ���� : "<<intStack.size()<<endl;
		else{
			cout<<"���� ��ȭ"<<endl<<endl;;
			break;
		}
	}
	int data;
	for(int i=0;i<5;i++){
		if(intStack.pop(data)) cout<<"���ÿ��� "<<data<<" pop, ������ ��� ���� : "<<intStack.size()<<endl;
		else{
			cout<<"���� ����"<<endl;
			break;
		}
	}
}
