#include <iostream>
using namespace std;

int main(){
	cout<<"cout.width(10), cout.fill('!')"<<endl;
	cout.width(10);
	cout.fill('-'); // �ѹ� �����Ǹ� ��� ������ 
	cout<<"hello"<<"hi"<<endl<<endl; // ȣ�� ������ �ϳ���  �ʵ忡�� �����(������ ���� default)
	
	cout<<"cout.width(20)"<<endl;
	cout.width(20);
	cout<<"wow"<<endl<<endl;
	
	cout<<"5./3. >> ";
	cout<<"cout.width(20), cout.fill('*'), cout.precision(5)"<<endl;
	cout.width(20);
	cout.fill('*');
	cout.precision(5);
	cout<<5./3.<<endl;
}

