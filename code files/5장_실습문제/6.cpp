#include <iostream>
#include <string>
using namespace std;

// 문자열 a에서 문자 c를 찾아 c 공간에 대한 참조를 리턴, 찾는다면 success를 true로 설정
char& find(char a[], char c, bool& success) {
	for (int i = 0;a[i] != NULL;i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
}
int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b); 
	if (b == false)
	{
		cout << "M을 발견할 수 없다 " << endl;
		return 0;
	}
	loc = 'S';
	cout << s << endl;
}