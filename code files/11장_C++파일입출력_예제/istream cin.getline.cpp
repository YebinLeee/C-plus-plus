#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	char s[80];
	
	while(true){ 
		cout<<"�����Ϸ��� exit �Է� >> ";
		cin.get(s, 80); // ���� ���� ���� ������ �� ���� ���ڿ� �Է� ����
		cout<<"���� ���� ���� : "<<cin.gcount()<<endl;
		if (strcmp(s,"exit")==0){
			cout<<"exit �� ���� ����"<<endl;
			return 0;
		}
		else cin.ignore(1);
		cout<<s<<endl<<endl;
	}
}
