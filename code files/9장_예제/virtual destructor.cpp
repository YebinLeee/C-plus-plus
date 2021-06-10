#include <iostream> 
#include <string.h>
using namespace std;

class Person{
	int id;
public:
	Person(int id=0){this->id=id;}
	virtual ~Person(){cout<<"id="<<id<<endl;}
};

class Student:public Person{
	char*name;
public:
	Student(int id, const char*name):Person(id){
		int len=strlen(name);
		this->name=new char[len+1]; // 깊은 복사 생성자 
		strcpy(this->name,name);
	}
	~Student(){
		cout<<"name="<<name<<endl;
		delete []name;
	}
};

int main(){
	Person*p=new Student(10, "손연재"); // id=10, name="손연재"
	delete p; 
}

