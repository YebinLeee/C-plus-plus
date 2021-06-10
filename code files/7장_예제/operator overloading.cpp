#include <iostream>
using namespace std;

class Statistics{
	int capacity;
	int size;
	int *mem;
public:
	Statistics(int capacity=10){
		mem=new int[capacity];
		size=0;
	}
	~Statistics(){
		if(mem) delete []mem;
	}
	bool operator!(){ return size==0;}
	Statistics& operator << (int n){
		if(size==capacity){
			capacity*=2;
			int *q=new int[capacity];
			for(int i=0;i<size;i++)
				q[i]=mem[i];
			mem=q;
			delete []q;
		}
		
		mem[size++]=n;
		return *this;
	}
	void operator ~ (){
		cout<<endl<<"메모리 사이즈 : "<<size<<endl;
		for(int i=0;i<size;i++) cout<<mem[i]<<' ';
		cout<<endl;
	}
	void operator >> (int& avg){
		int sum=0;
		for(int i=0;i<size;i++) sum+=mem[i];
		avg=sum/size;
	}
};

int main(){
	Statistics stat;
	if(!stat) cout<<"현재 통계 데이터 없음"<<endl;
	
	int x[5];
	cout<<"5개 정수 입력 >> ";
	for(int i=0;i<5;i++){
		cin>>x[i];
		stat<<x[i];
	}
	~stat;
	
	stat<<100<<200;
	~stat;
	
	int avg;
	stat >> avg;
	cout<<endl<<"avg = "<<avg<<endl;
} 
