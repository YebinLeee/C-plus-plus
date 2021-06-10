#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	cout<<showbase; // 16진수는 0x, 8진수는 0을 앞에 붙여 출력
	 
	cout<<setw(8)<<"Number"<<setw(10)<<"Octal"<<setw(10)<<"Hexa"<<endl;
	
	for(int i=0;i<10;i++){
		cout<<setw(8)<<setfill('.')<<dec<<i; // 10진수 (width:8, fill:'.') 
		cout<<setw(10)<<setfill(' ')<<oct<<i; // 8진수 (width:10, fill:' ')
		cout<<setw(10)<<setfill(' ')<<hex<<i<<endl; // 16진수 (width:10, fill:' ', endl) 
	}
}

