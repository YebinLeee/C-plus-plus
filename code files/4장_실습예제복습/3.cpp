#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	char c;
	int index = 0;

	cout << "문자열 입력 >> ";
	getline(cin, s);

	cout << "검색할 문자 >> ";
	cin >> c;

	index = s.find('a'); // 문자열의 시작부터 a 찾아 index 
	while (index>0) {
		cout << index << "번째에서 a 발견" << endl;
		index = s.find('a', index+1);
	}
}