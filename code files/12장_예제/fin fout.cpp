#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char filename[20];
	string data("Hi~ Hello~");
	string tmp;
	string line;
	
	cout<<"���� �̸� �Է��Ͻÿ� >> ";
	cin.getline(filename, 20);
	
	cout<<"���Ͽ� ����� �� �� >> ";
	getline(cin, line);
	ofstream fout(filename);
	fout << data << endl;
	fout << line << endl;
	
	fout.close();
	
	ifstream fin(filename);
	while(getline(fin, tmp)) cout<<"���� ������: "<<tmp<<endl;
	
	fin.close();
}
