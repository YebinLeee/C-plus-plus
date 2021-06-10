#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// 한 라인씩 읽어 라인번호 붙여 출력
	ifstream fin("c:\\Temp\\system.ini");
	if(!fin){
		cout<<"파일 열기 오류"<<endl;
		return 0;
	}
	
	string line;
	int i=0;
	while(getline(fin, line)){
		cout<<++i<<" : "<<line<<endl;
	}
	fin.close();
	 
}
