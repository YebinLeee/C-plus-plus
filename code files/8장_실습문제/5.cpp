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
	MyQueue mQ(5); // 5개의 정수를 저장할 수 있는 큐 생성 
	int size;
	cout<<"큐에 몇 개의 정수를 삽입하시겠습니까? >> ";
	cin>>size;
	
	int n;
	cout<<"큐에 삽입할 "<<size<<"개의 정수를 입력하라>> ";
	for(int i=0;i<size;i++){
		cin>>n;
		mQ.enqueue(n); // 큐에 삽입 
	}
	
	cout<<"큐의 용량: "<<mQ.capacity()<<", 큐의 크기: "<<mQ.length()<<endl;
	
	cout<<"큐의 원소를 순서대로 몇 개 제거하시겠습니까? >> ";
	cin>>size;
	for(int i=0;i<size;i++)
		cout<<mQ.dequeue()<<' ';
		
	cout<<endl<<endl<<"큐의 현재 크기: "<<mQ.length()<<endl;
	cout<<"남아있는 모든 원소를 제거합니다"<<endl;
	while(mQ.length()!=0){cout<<mQ.dequeue()<<' ';}
	cout<<endl<<"큐의 현재 크기: "<<mQ.length()<<endl;
}
