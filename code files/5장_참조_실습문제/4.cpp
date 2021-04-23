#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big) {
	// big=a>b?a:b;
	// return a==b; (같으면 1, 다르면 0 반환) if(!b)
	
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
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	cout << (x == y) << endl;
	b = bigger(x, y, big);
	if (b) // true라면
		cout << "두 수는 같다." << endl;
	else
		cout << "큰 수는 " << big << endl;
}
