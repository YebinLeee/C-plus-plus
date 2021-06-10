#include <iostream> 
using namespace std;

int main(){
	char ch;
	while(true){ // 키보드에서 문자 읽어 ch에 저장 
		cin.get(ch); // 키를 ch로 읽음 
		if(cin.eof()) break; // EOF (ctrl-z) 가 입력되면 종료 
		cout.put(ch); // 읽은 문자를 출력
		if(ch=='\n') break; // 공백키까지 읽으므로, 개행 문자 나오면 빠져나가는 break문 작성 
	}
}
