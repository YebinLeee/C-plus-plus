#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;

	cout << "문자열 입력>> ";
	getline(cin, text, '\n');
	
	// at()과 [] 이용
	for (int i = 0;i < text.length();i++) {
		if (text[i] == 'a') cout << text[i]<<text.at(i)<<endl;
	}

	// find 멤버 함수 이용
	/*
	int index = text.find('a');
	while (index>=0) {
		cout << index << endl;
		index = text.find('a', index + 1);
	}
	*/
}