#include <iostream>
#include <string>
using namespace std;

/*
char�� �ٷ��
 
int main() {
	char cmd[80];
	cout << "cin.get(char*, int)�� ���ڿ��� �н��ϴ�." << endl;
	while(true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		cin.get(cmd, 80); // 79�������� ���� ����
		if(strcmp(cmd, "exit") == 0) {
			cout << "���α׷��� �����մϴ�...."; 
			return 0;
		}
		else // else ����� �����ϸ� ���ѷ����� ����
			cin.ignore(1); // ���ۿ� ���� �ִ� <Enter> Ű ('\n') ����
	}
}

*/

// string ��ü�� �ٷ�� 

int main(){
	string cmd;
	cout<<"string ���� ���ڿ��� �н��ϴ�."<<endl;
	
	while(true){
		cout<<"�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, cmd);
		
		if(cmd=="exit"){
			cout<<"���α׷��� �����մϴ�....";
			break;
		}
	}
}
