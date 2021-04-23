#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	int n;
	cout << "몇 명의 번호를 저장하시겠습니까 ? >> ";
	cin >> n;

	Person* person = new Person[n];
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	
	string name, tel;
	for (int i = 0;i < n;i++) {
		cout << "사람 " << i + 1 << " >> ";
		cin >> name >> tel;
		person[i].set(name, tel);
	}

	cout << endl << "---------정보 출력---------" << endl;
	for (int i = 0;i < n;i++) {
		cout << "사람 " << i + 1 << " >> " <<person[i].getName() << " " << endl;
	}

	cout << endl << "검색할 사람의 이름 >> ";
	cin >> name;

	for (int i = 0;i < n;i++)
		if (person[i].getName() == name)
			cout << "전화 번호는 " << person[i].getTel() << endl;	
}