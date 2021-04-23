#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string text) { this->text += text; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string str) {
	buf.add(str);
	return buf;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); // 객체와 string문자열 객체를 매개변수로 하여 얻는 참조 객체를 temp에 저장
	temp.print();
	buf.print();
}