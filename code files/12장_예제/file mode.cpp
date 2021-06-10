#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream fout("mydata.txt", ios::out | ios::app); // ������ ���� �߰� ���
	fstream fin("hello.txt", ios::in); // ���� ����
	
	if(!fin){
		cout << "���� ���� ���� ����"<<endl;
		return 0;
	}
	if(!fout){
		cout << "����� ���� ���� ����"<<endl;
		return 0;
	}
	
	int c;
	while((c=fin.get())!=EOF) fout.put(c);
	
	fout.close();
	fin.close();	 
}
