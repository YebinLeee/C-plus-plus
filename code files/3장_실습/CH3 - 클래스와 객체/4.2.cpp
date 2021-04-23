#include <iostream>
#include <string>
using namespace std;

class Tower {
private:
	int meter;
public:
	Tower() :Tower(1) {}; // �⺻ ������
	Tower(int m) { meter = m; }
	int getHeight() { return meter; }
};

void p1() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) { this->year = y;this->month = m;this->day = d; }
	Date(string date) {
		int n = date.find("/");
		this->year = stoi(date.substr(n));

		n = date.find("/", n + 1);
		this->month = stoi(date.substr(n));

		n = date.find("/", n + 1);
		this->day = stoi(date.substr(n));
	}
	void show(){cout << this->year << "��" << this->month << "��" << this->day <<"��"<< endl;}
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};
void p2() {
	Date birth(2014, 3, 20); // ������ 3��
	Date independenceDay("1945/8/15"); // ���ڿ� 1��
	independenceDay.show(); // show() ��� �Լ�
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	
	// ��� �Լ� - getYear(), getMonth(), getDay() 
}
int main() {
	// CH3 �ǽ� ���� #1-12

	//p1();
	p2();
	
	return 0;
}