#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	char s[80];
	
	while(true){ 
		cout<<"종료하려면 exit 입력 >> ";
		cin.get(s, 80); // 개행 문자 만날 때까지 한 줄의 문자열 입력 받음
		cout<<"읽은 문자 개수 : "<<cin.gcount()<<endl;
		if (strcmp(s,"exit")==0){
			cout<<"exit 을 만나 종료"<<endl;
			return 0;
		}
		else cin.ignore(1);
		cout<<s<<endl<<endl;
	}
}
