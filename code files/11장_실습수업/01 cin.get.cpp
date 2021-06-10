#include <iostream>
using namespace std;

int main(){
	int cnt=0, ch;
	
	// 입력된 캐릭터를 ch에 집어넣고, EOF가 아닐 동안 진행 
	while((ch=cin.get())!=EOF){ // 오류가 발생한 경우(EOF인 경우) 
		if(ch=='a') cnt++;
		else if (ch=='\n') break;
	}
	cout<<"a의 개수는 "<<cnt<<"개 입니다."<<endl;
}
