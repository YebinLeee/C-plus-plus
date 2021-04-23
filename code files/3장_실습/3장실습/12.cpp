#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
	Ram r;
	r.write(100, 20);
	r.write(101, 30);
	char res = r.read(100) + r.read(101);
	r.write(102, res);
	cout << "102번지의 값 = " << (int)r.read(102) << endl;
	return 0;
}