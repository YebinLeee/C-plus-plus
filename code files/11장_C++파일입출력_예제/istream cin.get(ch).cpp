#include <iostream> 
using namespace std;

int main(){
	char ch;
	while(true){ // Ű���忡�� ���� �о� ch�� ���� 
		cin.get(ch); // Ű�� ch�� ���� 
		if(cin.eof()) break; // EOF (ctrl-z) �� �ԷµǸ� ���� 
		cout.put(ch); // ���� ���ڸ� ���
		if(ch=='\n') break; // ����Ű���� �����Ƿ�, ���� ���� ������ ���������� break�� �ۼ� 
	}
}
