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
	Power& operator << (int op){
		kick+=op;
		punch+=op;
		return *this;
	}
};


int main(){
	Power a(0,1);
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	
	a<<3<<10; // a의 kick과 punch에 각각 3을 더하고, 10을 더한다.
	 
	cout<<endl<<"<< 연산 후"<<endl;
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
}
