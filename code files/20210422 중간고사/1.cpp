#include<iostream>
#include <locale>
#include<string>
using namespace std;

int main(void)
{

	string s;

	while (1) {
		cout << "문자열을 입력하시오: ";
		getline(cin, s);
		if (s == "exit")break;

		if (islower(s[0]))
			s[0]=toupper(s[0]);
		
		if (s[s.size()] != '.') {
			s.append(".");
		}
		cout << "결과 문자열: " << s << endl;
	}
}

