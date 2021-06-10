#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	cout<<showbase; // 16������ 0x, 8������ 0�� �տ� �ٿ� ���
	 
	cout<<setw(8)<<"Number"<<setw(10)<<"Octal"<<setw(10)<<"Hexa"<<endl;
	
	for(int i=0;i<10;i++){
		cout<<setw(8)<<setfill('.')<<dec<<i; // 10���� (width:8, fill:'.') 
		cout<<setw(10)<<setfill(' ')<<oct<<i; // 8���� (width:10, fill:' ')
		cout<<setw(10)<<setfill(' ')<<hex<<i<<endl; // 16���� (width:10, fill:' ', endl) 
	}
}

