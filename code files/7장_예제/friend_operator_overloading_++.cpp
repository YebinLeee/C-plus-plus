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

// ���� ++ ������ �Լ� 
Power& operator ++ (Power& op){
	op.kick++;
	op.punch++;
	return op;
}

// ���� ++ ������ �Լ� 
Power operator ++ (Power& op, int x){
	Power tmp = op; // ���� ������ ��ü ���� 
	op.kick++; // ������ op�� kick, punch �� ���� 
	op.punch++; 
	return tmp;
}
int main(){
	Power a(1,2), b, c(1,2), d;
	
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"��ü c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	cout<<"��ü d : "<<d.getKick()<<" "<<d.getPunch()<<endl;
	
	b=++a;
	d=c++;
	
	cout<<endl<<"����, ���� ++ ���� ����"<<endl; 
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b(++a) : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"��ü c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	cout<<"��ü d(c++) : "<<d.getKick()<<" "<<d.getPunch()<<endl;
}
