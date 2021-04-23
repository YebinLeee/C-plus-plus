#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	// ������ ���� x . main �Լ����� �⺻ ������ ȣ���ϵ���
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * this->radius * this->radius; }
};
int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;

	Circle* p = new Circle[n];
	int radius;
	int cnt = 0;

	for (int i = 0;i < n;i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		p[i].setRadius(radius);
		if (p[i].getArea() > 100) cnt++;
	}

	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�" << endl;
}