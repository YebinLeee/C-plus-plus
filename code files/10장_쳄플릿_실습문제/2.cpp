#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T a[], T b[], int n){
	for(int i=0;i<n;i++)
		if (a[i]!=b[i]) return false;
	return true;
}
int main(){
	int x[]={1,10,100,5,4};
	int y[]={1,10,100,5,4};
	
	double a[]={1.1, 2.3};
	double b[]={3.3, 2.3};
	  
	if(equalArrays(x,y,5)) cout<<"같다"<<endl;
	else cout<<"다르다"<<endl;
	
	if(equalArrays(a,b,5)) cout<<"같다"<<endl;
	else cout<<"다르다"<<endl;
}
