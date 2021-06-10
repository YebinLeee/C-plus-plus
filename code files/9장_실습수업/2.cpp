#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	// 순수 가성 함수
	virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0; // 소스 단위 명칭
	virtual string getDestString() = 0; // dest 단위 명칭
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
public:
	KmToMile(double ratio) :Converter(ratio) {} //생성자

	// virtual 키워드 생략 가능	
	double convert(double src) { return (double)src / ratio; }// src를 다른 단위로 변환한다.
	string getSourceString() { return "Km"; } // 소스 단위 명칭
	string getDestString() { return "Mile"; } // dest 단위 명칭
};


int main() {
	KmToMile toMile(1.609344); // 1mile은 1.609344 Km
	toMile.run();
}

