#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		//cout << "생성자 실행" << endl;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	Book(const Book& b) {
		//cout << "복사 생성자 실행" << endl;
		int len = strlen(b.title);
		this->title = new char[len+1];
		strcpy(this->title, b.title);
		this->price = b.price;
	}
	~Book() {
		if (this->title) {
			//cout << "동적 메모리 반환" << endl;
			delete[]title;
		}
	}
	void set(const char* title, int price) {
		//cout << "set 함수 실행" << endl;
		if (this->title) delete[] this->title; // 할당된 메모리가 있다면 반환한후
		int len = strlen(title); 
		this->title = new char[len + 1]; // 새로운 메모리 다시 할당
		strcpy(this->title, title);
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