#include <iostream>
#include <string>
using namespace std;

class Box {
	double width, length, height;
	bool empty;
public:
	Box() : width(0.0), length(0.0), height(0.0), empty(true) {};
	Box(double w, double l, double h, bool e){
		this->width = w;this->length = l;this->height = h;this->empty = true;
	}
	double getWidth() { return this->width; }
	double getLength() { return this->length; }
	double getHeight() { return this->height; }
	bool getEmpty() { return this->empty; }
	void setWidth(int w) { this->width = w; }
	void setLength(int l) { this->length = l; }
	void setHeight(int h) { this->height = h; }
	void setEmpty(bool b) { this->empty = b; }
	double getVolumn() { return height * length * width; }
	void print() {
		cout << "width = " << width << endl;
		cout << "length = " << length << endl;
		cout<<"height = " << height << endl;
	}
};

int main() {
	cout << "상 자 #1" << endl;
	Box box1;
	box1.setWidth(10.0);
	box1.setLength(5.0);
	box1.setHeight(7.0);
	box1.setEmpty(false);
	box1.print();
	if (box1.getEmpty()) cout << "상자가 비어있니? " << "Yes" << endl<<endl;
	else cout << "상자가 비어있니? " << "No" << endl;

	cout << "상자 #2" << endl;
	Box box2{ 2.0, 3.0, 4.0, 1};
	box2.print();
	if (box1.getEmpty()) cout << "상자가 비어있니? " << "Yes" << endl<<endl;
	else cout << "상자가 비어있니? " << "No" << endl;

}