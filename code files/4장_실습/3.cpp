#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;

	cout << "���ڿ� �Է�>> ";
	getline(cin, text, '\n');
	
	// at()�� [] �̿�
	for (int i = 0;i < text.length();i++) {
		if (text[i] == 'a') cout << text[i]<<text.at(i)<<endl;
	}

	// find ��� �Լ� �̿�
	/*
	int index = text.find('a');
	while (index>=0) {
		cout << index << endl;
		index = text.find('a', index + 1);
	}
	*/
}