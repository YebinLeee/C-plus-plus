#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date(string date) {
		year=stoi(date);
		int n = date.find('/');

		this->month = stoi(date.substr(n + 1));
		n = date.find('/', n + 1);

		this->day = stoi(date.substr(n + 1));
	}
	Date(int y, int m, int d) { year = y;month = m;day = d; }
	void show() { cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl; }
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}