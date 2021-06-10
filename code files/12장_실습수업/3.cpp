#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;

int main(){
	// 한 라인씩 읽어 라인번호 붙여 출력
	ifstream fin("c:\\Temp\\system.ini");
	if(!fin){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	/*
	string line;
	int i=0;
	while(getline(fin, line)){
		for(int i=0;i<line.size();i++){
			if(islower(line[i])) line[i]=toupper(line[i]); // 소문자 비교 안해도 됨. 나머지는 그대로 출력 
		}
		cout<<++i<<" : "<<line<<endl;
	}*/
	int ch;
	while((ch=fin.get())!=EOF){
		cout << (char)toupper(ch); // cout.put(toupper(ch)); put함수는 char로 자동 변환하여 출력 
	}
	fin.close();
	 
}
