#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big) {
	big = a > b ? a : b;
	return a == b;
}
int main() {
	int a, b, big;
	cout << "a�� b�Է� : ";
	cin >> a >> b;
	
	if (bigger(a, b, big)) cout << "�� ���� ���� " << endl;
	else cout<< "ū ���� " << big << endl;
}