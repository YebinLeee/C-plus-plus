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
	bool operator ! (){
		if(price==0) return true;
		else return false;
	}
};

int main(){
	Book book("벼룩시장", 0, 50); // 가격은 0
	if(!book) cout << "공짜다" << endl;
}
