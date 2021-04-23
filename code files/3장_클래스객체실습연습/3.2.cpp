#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d) { this->year = y;this->month = m;this->day = d; }
	Date(string date) {
		
		// '/' 문자가 나올 때마다 이전의 string을 정수로 변환
		
		int index;

		// 연도 저장
		this->year = stoi(date);

		// 달 저장
		index = date.find('/'); // 처음부터 '/' 문자를 찾아 발견한 위치의 인덱스 번호 저장
		this->month = stoi(date.substr(index+1)); // (index+1) 번부터의 모든 문자열을 정수로 변환(마지막 정수까지) 

		// 일 저장
		index = date.find('/', index+1); // 이전에 찾은 index값의 다음 문자부터 다시 '/'를 찾아 발견한 위치의 인덱스 다시 저장
		this->day = stoi(date.substr(index + 1));;
	}
	int getYear() { return this->year; }
	int getMonth() { return this->month; }
	int getDay() { return this->day; }
	void show() { cout << getYear() << "년" << getMonth() << "월" << getDay() << "일" << endl; }
};

int main() {

	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}