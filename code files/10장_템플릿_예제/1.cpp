#include <iostream>
using namespace std;


template <class T>
void print(T arr[], int n){
	for (int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void print(char a[], int n){
	for (int i=0;i<n;i++)
		cout<<(int)a[i]<<" ";
	cout<<endl;
}

int main(){
	char c[5]={'h', 'e', 'l', 'l', 'o'};
	int n[5]={1,2,3,4,5};
	print(c,5);
	print(n,5);
}


