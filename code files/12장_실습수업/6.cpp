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
	
	
	fstream fout("c:\\Temp\\system.txt", ios::out | ios::binary); // 파일 스트림 객체, 바이너르 모드로 출력을 위해 생성 
	if(!fout){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	fin.seekg(0,ios::end); // 파일포인터를 맨 끝으로 
	int fileSize=fin.tellg(); // 현재의 get pointer의 위치의 정숫값 반환 
	int unit=fileSize/10; // 10%에 해당하는 파일 사이즈 저장
	
	fin.seekg(0, ios::beg); // 파일포인터를 맨 앞으로
	
	cout<<"복사 시작..."<<endl;
	char *buf=new char[unit];
	
	for(int i=0;i<10;i++){
		fin.read(buf, unit); // unit만큼 읽어 buf에 저장
		int realSize=fin.gcount();
		fout.write(buf, realSize);
		cout<<'.'<<realSize<<"B "<<10*(i+1)<<'%'<<endl;
	}
	
	cout<<fileSize<<"B 복사 완료 "<<endl;
	
	delete[]buf;
	fin.close();
	fout.close();
}
