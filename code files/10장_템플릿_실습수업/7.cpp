#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if(a > b) return a; 
	else return b;
}

// circle 객체 비교하는, 객체를 다루는 bigger 함수 (중복함수가 우선시됨) 
Circle bigger(Circle a, Circle b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if(a.getRadius() > b.getRadius()) return a; 
	else return b;
}

int main() {
	int a=20, b=50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}

