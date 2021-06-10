#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream fout("mydata.txt", ios::out | ios::app); // 파일의 끝에 추가 출력
	fstream fin("hello.txt", ios::in); // 읽을 파일
	
	if(!fin){
		cout << "읽을 파일 열기 실패"<<endl;
		return 0;
	}
	if(!fout){
		cout << "출력할 파일 열기 실패"<<endl;
		return 0;
	}
	
	int c;
	while((c=fin.get())!=EOF) fout.put(c);
	
	fout.close();
	fin.close();	 
}
