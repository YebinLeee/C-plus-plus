#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() {};
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; };
};
class Family {
	Person* p; // Person �迭 ������
	int size; // �迭�� ũ��
	string name; // Family�� �̸�
public:
	Family(string, int size) {
		p = new Person[size];
		this->name=name;
		this->size = size; };
	void setName(int n, string name) { p[n].setName(name); }
	void show() {
		cout << name << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
		for (int i = 0;i < size;i++)
			cout << p[i].getName() << '\t';
		cout << endl;

	};
	~Family() { delete[]p; };
};
int main() {
	Family* simpson = new Family("Simpson", 3); // 3������ ������ Simson ���� (string, int) ������
	simpson->setName(0, "Mr. Simpson"); // ����� �̸� �Է�: (int, string) ������
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
};