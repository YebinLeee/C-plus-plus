#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	cout<<"10 진수 30 = "<<30<<endl; // ios::dec default 값 
	cout.unsetf(ios::dec); // 10진수 해제
	cout.setf(ios::hex); // 16진수 플래그 설정
	cout<<"16진수 30 = "<<30<<endl; 
	cout<<"16진수 40 = "<<40<<endl; 
}
