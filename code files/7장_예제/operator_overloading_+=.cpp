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
	Power& operator += (Power op2){
		kick += op2.kick;
		punch += op2.punch;
		return *this;
	}
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
};

int main(){
	Power a(1,2), b(2,3), c;
	c=a+=b; // c�� a�� b�� ���� ��ü
	
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"��ü c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	
}
