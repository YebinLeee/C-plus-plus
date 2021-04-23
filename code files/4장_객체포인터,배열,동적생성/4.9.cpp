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
	cout << "��� �� >> ";
	cin >> n;
	cin.ignore();

	Person* p = new Person[n];

	cout << "�̸��� ��ȭ ��ȣ �Է�" << endl;
	for (int i = 0;i < n;i++) {
		cout << "��� " << i + 1<<">> ";
		string s;
		getline(cin, s);
		int index = s.find(' ');
		string name = s.substr(0, index);
		string tel = s.substr(index + 1);
		p[i].set(name, tel);
	}
	
	cout << endl << "��� ����� �̸���" << endl;
	for (int i = 0;i < n;i++)
		cout << p[i].getName()<<' ';
	
	string nameGet;
	cout << endl << "��ȭ ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
	cin >> nameGet;

	for (int i = 0;i < n;i++) {
		if (nameGet == p[i].getName()) {
			cout << "��ȭ ��ȣ�� " << p[i].getTel() << endl;
			return 0;
		}
	}
	cout << "�̸��� �˻����� ���Ͽ���" << endl;

}