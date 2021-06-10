#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius=1, string name="") { 
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14*radius*radius; }
	string getName() { return name; } 
	friend ostream& operator << (ostream& outs, Circle c); // << 연산자를 프렌드로 선언
	friend istream& operator >> (istream& ins, Circle& c); // >> 연산자를 프렌드로 선언
};

ostream& operator << (ostream& outs, Circle c){
	outs<<"(반지름 "<<c.radius<<"인 "<<c.name<<")"<<endl;
	return outs;
}

istream& operator >> (istream& ins, Circle& c){
	cout<<"반지름 >> ";
	ins>>c.radius;
	cout<<"이름 >> ";
	ins>>c.name;
	return ins;
}

int main() {
	Circle d, w;
	cin >> d >> w; // 키보드 입력을 받아 객체 d와 w를 완성
	cout << d << w << endl; // 객체 d, w 출력
}


