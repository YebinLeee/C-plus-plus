#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	char s[11];
	
	while(true){ 
		cout<<"�����Ϸ��� exit �Է� >> ";
		cin.get(s, 11); // <enter> Ű ���� �� ���� �ִ� 79������ ���� ���� 
		if(strcmp(s,"exit")==0){ // #inlcude <cstring>
			cout<<"exit ���� ���α׷� ����"<<endl;
			return 0;
		}
		else
			cin.get(); // �Է� ���ۿ� ���� ���� ���� �����Ͽ� �ٽ� ���� �Է� ���� 
	}
}
