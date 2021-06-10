#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb){
	T* p=new T[sizea+sizeb];
	for(int i=0;i<sizea;i++)
		p[i]=a[i];
	for(int i=0;i<sizeb;i++)
		p[i+sizea]=b[i];
	return p;
}

int main(){
	double x[]={1.1,2.2,3.3,4.4,5.5};
	double y[]={-1, -2, -3, -4};
	
	double *p=concat(x,5,y,4);
	for(int i=0;i<9;i++) cout<<p[i]<<' ';
	cout<<endl;
	
	delete []p;
}
