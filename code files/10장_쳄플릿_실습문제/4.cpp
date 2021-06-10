#include <iostream>
using namespace std;

template <class T>
bool search(T target, T arr[], int n){
	for(int i=0;i<n;i++)
		if(arr[i]==target) return true;
	return false;
}
int main(){
	int x[]={1,10,100,5,4};
	
	if(search(100,x,5)) cout<<"100이 x에 포함되어 있다"<<endl;
	else cout<<"100이 배열 x에 포함되어 있지 않다"<<endl;
	
	if(search(3,x,5)) cout<<"3이 x에 포함되어 있다"<<endl;
	else cout<<"3이 배열 x에 포함되어 있지 않다"<<endl;
}
