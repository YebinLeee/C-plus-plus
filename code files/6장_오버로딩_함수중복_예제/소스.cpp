#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b) { return a + b; }
int sum(int a, int b, int c = 0) { return a + b + c; }
int main() {
	cout << "sum(1,2) = " << sum(1, 2) << endl;
	cout << "sum(1,2,3) = " << sum(1, 2, 3) << endl;
}