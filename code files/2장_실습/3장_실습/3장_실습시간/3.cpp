/*
- 상자를 나타내는 Box 클래스를 정의한다.

- Box 클래스는 상자의  가로 폭(width), 세로 폭(length), 높이(height), 그리고 박스가 비어 있는지 아닌지의 상태를 나타내는 empty, 총 4개의 멤버변수를 갖는다.

- 생성자는 두개를 작성하되 인라인으로 작성한다. 기본 생성자는 모든 길이값을 0.0으로, empty를 true로 초기화한다. 다른 생성자는 3개의 매개변수(double)로 Box 객체의 각 길이값을 초기화하고, empty는 true로 초기화한다.

- 상자의 각 길이(width, length, height)와 empty값을 반환하는 네 개의 함수를 작성하되, 인라인 함수로 작성한다.

- 상자의 각 길이(width, length, height)와 empty값을 새로 설정하는 네 개의 함수를 작성하되, 인라인 함수로 작성한다.

- 부피를 계산해서 부피값을 반환하는 getVolumn 함수를 작성한다.
- 상자의 세 개의 길이와 부피를 출력하는 print함수를 작성한다.

*/

#include <iostream>
using namespace std;

class Box {
private: // 총 4개의 private 지정 멤버 변수 (생략 가능)
	double width, length, height; // 세개의 멤버 변수
	bool empty; // bool (true | false ) 형태의 멤버 변수

	// 함수와 생성자를 모두 인라인 함수로 작성
public:

	// 기본 생성자 (초기화용)
	Box() {
		width = 0.0, length = 0.0, height = 0.0;
		empty = true;
	}
	
	// 매개변수가 있는 생성자
	Box(double width, double length, double height){
		this->width = width;
		this->length = length;
		this->height = height;
	}

	// 값을 새로 설정할 수 있는 함수
	void setWidth(double w) { width = w; }
	void setLength(double l) { length = l; }
	void setHeight(double h) { height = h; }
	void setEmpty(bool e) { empty = e; }

	// 값을 반환할 수 있는 함수
	double getWidth() const{ return width; }
	double getLength() const{ return length; }
	double getHeight() const { return height; }
	bool getEmpty() const { return empty; }
	double getVolume() const { return width * length * height; };

	void print() {
		cout << "상자의 가로: " << getWidth() << endl;
		cout << "상자의 세로: " << getLength() << endl;
		cout << "상자의 높이: " << getHeight() << endl;
		cout << "상자의 부피: " << getVolume() << endl << endl;
		//main 함수에서 출력하니 이 코드는 생략! cout << "상자가 비어있니? " << getEmpty() << endl << endl;
	}
}; 

int main() {
	cout << "상자 #1" << endl;
	Box box1;
	box1.setWidth(10.0);
	box1.setLength(5.0);
	box1.setHeight(7.0);
	box1.setEmpty(false);
	box1.print();
	if (box1.getEmpty())
		cout << "상자가 비어있니? " << "Yes" << endl << endl;
	else
		cout << "상자가 비어있니? " << "No" << endl << endl;

	cout << "상자 #2" << endl;
	Box box2{ 2.0, 3.0, 4.0 }; // 생성자 호출 할때 (), {} 모두 가능
	box2.print();
	if (box2.getEmpty())
		cout << "상자가 비어있니? " << "Yes" << endl << endl;
	else
		cout << "상자가 비어있니? " << "No" << endl << endl;

	return 0;
}
