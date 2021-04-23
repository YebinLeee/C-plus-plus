#include <iostream>
#include <string>
using namespace std;

class Airplane {
	string name;
	int capacity;
	int speed;
public:
	Airplane() : name("에어버스 350"), capacity(400), speed(1000) {}
	Airplane(string n, int c, int s) {
		this->name = n;
		this->capacity = c;
		this->speed = s;
	}
	void print() {
		cout << "비행기의 이름: " << this->name << endl;
		cout << "비행기의 용량: " << this->capacity << endl;
		cout << "비행기의 속도: " << this->speed << endl<<endl;
	}
};

int main() {
	Airplane plane("보잉 785", 300, 900);
	cout << "비행기 #1" << endl;
	plane.print();

	cout << "비행기 #2" << endl;
	Airplane plane2;
	plane2.print();


}