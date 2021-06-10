#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
	fstream fin("c:\\Temp\\system.ini", ios::in | ios::binary); // 파일 스트림 객체, 바이너르 모드로 입력을 위해 생성 
	if(!fin){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	
	fstream fout("c:\\Temp\\system_reverse.txt", ios::out | ios::binary); // 파일 스트림 객체, 바이너르 모드로 출력을 위해 생성 
	if(!fout){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	fin.seekg(0,ios::end); // 파일포인터를 맨 끝(EOF) 값 가리킴 
	int fileSize=fin.tellg(); // 현재의 get pointer의 위치의 정숫값 반환 
	
	cout<<"거꾸로 복사 시작..."<<endl;
	
	int c;
	for(int i=0;i<fileSize;i++){
		// fin.seekg(fileSize-1-i, ios::beg);
		// fin.seekg(-1,ios::cur); 읽은다음에 전진하기 때문에 불가능 ios::cur 은 문제가 있음
		fin.seekg(-i, ios::end);
		//fin.seekg(-1, ios::cur);
		c=fin.get();
		fout.put(c);
		//fin.seekg(-1, ios::cur);
	}
	
	cout<<fileSize<<"B 복사 완료 "<<endl;

	fin.close();
	fout.close();
}
