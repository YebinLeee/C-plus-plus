#include <iostream>
using namespace std;

// 연산자 함수 정의, 가상 함수와 오벌이딩, 업캐스팅

 
class Comparable{
	public:
		virtual bool operator > (Comparable &op2)=0;
};

// Comparable을 상속받음 
class Circle : public Comparable{
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
		bool operator > (Comparable& op2){
			Circle *op=(Circle*)&op2; // 업캐스팅 (Comparable을 Circle로 형변환하여 op 객체포인터에 저장) 
			if(radius>op->radius)return true;
			else return false;
		}
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if(a > b) return a; 
	else return b;
}

int main() {
	int a=20, b=50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}

