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
	bool operator== (Power op2){
		return (this->kick==op2.kick && this->punch==op2.punch);
	}
};
