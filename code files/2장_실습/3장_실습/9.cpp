#include <iostream>

using namespace std;

class Oval {
	int width, height; // 접근 지정자를 사용하지 않았기 때문에 private 변수
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	int a, b;
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

Oval::Oval() {
	width = 1, height = 1;
}

Oval::Oval(int w, int h) {
	width = w, height = h;
}

Oval::~Oval() // 소멸자
{
	cout << "Oval 소멸 : ";
	show();
}
int Oval::getWidth() { return width; }
int Oval::getHeight() { return height; }
void Oval::set(int w, int h) {
	width = w, height = h;
}
void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}
int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}