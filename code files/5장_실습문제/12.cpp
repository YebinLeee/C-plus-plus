#include <iostream>
#include <string>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		//cout << "기본 생성자 실행" << endl;
		this->size = size;
		scores = new int[size];
	}
	/*
	Dept(const Dept& dept){
		//cout << "복사 생성자 실헹" << endl;
		this->size = dept.size;
		this->scores = new int[dept.size];
		for (int i = 0;i < this->size;i++)
			scores[i] = dept.scores[i];
	}
	*/
	~Dept() {
		if (this->scores) {
			//cout << "동적 메모리 반환" << endl;
			delete[]scores;
		}
	}
	int getSize() {
		//cout << this->size << "개 사이즈" << endl;
	return this->size;
	}
	void read() {
		cout << size << "개 정수 입력 >> ";
		for (int i = 0;i < size;i++)
			cin >> scores[i];
	}
	bool isOver60(int index) {
		if (this->scores[index] > 60) {
			//cout << this->scores[index] << ' ' << endl;
			return true;
		}
		else {
			//cout << index<<"  :  "<<this->scores[index] << " under 60" << endl;
			return false;
		}
	}
};
int countPass(Dept &dept) {
	int count = 0;
	for (int i = 0;i < dept.getSize();i++)
		if (dept.isOver60(i)) count++;
	return count;
}

int main() {
	Dept com(10); // size에 10 전달
	com.read(); // 10명 데이터 받아 scores에 저장
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명" << endl;
}