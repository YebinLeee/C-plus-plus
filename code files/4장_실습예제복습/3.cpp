#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	char c;
	int index = 0;

	cout << "���ڿ� �Է� >> ";
	getline(cin, s);

	cout << "�˻��� ���� >> ";
	cin >> c;

	index = s.find('a'); // ���ڿ��� ���ۺ��� a ã�� index 
	while (index>0) {
		cout << index << "��°���� a �߰�" << endl;
		index = s.find('a', index+1);
	}
}