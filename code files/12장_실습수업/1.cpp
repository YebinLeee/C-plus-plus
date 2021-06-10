#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// ifstream fin("c:\\temp\\test.txt"); // 읽기위한 ifstream 객체 fin 생성
	 ifstream fin;
	 fin.open("c:\\Temp\\test.txt");
	 // 파일 열기 실패(!연산자 함수) 
	 if(!fin){
	 	cout<<"파일 열기 오류"<<endl;
	 	return 0;
	 }
	 
	 // 파일로부터 읽어들이기-fin.get() / (키보드로부터-cin.get) 
	 int ch;
	 while((ch=fin.get())!=EOF){
	 	cout.put(ch);
	 }
	 
	 fin.close(); // 파일 닫기 
} 
