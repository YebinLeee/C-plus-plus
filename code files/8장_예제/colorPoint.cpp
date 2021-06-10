#include <iostream>
using namespace std;

class Point{
	int x,y;
public:
	void set(int x, int y){this->x=x;this->y=y;}
	void showPoint(){cout<<"("<<x<<","<<y<<")"<<endl;}
};

// ColorPoint: 파생클래스(derived class) / Point: 기본클래스(base class) 
class ColorPoint : public Point{
	string color;
public:
	void setColor(string color){this->color=color;}
	void showColorPoint(){
		cout << this->color << ':';
		showPoint(); // 기본 클래스 Point의 showPoint() 멤버 함수 호출 
	}
};

int main(){
	Point p; // 기본클래스 Point의 객체 p 생성
	ColorPoint cp; // 파생클래스 ColorPoint의 객체 cp 생성
	cp.set(3,4); // 기본 클래스의 set() 멤버 함수 호출 
	cp.setColor("Red"); // 파생 클래스의 setColor() 함수 호출 
	cp.showColorPoint(); // 파생클래스의 showColorPoint() 함수 호출 
}
