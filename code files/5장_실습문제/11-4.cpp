// 11���� 4��- string ���ڿ� ��ü ����ϱ�

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
	// ���� ������ �ڵ� ����
	void set(string title, int price) {
		//cout << "set �Լ� ����" << endl;
		this->title = title;
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