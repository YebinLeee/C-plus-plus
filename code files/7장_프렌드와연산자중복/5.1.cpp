#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) {
		red = r;blue = b;green = g;
	}
	void setColor(int r, int g, int b) { red = r;green = g;blue = b; }
	void show(){ cout << red << ' ' << green << ' ' << blue << endl; }

	Color operator + (Color c) {
		Color tmp;
		tmp.red = red + c.red;
		tmp.green = green+ c.green;
		tmp.blue = blue + c.blue;
		return tmp;
	}
	bool operator == (Color c) {
		if (red == c.red && green == c.green && blue == c.blue) return true;
		else return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255); // 보라색
	if (c == fuchsia) cout << "보라색 맞음" << endl;
	else cout << "보라색 아님" << endl;
}