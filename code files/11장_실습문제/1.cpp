#include <iostream>
using namespace std;

int main(){
	int ch, cnt=0;
	
	while((ch=cin.get())!=EOF){ // ���� ������ -1 ���� 
		if(ch=='\n') break;
		if(ch=='a') cnt++;		
	}
	cout<<"a�� ������ "<<cnt<<endl;
}
