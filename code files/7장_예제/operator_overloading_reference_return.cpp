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
	Power& operator << (int op){
		kick+=op;
		punch+=op;
		return *this;
	}
};


int main(){
	Power a(0,1);
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	
	a<<3<<10; // a�� kick�� punch�� ���� 3�� ���ϰ�, 10�� ���Ѵ�.
	 
	cout<<endl<<"<< ���� ��"<<endl;
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
}
