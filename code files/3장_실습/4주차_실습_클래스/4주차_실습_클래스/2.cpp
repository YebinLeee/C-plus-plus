#include <iostream>
#include <string>
using namespace std;

class Airplane {
	string name;
	int capacity;
	int speed;
public:
	Airplane() : name("������� 350"), capacity(400), speed(1000) {}
	Airplane(string n, int c, int s) {
		this->name = n;
		this->capacity = c;
		this->speed = s;
	}
	void print() {
		cout << "������� �̸�: " << this->name << endl;
		cout << "������� �뷮: " << this->capacity << endl;
		cout << "������� �ӵ�: " << this->speed << endl<<endl;
	}
};

int main() {
	Airplane plane("���� 785", 300, 900);
	cout << "����� #1" << endl;
	plane.print();

	cout << "����� #2" << endl;
	Airplane plane2;
	plane2.print();


}