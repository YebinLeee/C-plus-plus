#include <iostream>
#include <string>
using namespace std;


class Circle {
	int radius;
public:
	Circle(int r) { this->radius = r; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { this->radius = r; }
	int getRadius() { return this->radius; }
	void show() { cout << "�������� " << radius << "�� ��" << endl; }
};

void increaseBy(Circle &a, Circle b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}