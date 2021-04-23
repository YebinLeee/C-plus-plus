#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	string author;
public:
	Book(string title, string author) { this->title = title;this->author = author; }
	string getTitle() { return this->title; }
	string getAuthor() { return this->author; }
};
int main() {
	Book b("Great C++", "Bob");
	cout << "책 이름 : " << b.getTitle() << endl;
	cout << "책 저자 : " << b.getAuthor() << endl;
}