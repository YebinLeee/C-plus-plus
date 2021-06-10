#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
	virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� �����Ѵ�. ������ empty�̸� false ����
	virtual int size() = 0; // ���� ���ÿ� ����� ������ ���� ����
};

// ������ Ǫ��, �� �ϴ� ���� 
class IntStack : public AbstractStack{
	int top;
	int capacity; // �뷮
	int *stack; 
public:
	IntStack(int n){
		// stack�� capacity��ŭ ����, �ʱ�ȭ ���� 
		stack=new int[n];
		this->capacity=n;
		top=0; // top�� 0���� �ʱ�ȭ (push����: top���� ���߿� ���� / pop����: top���� ó���� ����) 
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
	for(int i=0; i<10; i++)  { // ó�� 5 ���� ���������� push�ǰ� ���� 5 ���� ���� full�� push ����
		if(a.push(i)) cout << "push ����" << endl;
		else cout << "���� full" << endl;
	}

	int n;
	for(int i=0; i<10; i++)  { // ó�� 5 ���� ���������� pop�ǰ� ���� 5 ���� ���� empty�� pop ����
		if(a.pop(n)) cout << "pop ���� " << n << endl;
		else cout << "���� empty" << endl;
	}
}

