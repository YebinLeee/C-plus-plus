#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// ifstream fin("c:\\temp\\test.txt"); // �б����� ifstream ��ü fin ����
	 ifstream fin;
	 fin.open("c:\\Temp\\test.txt");
	 // ���� ���� ����(!������ �Լ�) 
	 if(!fin){
	 	cout<<"���� ���� ����"<<endl;
	 	return 0;
	 }
	 
	 // ���Ϸκ��� �о���̱�-fin.get() / (Ű����κ���-cin.get) 
	 int ch;
	 while((ch=fin.get())!=EOF){
	 	cout.put(ch);
	 }
	 
	 fin.close(); // ���� �ݱ� 
} 
