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
	cout << "�� ���� ������ �Է��ϼ��� >> ";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� �Ի�");
	cout << "����" << c << endl;
}
int main() {
	Trace::put("main()", "���α׷� �����մϴ�"); // ����� ���� ����(�±� / ����� ����)
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}