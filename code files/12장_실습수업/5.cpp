#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("4.cpp"); // 읽기 위한 파일 객체 생성하여 open 
	if(!fin){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	int ch;
	while((ch=fin.get())!=EOF){		// 한 글자씩 읽어서 
		if(ch=='/'){
			ch=fin.get();
			if(ch=='/'){	
				fin.ignore(100, '\n');
				cout<<endl;
			}
			else cout<<'/';
		}
		else					// else를 꼭 붙여야 함!!! 아니면 '/'를 출력해버림 
			cout.put(ch); 
	}
	
	fin.close(); 
	 
}
