#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
using namespace std;

// 16진수로 출력 
void printHexa(char *buf, int n){
	for (int i=0;i<16;i++){
		cout<<setw(2)<<setfill(' ')<hex<<(int)buf[i];
		
		if(i==n-1) {	// n-1에 도달 
			cout<<' ';
			for(int j=i+1;j<16;j++){
				cout<<setw(2)<<setfill(' ')<<hex<<' ';
				cout<<' ';
			}
			break;
		}
		
		if(i==7) cout<<setw(4)<<setfill(' ')<<' ';
		
		else cout<<' ';
	}
}


// 문자로 출력 
void printChar(char *buf, int n){
	cout << setw(4) << setfill(' ') << ' ';	// hex 라인 출력 후 띄기 위해

	for(int i=0; i<16; i++) {
		if(isprint(buf[i]))
			cout << buf[i];
		else
			cout << '.';

		if(i == n-1) {  
			break;
		}
	
		if(i == 7) cout << setw(4) << setfill(' ') << ' ';
		else cout << ' ';
	}

}

int main(){
	fstream fin("c:\\Temp\\system.ini", ios::in | ios::binary); // 파일 스트림 객체, 바이너르 모드로 입력을 위해 생성 
	if(!fin){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	char buf[16];
	while(true){
		fin.read(buf, 16); // 16바이트만큼씩 읽어서 buf에 저장
		int real = fin.gcount();
		printHexa(buf, real);
		printChar(buf, real);
		cout<<endl;
		
		if(real<16) break; // 마지막 줄 읽게 되면 while문 종료 
	} 

	fin.close();
}
