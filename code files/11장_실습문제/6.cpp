#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	// 필드 간격 15, 제곱근 유효숫자 3, 빈칸 _ fill
	// setw(15), setprecision(3), setfill('_')
	
	cout<<setw(15)<<left<<"Number";
	cout<<setw(15)<<left<<"Square";
	cout<<setw(15)<<left<<"Square Root"<<endl;
	
	for (int i=0;i<=45;i+=5){
		cout<<setw(15)<<setfill('_')<<i;
		cout<<setw(15)<<setfill('_')<<i*i;
		cout<<setw(15)<<setfill('_')<<setprecision(3)<<sqrt(i)<<endl;
		
	}
} 
