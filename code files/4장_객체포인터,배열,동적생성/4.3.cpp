#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int cnt = 0;

	cout << "문자열 입력>> ";
	getline(cin, s);
	
	// string 클래스의 멤버 연산자 (), [] 사용
	/*
	
	for (int i = 0;i < s.length();i++) {
		if (s[i] == 'a') cnt++;
		// if (s.at(i) == 'a') cnt++;
	}
	*/

	// string 클래스의 멤버 함수 find() 사용

	int index = s.find('a');
	while (index > 0) {
		cout << "index = " << index << endl;
		index = s.find('a', index+1);
		cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}