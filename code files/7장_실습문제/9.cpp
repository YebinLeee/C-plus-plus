#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius=0){this->radius=radius;}
	void show(){cout<<"radius = "<<radius<<" �� ��"<<endl;}
	
	friend Circle operator +(int op, Circle c);
};

Circle operator +(int op, Circle c){
	Circle tmp;
	tmp.radius=op+c.radius;
	return tmp;
}
int main(){
	Circle a(5), b(4);
	b=1+a;
	
	a.show(); // a�� ������ 1 ���� 
	b.show();  // 1������ a	
}
