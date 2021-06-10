#include <iostream>
using namespace std;

// ������ �Լ� ����, ���� �Լ��� �����̵�, ��ĳ����

 
class Comparable{
	public:
		virtual bool operator > (Comparable &op2)=0;
};

// Comparable�� ��ӹ��� 
class Circle : public Comparable{
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
		bool operator > (Comparable& op2){
			Circle *op=(Circle*)&op2; // ��ĳ���� (Comparable�� Circle�� ����ȯ�Ͽ� op ��ü�����Ϳ� ����) 
			if(radius>op->radius)return true;
			else return false;
		}
};

template <class T>
T bigger(T a, T b) { // �� ���� �Ű� ������ ���Ͽ� ū ���� ����
	if(a > b) return a; 
	else return b;
}

int main() {
	int a=20, b=50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}

