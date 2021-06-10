#include <iostream>
using namespace std;

class Box {
	double length;
	double width;
	double height;
public:
	Box(double l = 1, double w = 1, double h = 1) {
		objectCount++;
		this->length = l;
		this->width = w;
		this->height = h;
	}
	static int objectCount;
	void show() {
		cout << "(길이, 너비, 높이)가 (" << length << ", " << width << ", " << height << ")이고 부피가 " << getVolume() << "인 Box" << endl;
	}
	int getVolume() { return width * height * length; }
};

int Box::objectCount = 0;

Box getLargerBox(Box b1, Box b2) {
	if (b1.getVolume() > b2.getVolume())return b1;
	else return b2;
}

int main(void) {

	// main()함수는 절대로 수정하지 말것, 이상태로 채점할 것임  

	Box box0;
	Box box1(4.0, 6.0, 3.0);
	Box box2(3.0, 5.0, 5.0);

	cout << "박스는 총 " << Box::objectCount << "개가 생성되었습니다." << endl;
	box0.show();
	box1.show();
	box2.show();
	cout << endl;

	cout << "두 개 중 부피가 더 큰 상자는 " << endl;
	Box box3 = getLargerBox(box1, box2);
	box3.show();

}


/*

class Box {

	// ***** Box 클래스 멤버 정의 조건을 반드시 만족하도록 작성해야 함
	
Box getLargerBox(Box b1, Box b2) {
	//7. b1과 b2중 더 큰 부피의 상자를 반환하는 전역함수 코드 작성
}

int main(void) {

	// main()함수는 절대로 수정하지 말것, 이상태로 채점할 것임

	Box box0;
	Box box1(4.0, 6.0, 3.0);
	Box box2(3.0, 5.0, 5.0);

	cout << "박스는 총 " << Box::objectCount << "개가 생성되었습니다." << endl;
	box0.show();
	box1.show();
	box2.show();
	cout << endl;

	cout << "두 개 중 부피가 더 큰 상자는 " << endl;
	Box box3 = getLargerBox(box1, box2);
	box3.show();
	return 0;
}


*/