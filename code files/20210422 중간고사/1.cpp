#include<iostream>
#include <locale>
#include<string>
using namespace std;

int main(void)
{

	string s;

	while (1) {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		getline(cin, s);
		if (s == "exit")break;

		if (islower(s[0]))
			s[0]=toupper(s[0]);
		
		if (s[s.size()] != '.') {
			s.append(".");
		}
		cout << "��� ���ڿ�: " << s << endl;
	}
}

