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
		
	friend Power& operator ++ (Power &op);
	friend Power operator ++ (Power& op, int x);
};

// 전위 ++ 연산자 함수 
Power& operator ++ (Power& op){
	op.kick++;
	op.punch++;
	return op;
}

// 후위 ++ 연산자 함수 
Power operator ++ (Power& op, int x){
	Power tmp = op; // 증가 이전의 객체 대입 
	op.kick++; // 참조된 op의 kick, punch 값 증가 
	op.punch++; 
	return tmp;
}
int main(){
	Power a(1,2), b, c(1,2), d;
	
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"객체 c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	cout<<"객체 d : "<<d.getKick()<<" "<<d.getPunch()<<endl;
	
	b=++a;
	d=c++;
	
	cout<<endl<<"전위, 후위 ++ 연산 이후"<<endl; 
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b(++a) : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"객체 c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	cout<<"객체 d(c++) : "<<d.getKick()<<" "<<d.getPunch()<<endl;
}
