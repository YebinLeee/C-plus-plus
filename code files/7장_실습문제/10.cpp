#include <iostream>
using namespace std;

class Statistics{
	int *p; // 할당받은 메모리의 시작 주소 
	int capacity; // 배열에 할당된 메모리 공간 개수 
	int size; // 배열에 들어있는 요소 개수 
public:
	Statistics(int n=10){ // 생성자 함수 - 초기에 임의로 10개 공간 할당 
		capacity=n;
		size=0;
		p=new int[n]; // int 배열 동적 할당 
	}
	~Statistics(){if(p) delete []p; }
	
	bool operator ! (){return (size==0);} // 데이터 개수가 0개인 경우 true 반환 
	int operator >>(int &avg){ // avg 구하기(오른쪽 피연산자의 공간을 참조로 매개받음) 
		int sum=0;
		for(int i=0;i<size;i++) sum+=p[i];
		avg = sum/size; // 해당 공간에 sum/num 저장 
	}
	Statistics& operator << (int n){ // op를 객체의 요소로 삽입 
		if(size==capacity){ // 이미 들어있는 요소의 개수가 capacity에 도달했다면 
			capacity*=2; // capacity를 2배로 늘림 
			int *q=new int[capacity]; // 임시 포인터 q에 capacity만큼 동적 할당 
			for(int i=0;i<size;i++)
				q[i]=p[i]; // size까지 q에 기존 p를 옮기도록 한다. 
			p=q; // p의 주소를 q의 주소로 되바꾸고 
			delete []q; // 임시로 만들었던 q에 대해서는 모두 메모리 삭제 
		}
		p[size]=n; // 새로운 size부터 요소 대입
		size++;
		
		return *this; // 새로운 자기 자신 객체 갱신 
		
	}
	void operator ~ (){ // 출력
		 for(int i=0;i<size;i++) cout<<p[i]<<' ';
		 cout<<endl;
	}
};

int main(){
	Statistics stat;
	if(!stat) cout<<"현재 통계 데이터가 없습니다."<<endl;
	
	int x[5];
	cout<<"5개 정수 입력 >> ";
	for(int i=0;i<5;i++) cin>>x[i];
	
	for(int i=0;i<5;i++) stat<<x[i]; // x를 통계 객체에 삽입
	stat<<100<<200; // 통계 객체에 삽입
	~stat; // 통계 데이터 모두 출력 
	
	int avg;
	stat>>avg; // 통계 객체로부터 평균 받음
	cout<<"avg = "<<avg<<endl; 
}
