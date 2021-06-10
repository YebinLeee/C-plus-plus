#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius=0){this->radius=radius;}
	void show(){cout<<"radius = "<<radius<<" 인 원"<<endl;}
	
	friend Circle& operator ++(Circle &c);
	friend Circle operator ++(Circle&c, int x);
};

Circle& operator ++(Circle &c){
	c.radius++;
	return c;
}
Circle operator ++(Circle&c, int x){
	Circle tmp=c;
	c.radius++;
	return tmp;
}
	
int main(){
	Circle a(5), b(4);
	a.show(); 
	b.show();
	
	++a; // 반지름 1 증가
	b=a++; // 반지름 1 증가
	cout<<endl<<"++a , b=a++ 연산 실행 후"<<endl;
	a.show(); // a의 반지름 1 증가 
	b.show();  // 1증가된 a	
}
