#include <iostream>
using namespace std;

int main(){
	int cnt=0, ch;
	
	// �Էµ� ĳ���͸� ch�� ����ְ�, EOF�� �ƴ� ���� ���� 
	while((ch=cin.get())!=EOF){ // ������ �߻��� ���(EOF�� ���) 
		if(ch=='a') cnt++;
		else if (ch=='\n') break;
	}
	cout<<"a�� ������ "<<cnt<<"�� �Դϴ�."<<endl;
}
