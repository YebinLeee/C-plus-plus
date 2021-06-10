#include <iostream>
using namespace std; 

class Circle{
	int radius;
public:
	Circle(int radius=0){this->radius=radius;}
	int getRadius(){return radius;}
	void setRadius(int radius){this->radius=radius;}
	double getArea(){ return 3.14*radius*radius;}
};

class NamedCircle:public Circle{
	string name;
public:
	NamedCircle(int radius=1, string name="circle"):Circle(radius){
		this->name=name;
	}
	string getName(){return name;	}
	void setName(string name){this->name=name;}
	void show(){cout<<"�������� "<<getRadius()<<"�� "<<name<<endl;}
};

int main(){
	NamedCircle waffle(3,"waffle");
	waffle.show();
	
	NamedCircle pizza[5];
	cout<<"5 ���� ���� �������� ���� �̸��� �Է��ϼ���"<<endl;
	
	int r;
	string name;
	for(int i=0;i<5;i++){
		cout<<i+1<<">> ";
		cin>>r>>name;
		pizza[i].setRadius(r);
		pizza[i].setName(name);
	}
	
	NamedCircle max_pizza=pizza[0];
	for(int i=1;i<5;i++)
		if(pizza[i].getRadius()>max_pizza.getRadius()) max_pizza=pizza[i];
	cout<<"���� ������ ū ���ڴ� "<<max_pizza.getName()<<"�Դϴ�"<<endl;
}
