#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
	int* p; // ���� �޸𸮷� ����� ������
	int size; // ������ �ִ� ũ��
	int tos; // ������ ž�� ����Ű�� �ε���
public:
	MyIntStack();
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = 0;
	}
	MyIntStack(const MyIntStack& s) // ���� ������
	{
		//cout << "���� ������ b ����" << endl;

		this->size = s.size;
		this->tos = s.tos;
		p = new int[s.size];
		for (int i = 0;i < s.tos;i++) {
			this->p[i] = s.p[i];
			// cout << this->p[i] << endl;
		}
	}
	~MyIntStack(){
		if (p)
			delete[]p; // p �޸𸮰� �Ҵ�Ǿ� �ִ� ���¶��, ���� �Ҵ�� �޸� ��ȯ�Ѵ�.
	
	}
	bool push(int n) {
		if (tos > size) return false;
		else {
			p[tos++] = n;
			return true;
		}
	}
	bool pop(int& n) {
		if (tos < 0)return false;
		else {
			n = p[--tos];
			return true;
		}
	}
};
int main() {
	MyIntStack a(10); // 10���� �޸� ����
	a.push(10); // 10�� Ǫ��
	a.push(20); // 20�� Ǫ��
	MyIntStack b = a; // ���� ���� MyintStack b(a);
	b.push(30); // 30�� Ǫ��

	int n;
	a.pop(n); // ���� a���� ��
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n); // ���� b ��
	cout << "���� b���� ���� �� " << n << endl;
}
