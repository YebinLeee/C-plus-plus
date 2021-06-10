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
		
	friend Power operator + (Power op1, Power op2);
};

Power operator + (Power op1, Power op2){
	Power tmp;
	tmp.kick=op1.kick+op2.kick;
	tmp.punch=op1.punch+op2.punch;
	return tmp;
}

int main(){
	Power a(1,2), b(2,3), c;
	
	cout<<"°´Ã¼ a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"°´Ã¼ b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"°´Ã¼ c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
	
	c = a + b;
	
	cout<<endl<<"ÈÄÀ§ ¿¬»ê ÀÌÈÄ"<<endl; 
	cout<<"°´Ã¼ a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"°´Ã¼ b : "<<b.getKick()<<" "<<b.getPunch()<<endl;
	cout<<"°´Ã¼ c : "<<c.getKick()<<" "<<c.getPunch()<<endl;
}
