#include <iostream>
#include <string>
using namespace std;

// s3은 참조 변수여야만 한다. 그래야 main()에서 s3의 값이 변경됨 
void combine(string &s1, string &s2, string &s3) {
	s3 = s1 + " " + s2;
}
int main() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3<<endl;
}