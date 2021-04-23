#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) { size = n;p = new int[n]; }
	void read() {
		cout << size<< "개 입력 >> ";
		for (int i = 0;i < size;i++) cin >> p[i];
	}
	void write() {
		for (int i = 0;i < size;i++)cout << p[i] << " ";
	}
	int big() {
		int big = p[0];
		for (int i = 1;i < size;i++)if (p[i] > big)big = p[i];
		return big;
	}
	~Sample() {
		if (p)delete[]p;
	}
};
int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << endl<<"가장 큰 수는 " << s.big() << endl;
}