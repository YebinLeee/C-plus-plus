#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0){
		this->kick=kick;
		this->punch=punch;
	}
	Power operator + (Power op2){
		Power tmp;
		tmp.kick=this->kick+op2.kick;
		tmp.punch=this->punch+op2.punch;
		return tmp;
	}
};
