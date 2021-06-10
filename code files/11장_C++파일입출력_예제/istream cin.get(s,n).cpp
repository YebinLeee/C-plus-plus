#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	char s[11];
	
	while(true){ 
		cout<<"종료하려면 exit 입력 >> ";
		cin.get(s, 11); // <enter> 키 만날 때 까지 최대 79개까지 문자 읽음 
		if(strcmp(s,"exit")==0){ // #inlcude <cstring>
			cout<<"exit 만나 프로그램 종료"<<endl;
			return 0;
		}
		else
			cin.get(); // 입력 버퍼에 남은 개행 문자 제거하여 다시 다음 입력 받음 
	}
}
