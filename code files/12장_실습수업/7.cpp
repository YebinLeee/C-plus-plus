#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
	fstream fin("c:\\Temp\\system.ini", ios::in | ios::binary); // ���� ��Ʈ�� ��ü, ���̳ʸ� ���� �Է��� ���� ���� 
	if(!fin){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	
	fstream fout("c:\\Temp\\system_reverse.txt", ios::out | ios::binary); // ���� ��Ʈ�� ��ü, ���̳ʸ� ���� ����� ���� ���� 
	if(!fout){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	fin.seekg(0,ios::end); // ���������͸� �� ��(EOF) �� ����Ŵ 
	int fileSize=fin.tellg(); // ������ get pointer�� ��ġ�� ������ ��ȯ 
	
	cout<<"�Ųٷ� ���� ����..."<<endl;
	
	int c;
	for(int i=0;i<fileSize;i++){
		// fin.seekg(fileSize-1-i, ios::beg);
		// fin.seekg(-1,ios::cur); ���������� �����ϱ� ������ �Ұ��� ios::cur �� ������ ����
		fin.seekg(-i, ios::end);
		//fin.seekg(-1, ios::cur);
		c=fin.get();
		fout.put(c);
		//fin.seekg(-1, ios::cur);
	}
	
	cout<<fileSize<<"B ���� �Ϸ� "<<endl;

	fin.close();
	fout.close();
}
