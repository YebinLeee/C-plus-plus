#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;

int main(){
	// �� ���ξ� �о� ���ι�ȣ �ٿ� ���
	ifstream fin("c:\\Temp\\system.ini");
	if(!fin){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	/*
	string line;
	int i=0;
	while(getline(fin, line)){
		for(int i=0;i<line.size();i++){
			if(islower(line[i])) line[i]=toupper(line[i]); // �ҹ��� �� ���ص� ��. �������� �״�� ��� 
		}
		cout<<++i<<" : "<<line<<endl;
	}*/
	int ch;
	while((ch=fin.get())!=EOF){
		cout << (char)toupper(ch); // cout.put(toupper(ch)); put�Լ��� char�� �ڵ� ��ȯ�Ͽ� ��� 
	}
	fin.close();
	 
}
