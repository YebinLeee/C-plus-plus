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
	Buffer& temp = append(buf, "Guys"); // ��ü�� string���ڿ� ��ü�� �Ű������� �Ͽ� ��� ���� ��ü�� temp�� ����
	temp.print();
	buf.print();
}