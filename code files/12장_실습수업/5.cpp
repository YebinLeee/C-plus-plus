#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("4.cpp"); // �б� ���� ���� ��ü �����Ͽ� open 
	if(!fin){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	int ch;
	while((ch=fin.get())!=EOF){		// �� ���ھ� �о 
		if(ch=='/'){
			ch=fin.get();
			if(ch=='/'){	
				fin.ignore(100, '\n');
				cout<<endl;
			}
			else cout<<'/';
		}
		else					// else�� �� �ٿ��� ��!!! �ƴϸ� '/'�� ����ع��� 
			cout.put(ch); 
	}
	
	fin.close(); 
	 
}
