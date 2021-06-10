#include <iostream>
using namespace std;

class Matrix{
	int e[4];
public:
	Matrix(int a=0, int b=0, int c=0, int d=0){
		e[0]=a;
		e[1]=b;
		e[2]=c;
		e[3]=d;
	}
	void show(){
		cout<<"Matrix = { ";
		for(int i=0;i<4;i++) cout<<e[i]<<" ";
		cout<<"}"<<endl;
	}
	friend void operator >> (Matrix &m, int arr[]);
	friend void operator << (Matrix &m, int arr[]);

};

// matrix�� �迭�� �����ϴ� >> ������
void operator >> (Matrix &m, int arr[]){
	for(int i=0;i<4;i++)
		arr[i]=m.e[i];
}
// �迭�� matrix �� �����ϴ� << ������ 
void operator << (Matrix &m, int arr[]){
	for (int i=0;i<4;i++)
		m.e[i]=arr[i];
}	
	
int main(){
	Matrix a(4,3,2,1), b;
	int x[4], y[4]={1,2,3,4};
	a>>x; // matirx a�� �� x �迭�� ����
	b<<y; // y �迭�� �� matrix b�� ����
	
	for(int i=0;i<4;i++) cout<<x[i]<<' ';
	cout<<endl;
	b.show();
}
