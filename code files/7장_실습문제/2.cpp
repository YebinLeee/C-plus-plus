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
	void show(){cout<<name<<" "<<price<<"원 "<<page<<" 페이지"<<endl;}
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
		
	// == 연산자에 대한 3 종류의 함수 - price, title, 객체와 객체의 비교 
	
	if(a == 30000) cout << "정가 30000원" << endl; // price 비교
	if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if(a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 
}
