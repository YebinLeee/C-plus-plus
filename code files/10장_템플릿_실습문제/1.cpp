#include <iostream>
using namespace std;

template <class T>
T biggest(T arr[], int n){
	T big=arr[0];
	for(int i=1;i<n;i++)
		if(arr[i]>big) big=arr[i];
	return big;	
}

 int main(){
 	int x[]={1,10,100,5,4};
 	cout<<biggest(x,5)<<endl;
 	
 	double d[]={3.5, 2.4, 5.5, 9.1, -2.3};
 	cout<<biggest(d,5)<<endl;
 	
 	string str[]={"hello", "wow", "every", "apple"};
 	cout<<biggest(str,4)<<endl;
 }
