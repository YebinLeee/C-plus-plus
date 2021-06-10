#include <iostream>
#include <string>
using namespace std;

class Book{
	string name;
	int price;
	int page;
public:
	Book(string n, int pr, int pg){
		name=n;
		price=pr;
		page=pg;
	}
	void show(){cout<<name<<" "<<price<<"�� "<<page<<" ������"<<endl;}
	friend void operator += (Book &op1, int op2);
	friend void operator -= (Book &op1, int op2);
};

void operator += (Book &op1, int op2){
	op1.price+=op2;
}
void operator -= (Book &op1, int op2){
	op1.price-=op2;
}
	
int main(){
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a+=500;
	b-=500;
	a.show();
	b.show(); 
}
