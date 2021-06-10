#include <iostream>
using namespace std;

class A{
public:
	void func(){f();}
	virtual void f(){cout<<"A::f() called"<<endl;}
}; 

class B:public A{
public:
	void f(){cout<<"B::f() called"<<endl;}
};

class C:public B{
public:
	void f(){cout<<"C::f() called"<<endl;}
};

int main(){
	A *aP, a; 	aP = &a;
	B *bP, b;	bP = &b;
	C *cP, c;	cP = &c;
	
	cout<<"aP->f() : "; aP->f();
	cout<<"bP->f() : "; bP->f();
	cout<<"cP->f() : "; cP->f();
	
	aP = bP = cP; // 업캐스팅
	
	cout<<endl<<"업캐스팅 : aP=cP, bP=cP"<<endl;
	cout<<"aP->f() : "; aP->f();
	cout<<"bP->f() : "; bP->f();
	
	cout<<"aP->func() : "; aP->func();
}
