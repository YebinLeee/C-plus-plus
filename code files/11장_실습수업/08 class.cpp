#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius=1, string name="") { 
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14*radius*radius; }
	string getName() { return name; } 
	friend ostream& operator << (ostream& outs, Circle c); // << �����ڸ� ������� ����
	friend istream& operator >> (istream& ins, Circle& c); // >> �����ڸ� ������� ����
};

ostream& operator << (ostream& outs, Circle c){
	outs<<"(������ "<<c.radius<<"�� "<<c.name<<")"<<endl;
	return outs;
}

istream& operator >> (istream& ins, Circle& c){
	cout<<"������ >> ";
	ins>>c.radius;
	cout<<"�̸� >> ";
	ins>>c.name;
	return ins;
}

int main() {
	Circle d, w;
	cin >> d >> w; // Ű���� �Է��� �޾� ��ü d�� w�� �ϼ�
	cout << d << w << endl; // ��ü d, w ���
}


