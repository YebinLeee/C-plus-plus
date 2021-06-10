#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
};

class ROM :public BaseMemory {

};

class RAM :public BaseMemory {

};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0;i < 5;i++)mainMemory.write(i, biosRom.read(i));
	for (int i = 0;i < 5;i++)cout << mainMemory.read(i);
}