#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	cout<<"10 ���� 30 = "<<30<<endl; // ios::dec default �� 
	cout.unsetf(ios::dec); // 10���� ����
	cout.setf(ios::hex); // 16���� �÷��� ����
	cout<<"16���� 30 = "<<30<<endl; 
	cout<<"16���� 40 = "<<40<<endl; 
}
