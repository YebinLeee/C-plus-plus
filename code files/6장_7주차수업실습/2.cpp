#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	//Person();
	//Person(int id, string name);
	Person(int id, string name, double weight);
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

// 생성자 중복 작성
/*
Person::Person() {
	id = 1;
	weight = 20.5;
	name = "Grace";
}
Person::Person(int id, string name) {
	this->id = id;
	this->name = name;
	weight = 20.5;
}
Person::Person(int id, string name, double weight) {
	this->id = id;
	this->weight = weight;
	this->name = name;
}
*/

// 디폴트 값으로 설정
Person::Person(int id = 1, string name = "Grace", double weight = 20.5){
	this->id = id;
	this->weight = weight;
	this->name = name;
}
int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
