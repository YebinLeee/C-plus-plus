#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << endl << ">>";
		getline(cin, s);
		if (s == "exit")break;

		for (int i = s.length();i >= 0;i--)
			cout << s[i];
		cout << endl;
	}
}