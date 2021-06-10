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
	Power operator ++ (int x){
		Power tmp = *this; // 증가 이전 객체를 tmp에 저장 
		kick++;
		punch++;
		return tmp;	// 후위 증가가 일어난 후, 증가 이전에 저장했던 tmp를 반환	
	}
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
};

int main(){
	Power a(1,2), b;
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	
	b = a++; // a에 대한 전위연산 후 b에 대입(증가한 a를 b에 저장) 
	
	cout<<endl<<"후위 연산 이후"<<endl; 
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
