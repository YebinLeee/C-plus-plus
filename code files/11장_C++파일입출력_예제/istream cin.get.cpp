#include <iostream> 
using namespace std;

int main(){
	int ch;
	while((ch=cin.get())!=EOF){ // Ű���忡�� ���� �о� ch�� ���� 
		cout.put(ch); // ���� ���ڸ� ���
		if(ch=='\n') break; // ����Ű���� �����Ƿ�, ���� ���� ������ ���������� break�� �ۼ� 
	}
}
