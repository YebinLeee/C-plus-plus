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
	cout << "å �̸� : " << b.getTitle() << endl;
	cout << "å ���� : " << b.getAuthor() << endl;
}