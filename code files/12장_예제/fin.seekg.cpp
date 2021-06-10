#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char filename[]="hello.txt";
	
	ifstream fin(filename);
	
	fin.seekg(10,ios::beg);
	fin.seekg(10, ios::cur);
	fin.seekg(10, ios::cur);
	long n=fin.tellg();
	cout<<n<<endl;
}
