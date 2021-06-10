#include <iostream>
using namespace std;

template <class T>
class mContainer{
	T *p;
	int size;
public:
	mContainer(int n);
	~mContainer();
	void set(int index, T value);
	T get(int index);
};

template<class T>
mContainer<T>::mContainer(int n){p=new T[n];} 

template <class T>
mContainer<T>::~mContainer(){if(p) delete[]p;}

template <class T>
void mContainer<T>::set(int index, T value){p[index]=value;}

template <class T>
T mContainer<T>::get(int index){return p[index];}

int main(){
	mContainer<char> c(26);
	char ch='a';
	
	for(int i=0;i<26;i++){
		c.set(i,ch++);
	}
	for (int i=26;i>=0;i--) cout<<c.get(i)<<" ";
}
