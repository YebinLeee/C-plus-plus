#include <iostream>
using namespace std;

int main(){
	string cmd;
	while(true){
		cout<<"�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, cmd);
		if(cmd=="exit") break;
	}
	cout<<"���α׷��� �����մϴ�...."<<endl;
}
