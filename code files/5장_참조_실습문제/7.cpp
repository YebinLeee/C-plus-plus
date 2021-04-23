#include <iostream>
#include <string>
using namespace std;

// First In Last Out (FILO : ��������)
class MyIntStack {
	int p[10];
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() {
		tos = 0;
	};
	bool push(int n) {// ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
		if (tos > 9) return false;
		else {
			p[tos++] = n;
			return true;
		}
	}
	bool pop(int& n) { // ���Ͽ� n�� ����.������ ��� ������ false, �ƴϸ� true ����
		tos--;
		if (tos < 0) return false;
		else {
			n = p[tos];
			return true;
		}
	}
};


int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) { // 11���� Ǫ���Ѵ�.
		if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { // 11���� ���Ѵ�.
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}
