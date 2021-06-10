#include <iostream>
using namespace std;

int main(){
	int ch;
	
	// 입력을 받는 도중, ';' 문자를 만나면 개행 문자를 만날 때까지 리턴 + endl 실행 
	while((ch=cin.get())!=EOF){
		if(ch==';'){
			cout.put('\n');
			cin.ignore(100,'\n');
		}
		else cout.put(ch);
	}
}
