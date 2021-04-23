#include <iostream>
using namespace std;

class Book {
private:
	string title, author;
public:
	Book(string t, string a) // (string title, string author) �� ������
	{
		// ��� ����(�տ� this-> ���̱�)�� �Ű����� ���� ���� �� ���
		title = t; // this->title = title; 
		author = a; // this->author = author;
	}
	string getTitle() { return title; }
	string getAuthor() { return author; }
	void setAuthor(string author) { this->author = author; } // ������ �� ���
	void setTitle(string title) { this->title = title; }
};

int main() {
	Book b("Great C++", "Bob");
	cout << "å �̸� : " << b.getTitle() << endl;
	cout << "å ���� : " << b.getAuthor() << endl;
	return 0;
}