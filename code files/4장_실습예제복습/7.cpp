#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int r) { radius = r; }
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;
	Circle* circle = new Circle[n];

	int temp;
	int cnt = 0;

	for (int i = 0;i < n;i++) {
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> temp;
		circle[i].setRadius(temp);
		if (circle[i].getArea() > 100)cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�."<<endl;
}