#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char filename[]="hello.txt";
	
	ifstream fin(filename, ios::binary);
	
	int ch;
	int cnt=0;
	while((ch=fin.get())!=EOF){
		if(ch=='\r') cnt++; 
	}
	cout<<"줄의 개수는 "<< cnt<<endl;
}
