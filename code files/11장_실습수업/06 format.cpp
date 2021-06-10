#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int num=0;
	cout<<setw(15)<<left<<"Number"<<setw(15)<<"Squre"<<setw(15)<<"Square Root"<<endl;
	
	for(int i=0;i<=10;i++){
		num=i*5;
		cout.precision(3);
		cout.left;
		cout<<setw(15)<<setfill('_')<<num;
		cout<<setw(15)<<setfill('_')<<num*num;
		cout<<setw(15)<<setfill('_')<<sqrt(num)<<endl;
	}
} 
