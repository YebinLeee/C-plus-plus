#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char filename[20];
	string data("Hi~ Hello~");
	string tmp;
	string line;
	
	cout<<"파일 이름 입력하시오 >> ";
	cin.getline(filename, 20);
	
	cout<<"파일에 출력할 한 줄 >> ";
	getline(cin, line);
	ofstream fout(filename);
	fout << data << endl;
	fout << line << endl;
	
	fout.close();
	
	ifstream fin(filename);
	while(getline(fin, tmp)) cout<<"읽은 데이터: "<<tmp<<endl;
	
	fin.close();
}
