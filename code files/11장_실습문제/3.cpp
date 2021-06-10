#include <iostream>
using namespace std;

int main(){
	int ch;
	
	 
	cin.ignore(100, ';');
	
	// 입력 받는 도중 개행 문자 만나면, ';'를 만날 때까지 리턴
	// 알파벳; abc '\n' 안녕;hello   
	while((ch=cin.get())!=EOF){
		cout<<(char)ch;
		if(ch=='\n')
			cin.ignore(100,';');
	}
	cout<<endl;
}
