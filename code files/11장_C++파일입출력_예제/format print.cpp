#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout.width(10); // ���� �Լ�
	cout.precision(4); // ���� �Լ�
	cout<<setfill('~')<<left<<2./3.<<endl; // ������ 
}
