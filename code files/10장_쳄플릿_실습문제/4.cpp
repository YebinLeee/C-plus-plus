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
	
	if(search(100,x,5)) cout<<"100�� x�� ���ԵǾ� �ִ�"<<endl;
	else cout<<"100�� �迭 x�� ���ԵǾ� ���� �ʴ�"<<endl;
	
	if(search(3,x,5)) cout<<"3�� x�� ���ԵǾ� �ִ�"<<endl;
	else cout<<"3�� �迭 x�� ���ԵǾ� ���� �ʴ�"<<endl;
}
