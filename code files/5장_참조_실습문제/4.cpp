#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big) {
	// big=a>b?a:b;
	// return a==b; (������ 1, �ٸ��� 0 ��ȯ) if(!b)
	
	if (a == b) return true;
	// big=a>b?a:b; return false;

	else if (a > b) {
		big = a;
		return false;
	}
	else {
		big = b;
		return false;
	}
}
int main() {
	int x, y, big;
	bool b;
	cout << "�� ������ �Է��ϼ���>> ";
	cin >> x >> y;
	cout << (x == y) << endl;
	b = bigger(x, y, big);
	if (b) // true���
		cout << "�� ���� ����." << endl;
	else
		cout << "ū ���� " << big << endl;
}
