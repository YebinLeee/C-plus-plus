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
	void show(){cout<<"반지름이 "<<getRadius()<<"인 "<<name<<endl;}
};

int main(){
	NamedCircle waffle(3,"waffle");
	waffle.show();
	
	NamedCircle pizza[5];
	cout<<"5 개의 정수 반지름과 원의 이름을 입력하세요"<<endl;
	
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
	cout<<"가장 면적이 큰 피자는 "<<max_pizza.getName()<<"입니다"<<endl;
}
