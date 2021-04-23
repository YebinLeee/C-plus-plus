#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() :Circle(1) {}
	Circle(int r) { this->radius = r; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { this->radius = r; }
	int getRadius() { return this->radius; }
};

void swap(Circle &c1, Circle &c2) {
	Circle tmp;

	tmp = c1;
	c1 = c2;
	c2 = tmp;
}
int main() {
	Circle c1(5);
	Circle c2(10);
	cout << "c1�� ������ = " << c1.getRadius() << " ���� = " << c1.getArea() << endl;
	cout << "c2�� ������ = " << c2.getRadius() << " ���� = " << c2.getArea() << endl;
	
	swap(c1, c2);
	cout << endl << "<swap �Լ� ȣ�� ��>" << endl;

	cout << "c1�� ������ = " << c1.getRadius() << " ���� = " << c1.getArea() << endl;
	cout << "c2�� ������ = " << c2.getRadius() << " ���� = " << c2.getArea() << endl;
}