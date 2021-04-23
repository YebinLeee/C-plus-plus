#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d) { this->year = y;this->month = m;this->day = d; }
	Date(string date) {
		
		// '/' ���ڰ� ���� ������ ������ string�� ������ ��ȯ
		
		int index;

		// ���� ����
		this->year = stoi(date);

		// �� ����
		index = date.find('/'); // ó������ '/' ���ڸ� ã�� �߰��� ��ġ�� �ε��� ��ȣ ����
		this->month = stoi(date.substr(index+1)); // (index+1) �������� ��� ���ڿ��� ������ ��ȯ(������ ��������) 

		// �� ����
		index = date.find('/', index+1); // ������ ã�� index���� ���� ���ں��� �ٽ� '/'�� ã�� �߰��� ��ġ�� �ε��� �ٽ� ����
		this->day = stoi(date.substr(index + 1));;
	}
	int getYear() { return this->year; }
	int getMonth() { return this->month; }
	int getDay() { return this->day; }
	void show() { cout << getYear() << "��" << getMonth() << "��" << getDay() << "��" << endl; }
};

int main() {

	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}