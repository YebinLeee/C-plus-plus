#include <iostream>
using namespace std;

// 생성자 위임 다시 공부하기 :: 교수님이 알려주신 '조건'대로 하기!

class Airplane {
private:
	string name;
	int capacity, speed;
public:
	Airplane() :Airplane("에어버스 350", 400, 1000) {} // 위임 코드 ( 위임문법 : )

	// 각 멤버 변수를 매개변수 값으로 초기화는 생성자
	Airplane(string n, int cap, int sp) {
		name = n;
		capacity = cap, speed = sp;
	}
	
	// 각각의 값을 리턴하는 멤버 함수
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; }
	string getName() { return name; }

	// 위의 리턴 함수의 반환값을 이용하기
	void print() {
		cout << "비행기의 이름: " << getName << endl;
		cout << "비행기의 용량: " << getCapacity << endl;
		cout << "비행기의 속도: " << getSpeed <<" Km/h"<<endl << endl;
	}
};
int main() {
	
	Airplane plane("보잉 787", 300, 900);
	cout << "비행기 #1" << endl;
	plane.print();

	cout << "비행기 #2" << endl;
	Airplane plane2;
	plane2.print();
	return 0;
}