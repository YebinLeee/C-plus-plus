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
	bool operator ! (){
		if(price==0) return true;
		else return false;
	}
};

int main(){
	Book book("�������", 0, 50); // ������ 0
	if(!book) cout << "��¥��" << endl;
}
