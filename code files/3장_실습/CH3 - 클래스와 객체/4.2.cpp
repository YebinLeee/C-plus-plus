#include <iostream>
#include <string>
using namespace std;

class Tower {
private:
	int meter;
public:
	Tower() :Tower(1) {}; // 기본 생성자
	Tower(int m) { meter = m; }
	int getHeight() { return meter; }
};

void p1() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
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
	void show(){cout << this->year << "년" << this->month << "월" << this->day <<"일"<< endl;}
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};
void p2() {
	Date birth(2014, 3, 20); // 정수형 3개
	Date independenceDay("1945/8/15"); // 문자열 1개
	independenceDay.show(); // show() 멤버 함수
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	
	// 멤버 함수 - getYear(), getMonth(), getDay() 
}
int main() {
	// CH3 실습 문제 #1-12

	//p1();
	p2();
	
	return 0;
}