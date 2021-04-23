#include <iostream>
#include <string>
using namespace std;

// n값을 변경하기 위해 참조 호출을 하도록 한다.
void half(double &n) { n = n / 2; }
int main() {
	double n = 20;
	half(n);
	cout << n<<endl;
}