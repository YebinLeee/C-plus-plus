#include <iostream>
using namespace std;

int main(){
	char ch;
	int cnt=0;
	
	while(true){
		cin.get(ch);
		// ������ �߻��� ��쿡 ���� cin.eof() 
		if(cin.eof() || ch=='\n') break;
		if(ch==' ') cnt++;
	}
	cout<<"���� ������ "<<cnt<<"�� �Դϴ�."<<endl;
}
