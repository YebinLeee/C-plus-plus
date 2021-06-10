#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0){
		this->kick=kick;
		this->punch=punch;
	}
	Power& operator ++ (){
		kick++; // a의 kick값 1 증가 
		punch++; // a의 puch값 1 증가 
		return *this;	// 객체 자신을 참조 리턴 
	}
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
};

int main(){
	Power a(1,2), b;
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	
	b = ++a; // a에 대한 전위연산 후 b에 대입(증가한 a를 b에 저장) 
	
	cout<<endl<<"연산 이후"<<endl; 
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
