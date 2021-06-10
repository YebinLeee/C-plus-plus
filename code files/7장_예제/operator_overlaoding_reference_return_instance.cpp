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
		
	// < ������ �ߺ� ��� �Լ� 
	Power& operator << (Power op2){
		kick+=op2.kick;
		punch+=op2.punch;
		return *this;
	}
};


int main(){
	Power a(0,1), b(3,3), c(2,4);
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"��ü c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	
	a<<b<<c; // a�� kick�� punch�� ���� 3�� ���ϰ�, 10�� ���Ѵ�.
	 
	cout<<endl<<"a<<b<<c ���� ��"<<endl;
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
}
