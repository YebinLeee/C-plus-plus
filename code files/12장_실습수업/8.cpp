#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
using namespace std;

// 16������ ��� 
void printHexa(char *buf, int n){
	for (int i=0;i<16;i++){
		cout<<setw(2)<<setfill(' ')<hex<<(int)buf[i];
		
		if(i==n-1) {	// n-1�� ���� 
			cout<<' ';
			for(int j=i+1;j<16;j++){
				cout<<setw(2)<<setfill(' ')<<hex<<' ';
				cout<<' ';
			}
			break;
		}
		
		if(i==7) cout<<setw(4)<<setfill(' ')<<' ';
		
		else cout<<' ';
	}
}


// ���ڷ� ��� 
void printChar(char *buf, int n){
	cout << setw(4) << setfill(' ') << ' ';	// hex ���� ��� �� ��� ����

	for(int i=0; i<16; i++) {
		if(isprint(buf[i]))
			cout << buf[i];
		else
			cout << '.';

		if(i == n-1) {  
			break;
		}
	
		if(i == 7) cout << setw(4) << setfill(' ') << ' ';
		else cout << ' ';
	}

}

int main(){
	fstream fin("c:\\Temp\\system.ini", ios::in | ios::binary); // ���� ��Ʈ�� ��ü, ���̳ʸ� ���� �Է��� ���� ���� 
	if(!fin){
		cout<<"���� ���� ����"<<endl;
		return 0;
	}
	
	char buf[16];
	while(true){
		fin.read(buf, 16); // 16����Ʈ��ŭ�� �о buf�� ����
		int real = fin.gcount();
		printHexa(buf, real);
		printChar(buf, real);
		cout<<endl;
		
		if(real<16) break; // ������ �� �а� �Ǹ� while�� ���� 
	} 

	fin.close();
}
