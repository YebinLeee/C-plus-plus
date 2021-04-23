#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
	int* p; // 스택 메모리로 사용할 퐁니터
	int size; // 스택의 최대 크기
	int tos; // 스택의 탑을 가리키는 인덱스
public:
	MyIntStack();
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = 0;
	}
	MyIntStack(const MyIntStack& s) // 복사 생성자
	{
		//cout << "복사 생성자 b 실행" << endl;

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
			delete[]p; // p 메모리가 할당되어 있는 상태라면, 동적 할당된 메모리 반환한다.
	
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
	MyIntStack a(10); // 10개의 메모리 공간
	a.push(10); // 10을 푸시
	a.push(20); // 20을 푸시
	MyIntStack b = a; // 복사 생성 MyintStack b(a);
	b.push(30); // 30을 푸시

	int n;
	a.pop(n); // 스택 a에서 팝
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n); // 스탹 b 팝
	cout << "스택 b에서 팝한 값 " << n << endl;
}
