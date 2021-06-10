#include <iostream>
using namespace std;

int main(){
	string get;
	
	while(true){
		cout<<"종료하려면 exti을 입력하세요 >> ";
		cin>>get;
		if(get=="exit") break;
	}
	cout<<"프로그램을 종료합니다...."<<endl;
}
