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
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if(b < a) // < (b,a) 
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}
