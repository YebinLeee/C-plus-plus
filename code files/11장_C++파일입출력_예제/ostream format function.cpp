#include <iostream>
using namespace std;

int main(){
	cout<<"cout.width(10), cout.fill('!')"<<endl;
	cout.width(10);
	cout.fill('-'); // 한번 지정되면 계속 지정됨 
	cout<<"hello"<<"hi"<<endl<<endl; // 호출 직후의 하나의  필드에만 적용됨(오른쪽 정렬 default)
	
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

