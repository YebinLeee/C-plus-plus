#include <iostream>
using namespace std;

template <class T1, class T2>
void insert(T1 a, T2 b, int index){
	b[index]=a;
}

int main(){
	int x[3]={1,2,3};
	
	for(int i=0;i<3;i++) cout<<x[i]<<" ";
	cout<<endl;
	
	insert(3, x, 0);
	for(int i=0;i<3;i++) cout<<x[i]<<" ";
	cout<<endl;
}
