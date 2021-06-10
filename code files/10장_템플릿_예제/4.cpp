#include <iostream>
using namespace std;

template <class T> void show(T a){ cout<<a<<endl;}
void show(int a){cout<<"special "<<a<<endl;}

int main(){
	show(3.14);
	show(100);
}
