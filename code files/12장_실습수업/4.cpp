#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("c:\\Temp\\system.ini"); // �б� ���� ���� ��ü �����Ͽ� open 
	if(!fin){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	ofstream fout("c:\\Temp\\system.txt"); // ���� ���� ���� ��ü �����Ͽ� open 
	if(!fout){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	int ch;
	while((ch=fin.get())!=EOF){		// �� ���ھ� �о 
		fout.put(toupper(ch));		// // fout<<(char)toupper(ch); �빮�ڷ� ��ȯ�Ͽ� ���Ͽ� ��� 
	}
	
	fin.close();
	fout.close(); 
}
