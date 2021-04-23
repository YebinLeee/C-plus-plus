#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while(true)	{
		cout << endl << ">>";
		getline(cin, s);
		if (s == "exit")break;

		// s.length() 내에서 변경할 문자 하나 선택
		srand((unsigned)time(NULL));
		int n = rand() % s.length();
	
		// a~z 까지 하나로 선택
		char alphaN = rand() % 26 + 97;

		// 만약 이전과 동일한 문자면 +1
		if (s[n] == alphaN) alphaN++;
		
		// 문자 변경
		s[n] = alphaN;

		// 변경된 문자열 출력
		cout << s;
	}
}