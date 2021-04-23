#include <iostream>
using namespace std;

// ������ ���� �ٽ� �����ϱ� :: �������� �˷��ֽ� '����'��� �ϱ�!

class Airplane {
private:
	string name;
	int capacity, speed;
public:
	Airplane() :Airplane("������� 350", 400, 1000) {} // ���� �ڵ� ( ���ӹ��� : )

	// �� ��� ������ �Ű����� ������ �ʱ�ȭ�� ������
	Airplane(string n, int cap, int sp) {
		name = n;
		capacity = cap, speed = sp;
	}
	
	// ������ ���� �����ϴ� ��� �Լ�
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; }
	string getName() { return name; }

	// ���� ���� �Լ��� ��ȯ���� �̿��ϱ�
	void print() {
		cout << "������� �̸�: " << getName << endl;
		cout << "������� �뷮: " << getCapacity << endl;
		cout << "������� �ӵ�: " << getSpeed <<" Km/h"<<endl << endl;
	}
};
int main() {
	
	Airplane plane("���� 787", 300, 900);
	cout << "����� #1" << endl;
	plane.print();

	cout << "����� #2" << endl;
	Airplane plane2;
	plane2.print();
	return 0;
}