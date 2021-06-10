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
	Power& operator ++ (){
		kick++; // a�� kick�� 1 ���� 
		punch++; // a�� puch�� 1 ���� 
		return *this;	// ��ü �ڽ��� ���� ���� 
	}
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
};

int main(){
	Power a(1,2), b;
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	
	b = ++a; // a�� ���� �������� �� b�� ����(������ a�� b�� ����) 
	
	cout<<endl<<"���� ����"<<endl; 
	cout<<"��ü a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"��ü b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
