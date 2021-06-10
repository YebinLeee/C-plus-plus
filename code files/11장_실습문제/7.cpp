#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
	for (int i=0;i<3;i++)
		cout<<setw(10)<<left<<"dec"<<setw(10)<<"hexa"<<setw(10)<<"char";
	cout<<endl;
	for (int i=0;i<9;i++)
		cout<<setw(10)<<setfill(' ')<<"___";
	cout<<endl;
	
	for(int i=0;i<=127;i+=3){
		cout<<setw(10)<<isalpha(i)?i:'.'<<setw(10)<<hec<<i<<setw(10)<<(char)i;
		cout<<setw(10)<<isalpha(i)?i:'.'<<setw(10)<<hec<<i<<setw(10)<<(char)i+1;
		cout<<setw(10)<<isalpha(i)?i:'.'<<setw(10)<<hec<<i<<setw(10)<<(char)i+2<<endl;		
	}
}
