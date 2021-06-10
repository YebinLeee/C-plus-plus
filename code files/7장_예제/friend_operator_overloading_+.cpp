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
	
	// friend Ű���带 �̿��� �ܺ��� + ������ �Լ��� �ʵ� 
	friend Power operator + (int op1, Power op2);
};

// + ������ �Լ� �ܺο� ���� 
Power operator + (int op1, Power op2){
	Power tmp;
	tmp.kick = op1 + op2.kick; // op2�� ��� ���� kick�� ���� 
	tmp.punch = op1 + op2.punch; // op2�� ��� ���� punch�� ���� 
	return tmp;
}

int main(){
	Power a(1,2), b;
	
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	
	b = 2 + a;
	
	cout<<endl<<"���� ���� ����"<<endl; 
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
