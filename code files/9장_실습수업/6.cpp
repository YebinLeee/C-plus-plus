#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
	virtual bool pop(int& n) = 0; // 스택에서 팝한 정수를 n에 리턴한다. 스택이 empty이면 false 리턴
	virtual int size() = 0; // 현재 스택에 저장된 정수의 개수 리턴
};

// 정수를 푸시, 팝 하는 연산 
class IntStack : public AbstractStack{
	int top;
	int capacity; // 용량
	int *stack; 
public:
	IntStack(int n){
		// stack에 capacity만큼 생성, 초기화 과정 
		stack=new int[n];
		this->capacity=n;
		top=0; // top을 0으로 초기화 (push연산: top값을 나중에 증가 / pop연산: top값을 처음에 감소) 
	}
	
	~IntStack(){if(stack) delete[]stack;}
	
	bool push(int n){
		if(top==capacity) return false;
		stack[top++]=n;
		return true;
	}
	
	bool pop(int& n){
		if(top==0) return false;
		n=stack[--top];
		return true;
	}
	
	int size(){return top;}
};

int main() {
	IntStack a(5);
	for(int i=0; i<10; i++)  { // 처음 5 개를 성공적으로 push되고 다음 5 개는 스택 full로 push 실패
		if(a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}

	int n;
	for(int i=0; i<10; i++)  { // 처음 5 개를 성공적으로 pop되고 다음 5 개는 스택 empty로 pop 실패
		if(a.pop(n)) cout << "pop 성공 " << n << endl;
		else cout << "스택 empty" << endl;
	}
}

