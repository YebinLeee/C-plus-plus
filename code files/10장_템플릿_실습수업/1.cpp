#include <iostream>
using namespace std;

template <class T>
T biggest(T a[], int n){
	if (n<=0) return 0;
	
	T max=a[0];
	for(int i=1;i<n;i++)
		if(a[i]>max) max=a[i];
	return max;
}

int main(){
	int x[]={1,10,100,5,4};
	cout<<biggest(x,5)<<endl;
	double y[]={1.1, 2.2, 3.3, 4.4, 5.5};
	cout<<biggest(y,5)<<endl;
}
