#include <iostream>
using namespace std;

class Point{
	int x,y;
public:
	void set(int x, int y){this->x=x;this->y=y;}
	void showPoint(){cout<<"("<<x<<","<<y<<")"<<endl;}
};

// ColorPoint: �Ļ�Ŭ����(derived class) / Point: �⺻Ŭ����(base class) 
class ColorPoint : public Point{
	string color;
public:
	void setColor(string color){this->color=color;}
	void showColorPoint(){
		cout << this->color << ':';
		showPoint(); // �⺻ Ŭ���� Point�� showPoint() ��� �Լ� ȣ�� 
	}
};

int main(){
	Point p; // �⺻Ŭ���� Point�� ��ü p ����
	ColorPoint cp; // �Ļ�Ŭ���� ColorPoint�� ��ü cp ����
	cp.set(3,4); // �⺻ Ŭ������ set() ��� �Լ� ȣ�� 
	cp.setColor("Red"); // �Ļ� Ŭ������ setColor() �Լ� ȣ�� 
	cp.showColorPoint(); // �Ļ�Ŭ������ showColorPoint() �Լ� ȣ�� 
}
