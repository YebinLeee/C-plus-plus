#include <iostream>
using namespace std;

int main(){
	char ch;
	int cnt=0;
	
	while(true){
		cin.get(ch); // istream& get(char ch) 함수 - cin 스트림 객체 버퍼에 입력받은 문자 ch를 저장 
		if(cin.eof() || ch=='\n')break; // 오류 확인하기 위해 cin 객체에 failbit 확인 -> cin.eof() 함수 사용 
		if(ch==' ') cnt++;
	}
	cout<<"공백의 개수는 "<<cnt<<endl;
}
