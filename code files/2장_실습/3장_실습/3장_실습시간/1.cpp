#include <iostream>
using namespace std;

class Book {
private:
	string title, author;
public:
	Book(string t, string a) // (string title, string author) 도 괜찮음
	{
		// 멤버 변수(앞에 this-> 붙이기)와 매개변수 값이 동일 한 경우
		title = t; // this->title = title; 
		author = a; // this->author = author;
	}
	string getTitle() { return title; }
	string getAuthor() { return author; }
	void setAuthor(string author) { this->author = author; } // 수정할 때 사용
	void setTitle(string title) { this->title = title; }
};

int main() {
	Book b("Great C++", "Bob");
	cout << "책 이름 : " << b.getTitle() << endl;
	cout << "책 저자 : " << b.getAuthor() << endl;
	return 0;
}