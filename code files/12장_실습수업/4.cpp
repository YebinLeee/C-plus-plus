#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("c:\\Temp\\system.ini"); // 읽기 위한 파일 객체 생성하여 open 
	if(!fin){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	ofstream fout("c:\\Temp\\system.txt"); // 쓰기 위한 파일 객체 생성하여 open 
	if(!fout){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	int ch;
	while((ch=fin.get())!=EOF){		// 한 글자씩 읽어서 
		fout.put(toupper(ch));		// // fout<<(char)toupper(ch); 대문자로 변환하여 파일에 출력 
	}
	
	fin.close();
	fout.close(); 
}
