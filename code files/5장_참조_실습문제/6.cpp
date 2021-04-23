#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0;a[i] != NULL;i++) // sieof(a)
	{
		if (a[i] == c) {
			success =true; // if(success= a[i]==c) return a[i];
			return a[i];
		}
	}
	// success = false; 생략 가능


	/*
	while(a[i]) // NULL값이 아닐 때 까지
	{
		if(a[i]==c){
			success=true;
			return a[i];
		}
	i++;
	}
	*/
}
int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b); // s[0]의 값을 loc과 함께 사용하고 있다.
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm'; // 'M' 위치에 'm' (a[i]) 기록
	cout << s << endl; // "mike"가 출력됨
}
