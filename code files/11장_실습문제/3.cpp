#include <iostream>
using namespace std;

int main(){
	int ch;
	
	 
	cin.ignore(100, ';');
	
	// �Է� �޴� ���� ���� ���� ������, ';'�� ���� ������ ����
	// ���ĺ�; abc '\n' �ȳ�;hello   
	while((ch=cin.get())!=EOF){
		cout<<(char)ch;
		if(ch=='\n')
			cin.ignore(100,';');
	}
	cout<<endl;
}
