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
	
	
	fstream fout("c:\\Temp\\system.txt", ios::out | ios::binary); // ���� ��Ʈ�� ��ü, ���̳ʸ� ���� ����� ���� ���� 
	if(!fout){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	fin.seekg(0,ios::end); // ���������͸� �� ������ 
	int fileSize=fin.tellg(); // ������ get pointer�� ��ġ�� ������ ��ȯ 
	int unit=fileSize/10; // 10%�� �ش��ϴ� ���� ������ ����
	
	fin.seekg(0, ios::beg); // ���������͸� �� ������
	
	cout<<"���� ����..."<<endl;
	char *buf=new char[unit];
	
	for(int i=0;i<10;i++){
		fin.read(buf, unit); // unit��ŭ �о� buf�� ����
		int realSize=fin.gcount();
		fout.write(buf, realSize);
		cout<<'.'<<realSize<<"B "<<10*(i+1)<<'%'<<endl;
	}
	
	cout<<fileSize<<"B ���� �Ϸ� "<<endl;
	
	delete[]buf;
	fin.close();
	fout.close();
}
