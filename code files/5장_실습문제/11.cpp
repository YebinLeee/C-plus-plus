#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		//cout << "������ ����" << endl;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	Book(const Book& b) {
		//cout << "���� ������ ����" << endl;
		int len = strlen(b.title);
		this->title = new char[len+1];
		strcpy(this->title, b.title);
		this->price = b.price;
	}
	~Book() {
		if (this->title) {
			//cout << "���� �޸� ��ȯ" << endl;
			delete[]title;
		}
	}
	void set(const char* title, int price) {
		//cout << "set �Լ� ����" << endl;
		if (this->title) delete[] this->title; // �Ҵ�� �޸𸮰� �ִٸ� ��ȯ����
		int len = strlen(title); 
		this->title = new char[len + 1]; // ���ο� �޸� �ٽ� �Ҵ�
		strcpy(this->title, title);
		this->price = price;
	}
	void show() { cout << title << ' ' << price << "��" << endl; }
};

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp; // ���� ������ ȣ��
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}