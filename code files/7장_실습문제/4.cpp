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
	string getTitle(){return name;}
	friend bool operator < (string b, Book op2);
};

bool operator < (string b, Book op2){return (b<op2.name);}

int main(){
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if(b < a) // < (b,a) 
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}
