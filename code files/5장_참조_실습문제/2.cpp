#include <iostream>
#include <string>
using namespace std;

// n���� �����ϱ� ���� ���� ȣ���� �ϵ��� �Ѵ�.
void half(double &n) { n = n / 2; }
int main() {
	double n = 20;
	half(n);
	cout << n<<endl;
}