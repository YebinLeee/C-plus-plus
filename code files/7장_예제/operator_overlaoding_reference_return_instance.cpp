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
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
		
	// < 연산자 중복 멤버 함수 
	Power& operator << (Power op2){
		kick+=op2.kick;
		punch+=op2.punch;
		return *this;
	}
};


int main(){
	Power a(0,1), b(3,3), c(2,4);
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"객체 c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	
	a<<b<<c; // a의 kick과 punch에 각각 3을 더하고, 10을 더한다.
	 
	cout<<endl<<"a<<b<<c 연산 후"<<endl;
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
}
