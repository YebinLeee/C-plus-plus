#include <iostream>
using namespace std;

int main(){
	int ch, cnt=0;
	
	while((ch=cin.get())!=EOF){ // 오류 만나면 -1 리턴 
		if(ch=='\n') break;
		if(ch=='a') cnt++;		
	}
	cout<<"a의 개수는 "<<cnt<<endl;
}
