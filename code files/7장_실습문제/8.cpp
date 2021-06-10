#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius=0){this->radius=radius;}
	void show(){cout<<"radius = "<<radius<<" �� ��"<<endl;}
	
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
	
	++a; // ������ 1 ����
	b=a++; // ������ 1 ����
	cout<<endl<<"++a , b=a++ ���� ���� ��"<<endl;
	a.show(); // a�� ������ 1 ���� 
	b.show();  // 1������ a	
}
