#include <iostream>
using namespace std;

int main(){
	char ch;
	int cnt=0;
	
	while(true){
		cin.get(ch); // istream& get(char ch) �Լ� - cin ��Ʈ�� ��ü ���ۿ� �Է¹��� ���� ch�� ���� 
		if(cin.eof() || ch=='\n')break; // ���� Ȯ���ϱ� ���� cin ��ü�� failbit Ȯ�� -> cin.eof() �Լ� ��� 
		if(ch==' ') cnt++;
	}
	cout<<"������ ������ "<<cnt<<endl;
}
