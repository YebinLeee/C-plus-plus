#include <iostream>
using namespace std;

int main(){
	char ch;
	int cnt=0;
	
	while(true){
		cin.get(ch);
		// 오류가 발생한 경우에 대해 cin.eof() 
		if(cin.eof() || ch=='\n') break;
		if(ch==' ') cnt++;
	}
	cout<<"공백 개수는 "<<cnt<<"개 입니다."<<endl;
}
