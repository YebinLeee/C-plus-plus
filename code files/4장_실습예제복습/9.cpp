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
	cout << "�� ���� ��ȣ�� �����Ͻðڽ��ϱ� ? >> ";
	cin >> n;

	Person* person = new Person[n];
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	
	string name, tel;
	for (int i = 0;i < n;i++) {
		cout << "��� " << i + 1 << " >> ";
		cin >> name >> tel;
		person[i].set(name, tel);
	}

	cout << endl << "---------���� ���---------" << endl;
	for (int i = 0;i < n;i++) {
		cout << "��� " << i + 1 << " >> " <<person[i].getName() << " " << endl;
	}

	cout << endl << "�˻��� ����� �̸� >> ";
	cin >> name;

	for (int i = 0;i < n;i++)
		if (person[i].getName() == name)
			cout << "��ȭ ��ȣ�� " << person[i].getTel() << endl;	
}