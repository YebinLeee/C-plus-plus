#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	// 생성자 선언 x . main 함수에서 기본 생성자 호출하도록
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * this->radius * this->radius; }
};
int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;

	Circle* p = new Circle[n];
	int radius;
	int cnt = 0;

	for (int i = 0;i < n;i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;
		p[i].setRadius(radius);
		if (p[i].getArea() > 100) cnt++;
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다" << endl;
}