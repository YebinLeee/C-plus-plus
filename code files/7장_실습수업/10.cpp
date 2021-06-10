#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius = " << radius << " �� ��" << endl;
	}
	
	Circle& operator ++(){
		radius++;
	}
	Circle operator ++(int x){
		Circle tmp;
		tmp.radius=radius++;
		return tmp;
	}
};



int main() {
	Circle a(5), b(4);
	++a; // �������� 1 ���� ��Ų��.
	b = a++; // �������� 1 ���� ��Ų��.
	a.show();
	b.show();
}

 
