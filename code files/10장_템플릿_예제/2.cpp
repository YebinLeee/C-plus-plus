#include <iostream>
using namespace std;

// ���׸� Ŭ���� �����  
template <class T>
class MyStack{
	int top; 
	T data[100]; // 100���� ��Ҹ� ���� ���� 
public:
	MyStack(); // ������ �Լ�
	void push(T element); // ��Ҹ� ���� 
	T pop(); // ��Ҹ� ��ȯ�ϰ� ���� 
};

// ���׸� Ŭ���� ������  

template <class T>
MyStack<T>::MyStack(){
	top=-1;
}
template <class T>
void MyStack<T>::push(T element){
	if(top==99){
		cout<<"stack full"<<endl;
		return;
	}
	data[++top]=element;
}
template <class T>
T MyStack<T>::pop(){
	if(top==-1){
		cout<<"stack empty"<<endl;
		return 0;
	}
	return data[top--];
}

int main(){
	MyStack<int> iStack;
	for (int i=1;i<=10;i++)iStack.push(i); // 1���� 10���� push
	while(int n=iStack.pop()) // 10���� �ٽ� pop�ϰ� ����
		cout<<n<<" ";
	cout<<endl;
	
	MyStack<char> cStack;
	for (char c='a';c<='z';c++) cStack.push(c); // 'a'���� 'z'���� push
	while(char ch=cStack.pop()) // 'z'���� �ٽ� pop�ϰ� ����
		cout<<ch<<" ";
	cout<<endl;
}
