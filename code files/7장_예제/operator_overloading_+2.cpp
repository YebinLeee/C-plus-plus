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
	Power operator + (int op2){
		Power tmp;
		tmp.kick = kick + op2;
		tmp.punch = punch + op2;
		return tmp;
	}
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
};

int main(){
	Power a(1,2), b;
	b=a+2; // c�� a�� '2'��� ��ü�� ���� ��ü
	
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
