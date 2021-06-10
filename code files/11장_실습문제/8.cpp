#include <iostream> 
using namespace std;

class Circle{
	string name;
	int radius;
public:
	Circle(int radius=1, string name=""){
		this->radius=radius;
		this->name=name;
	}
	friend istream& operator >> (istream& ins, Circle& c);
	friend ostream& operator << (ostream& outs, Circle c);
};

istream& operator >> (istream& ins, Circle& c){
	string name;
	
	cout << "반지름 >> ";
	ins >> c.radius;
	cout << "이름 >> ";
	ins >> c.name;
	return ins;
}
ostream& operator << (ostream& outs, Circle c){
	outs << "(반지름" << c.radius << "인 " << c.name << ")";
	return outs;
}

int main(){
	Circle d, w;
	cin >> d >> w; // 반지름과 이름 입력 받음 
	cout << d << w << endl; // (반지름r인 이름) 객체 출력 
}
