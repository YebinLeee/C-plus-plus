#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big) {
	big = a > b ? a : b;
	return a == b;
}
int main() {
	int a, b, big;
	cout << "a와 b입력 : ";
	cin >> a >> b;
	
	if (bigger(a, b, big)) cout << "두 수는 같다 " << endl;
	else cout<< "큰 수는 " << big << endl;
}