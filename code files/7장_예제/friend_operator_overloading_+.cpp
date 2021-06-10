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
	
	// friend 키워드를 이용해 외부의 + 연산자 함수를 초데 
	friend Power operator + (int op1, Power op2);
};

// + 연산자 함수 외부에 구현 
Power operator + (int op1, Power op2){
	Power tmp;
	tmp.kick = op1 + op2.kick; // op2의 멤버 변수 kick에 접근 
	tmp.punch = op1 + op2.punch; // op2의 멤버 변수 punch에 접근 
	return tmp;
}

int main(){
	Power a(1,2), b;
	
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	
	b = 2 + a;
	
	cout<<endl<<"후위 연산 이후"<<endl; 
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
