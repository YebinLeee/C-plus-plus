#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// �� ���ξ� �о� ���ι�ȣ �ٿ� ���
	ifstream fin("c:\\Temp\\system.ini");
	if(!fin){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	string line;
	int i=0;
	while(getline(fin, line)){
		cout<<++i<<" : "<<line<<endl;
	}
	fin.close();
	 
}
