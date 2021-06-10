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
	friend Matrix operator +(Matrix op1, Matrix op2);
	friend Matrix& operator +=(Matrix& op1, Matrix op2);
	friend bool operator ==(Matrix op1, Matrix op2);
};

Matrix operator +(Matrix op1, Matrix op2){
	Matrix tmp;
	for(int i=0;i<4;i++)
		tmp.e[i]=op1.e[i]+op2.e[i];
	return tmp;
}
Matrix& operator +=(Matrix& op1, Matrix op2){
	for(int i=0;i<4;i++)
		op1.e[i]+=op2.e[i];
}
bool operator ==(Matrix op1, Matrix op2){
	for(int i=0;i<4;i++)
		if(op1.e[i]!=op2.e[i]) return false;
	return true;
}

int main(){
	Matrix a(1,2,3,4), b(2,3,4,5),c;
	c=a+b;
	a+=b;
	
	a.show(); b.show(); c.show();
	
	if(a==c) cout<<"a and c are the same"<<endl;
}
