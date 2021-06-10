#include <iostream>
using namespace std;

int main(){
	char line[90];
	cin.getline(line, 80);
	cout<<cin.gcount(); // 개행 문자를 포함하여 읽음 
}
