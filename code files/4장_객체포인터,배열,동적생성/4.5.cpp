#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while(true)	{
		cout << endl << ">>";
		getline(cin, s);
		if (s == "exit")break;

		// s.length() ������ ������ ���� �ϳ� ����
		srand((unsigned)time(NULL));
		int n = rand() % s.length();
	
		// a~z ���� �ϳ��� ����
		char alphaN = rand() % 26 + 97;

		// ���� ������ ������ ���ڸ� +1
		if (s[n] == alphaN) alphaN++;
		
		// ���� ����
		s[n] = alphaN;

		// ����� ���ڿ� ���
		cout << s;
	}
}