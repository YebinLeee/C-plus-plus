#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout.width(10); // 포맷 함수
	cout.precision(4); // 포맷 함수
	cout<<setfill('~')<<left<<2./3.<<endl; // 조작자 
}
