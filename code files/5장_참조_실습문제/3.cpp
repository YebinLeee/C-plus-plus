#include <iostream>
#include <string>
using namespace std;

// s3�� ���� �������߸� �Ѵ�. �׷��� main()���� s3�� ���� ����� 
void combine(string &s1, string &s2, string &s3) {
	s3 = s1 + " " + s2;
}
int main() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3<<endl;
}