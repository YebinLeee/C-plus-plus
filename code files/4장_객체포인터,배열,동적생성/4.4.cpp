#include <iostream>
#include <string>
using namespace std;


class Sample {
	int* p;
	int size;
public:
	Sample(int n) { size = n;p = new int[n]; }
	void read() {
		for (int i = 0;i < this->size;i++)
			cin >> p[i];
	}
	void write() {
		for (int i = 0;i < this->size;i++)
			cout << p[i]<<' ';
	}
	int big() {
		int max = p[0];
		for (int i = 1;i < size;i++)
			if (p[i] > max)
				max = p[i];
		return max;

	}
	~Sample() {}
};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << endl<<"가장 큰 수는 " << s.big() << endl;
}