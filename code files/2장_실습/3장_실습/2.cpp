#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year, month, day;
	Date(int year, int month, int day){
		this->year = year;
		this->month = month;
		this->day = day;
	}
	Date(string date) {
		int n;
		
		this->year = stoi(date);
		n = date.find('/');
		
		this->month = stoi(date.substr(n + 1));
		n = date.find('/', n + 1);

		this->day = stoi(date.substr(n + 1));
	}
	void show() {
		cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;
	}
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}