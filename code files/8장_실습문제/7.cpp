#include <iostream>
using namespace std;

class BaseMemory{
	char *mem;
protected:
	BaseMemory(int size){mem=new char[size];}
	char getMem(int i){return mem[i];}
	void putMem(int i, char ch){mem[i]=ch;}
};

class ROM:public BaseMemory{
	int size;
public:
	ROM(int capacity, char *arr, int len):BaseMemory(capacity){
		size=0;
		for(int i=0;i<len;i++)
			putMem(size++, arr[i]);	
	}
	char read(int i){return getMem(i);}
};

class RAM:public BaseMemory{
	int size;
public:
	RAM(int capacity):BaseMemory(capacity){size=0;}
	void write(int i, char ch){ putMem(size++, ch);}
	char read(int i){return getMem(i);	}
};

int main(){
	char x[5]={'h', 'e', 'l', 'l','o'};
	ROM biosROM(1024*10, x, 5);
	RAM mainMemory(1024*1024);
	
	for(int i=0;i<5;i++) mainMemory.write(i, biosROM.read(i));
	for(int i=0;i<5;i++) cout<<mainMemory.read(i);
}
