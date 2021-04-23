#include <iostream>
using namespace std;
// 삼항 연산자 자유자재로 사용하기
// return 문 안에서 함수 반환값 가져오기
// return 문 안에서 삼항 연산자 사용

/*
int big(int a, int b) {
	int result = a > b ? a : b;
	if (result < 100)return result;
	else return 100;
	
	/*
	int result = result < 100 ? result : 100;
	return result;
	*/


int big(int a, int b, int c = 100) {
	int big = a > b ? a : b;
	if (big < c)return big;
	else return c;

	/*
	int m=(a>b)?a:b;
	return (m>c)?c:m;
	*/
	// 	return (a>b?a:b) <=c? c : (a>b?a:b);
}

int big(int a, int b){
	return big(a,b,100);
}


int main() {
	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;
}
