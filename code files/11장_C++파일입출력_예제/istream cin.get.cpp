#include <iostream> 
using namespace std;

int main(){
	int ch;
	while((ch=cin.get())!=EOF){ // 키보드에서 문자 읽어 ch에 저장 
		cout.put(ch); // 읽은 문자를 출력
		if(ch=='\n') break; // 공백키까지 읽으므로, 개행 문자 나오면 빠져나가는 break문 작성 
	}
}
