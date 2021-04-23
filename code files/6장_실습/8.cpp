#include <iostream>
using namespace std;

class Trace {
	string tag;
	string info;
public:
	static void put(string f, string str) {
		string tag = f;
		string info = str;
		cout<<""
	}
	static void print(string s="") {
		cout << "f():" << tag << endl;
		cout<<"f():"<<
	
	}
};

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요 >> ";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 게산");
	cout << "합은" << c << endl;
}
int main() {
	Trace::put("main()", "프로그램 시작합니다"); // 디버깅 정보 저장(태그 / 디버깅 정보)
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}