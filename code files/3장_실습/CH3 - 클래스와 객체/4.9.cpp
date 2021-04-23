#include <iostream>
#include <string>
using namespace std;

// Ŭ���� �����
class Oval {
	int width, height;
public:
	Oval();
	Oval(int w, int h);
	void set(int w, int h);
	void show();
	int getWidth();
	int getHeight();
	~Oval();
};

// Ŭ���� ������
Oval::Oval() { this->width = 1;this->height = 1; }
Oval::Oval(int w, int h) { this->width = w;this->height = h; }
Oval::~Oval() { cout << "Oval �Ҹ� : width = " << getWidth() << ", height = " << getHeight() << endl; }
void Oval::set(int w, int h) { this->width = w;this->height = h; }
void Oval::show() { cout << "width = "<<getWidth() << ", height = " << getHeight() << endl; }
int Oval::getWidth() { return this->width; }
int Oval::getHeight() { return this->height; }

int main(void) {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
	return 0;
}