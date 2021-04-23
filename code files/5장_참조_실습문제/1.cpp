// 두 개의 Circle 객체를 교환하는 swap() 함수 - 참조에 의한 호출

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

// a와 b 객체를 교환 (참조에 의한 호출)
void swap(Circle &a, Circle& b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	Circle a(1), b(2);
	cout << "a의 면적 = " << a.getArea() << ", b의 면적 = " << b.getArea() << endl;
	swap(a, b); // 참조에 의한 호출이 일어나 값이 변경된다.
	cout << "a의 면적 = " << a.getArea() << ", b의 면적 = " << b.getArea() << endl;
}