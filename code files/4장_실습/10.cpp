#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() {};
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; };
};
class Family {
	Person* p; // Person 배열 포인터
	int size; // 배열의 크기
	string name; // Family의 이름
public:
	Family(string, int size) {
		p = new Person[size];
		this->name=name;
		this->size = size; };
	void setName(int n, string name) { p[n].setName(name); }
	void show() {
		cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
		for (int i = 0;i < size;i++)
			cout << p[i].getName() << '\t';
		cout << endl;

	};
	~Family() { delete[]p; };
};
int main() {
	Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simson 가족 (string, int) 생성자
	simpson->setName(0, "Mr. Simpson"); // 사람의 이름 입력: (int, string) 생성자
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
};