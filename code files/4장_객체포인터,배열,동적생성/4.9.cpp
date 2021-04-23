#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {}
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name;this->tel = tel; }

};
int main() {
	int n;
	cout << "사람 수 >> ";
	cin >> n;
	cin.ignore();

	Person* p = new Person[n];

	cout << "이름과 전화 번호 입력" << endl;
	for (int i = 0;i < n;i++) {
		cout << "사람 " << i + 1<<">> ";
		string s;
		getline(cin, s);
		int index = s.find(' ');
		string name = s.substr(0, index);
		string tel = s.substr(index + 1);
		p[i].set(name, tel);
	}
	
	cout << endl << "모든 사람의 이름은" << endl;
	for (int i = 0;i < n;i++)
		cout << p[i].getName()<<' ';
	
	string nameGet;
	cout << endl << "전화 번호를 검색합니다. 이름을 입력하세요 >> ";
	cin >> nameGet;

	for (int i = 0;i < n;i++) {
		if (nameGet == p[i].getName()) {
			cout << "전화 번호는 " << p[i].getTel() << endl;
			return 0;
		}
	}
	cout << "이름을 검색하지 못하였음" << endl;

}