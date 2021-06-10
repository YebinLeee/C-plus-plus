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
	friend bool operator == (Book op1, int price);
	friend bool operator == (Book op1, string book);
	friend bool operator == (Book op1, Book op2);
};

bool operator == (Book op1, int price){ return (op1.price==price);}
bool operator == (Book op1, string book){ return (op1.name==book);};
bool operator == (Book op1, Book op2){
	return (op1.name==op2.name && op1.price==op2.price && op1.page==op2.page);
}

int main(){
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
		
	// == �����ڿ� ���� 3 ������ �Լ� - price, title, ��ü�� ��ü�� �� 
	
	if(a == 30000) cout << "���� 30000��" << endl; // price ��
	if(a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if(a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� �� 
}
