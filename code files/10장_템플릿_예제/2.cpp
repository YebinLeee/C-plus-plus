#include <iostream>
using namespace std;

// 제네릭 클래스 선언부  
template <class T>
class MyStack{
	int top; 
	T data[100]; // 100개의 요소를 저장 가능 
public:
	MyStack(); // 생성자 함수
	void push(T element); // 요소를 삽입 
	T pop(); // 요소를 반환하고 삭제 
};

// 제네릭 클래스 구현부  

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
	for (int i=1;i<=10;i++)iStack.push(i); // 1부터 10까지 push
	while(int n=iStack.pop()) // 10부터 다시 pop하고 삭제
		cout<<n<<" ";
	cout<<endl;
	
	MyStack<char> cStack;
	for (char c='a';c<='z';c++) cStack.push(c); // 'a'부터 'z'까지 push
	while(char ch=cStack.pop()) // 'z'부터 다시 pop하고 삭제
		cout<<ch<<" ";
	cout<<endl;
}
