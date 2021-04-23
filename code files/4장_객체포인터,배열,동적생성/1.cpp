#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() {
		a = 100;cout << a << ' '; }
	~Sample() { cout << "소멸" << endl; }
	Sample(int x) { a = x;cout << a << ' '; }
	Sample(int x, int y) { a = x * y;cout << a << ' '; };
	int get() { return a; }
	
};

int main() {
	

	Sample *a=new Sample[3];
	int sum = 0;

	for (int i = 0;i < 3;i++)
		sum += (a + i)->get();
	cout << endl << "합은 " << sum << endl << endl;


	Sample arr2D[2][2] = { {Sample(2,3), Sample(2,4)}, {Sample(5), Sample()} };
	int sum2D = 0;
	
	for (int i = 0;i < 2;i++)
		for (int j = 0;j < 2;j++)
			sum2D += arr2D[i][j].get();
	cout << endl << "합은 " << sum2D<< endl;


	delete[]a;
}