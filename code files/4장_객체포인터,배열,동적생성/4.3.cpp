#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int cnt = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, s);
	
	// string Ŭ������ ��� ������ (), [] ���
	/*
	
	for (int i = 0;i < s.length();i++) {
		if (s[i] == 'a') cnt++;
		// if (s.at(i) == 'a') cnt++;
	}
	*/

	// string Ŭ������ ��� �Լ� find() ���

	int index = s.find('a');
	while (index > 0) {
		cout << "index = " << index << endl;
		index = s.find('a', index+1);
		cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}