// 11번의 4번- string 문자열 객체 사용하기

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price) {
		this->title = title;
		this->price = price;
	}
	// 복사 생성자 자동 실행
	void set(string title, int price) {
		//cout << "set 함수 실행" << endl;
		this->title = title;
		this->price = price;
	}
	void show() { cout << title << ' ' << price << "원" << endl; }
};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp; // 복사 생성자 호출
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}