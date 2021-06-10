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
	bool operator !(){ return (kick==0 && punch==0);}
	int getKick(){return this->kick;}
	int getPunch(){return this->punch;}
};

int main(){
	Power a(0,0), b(0,1);
	
	if(!a) cout<<"a의 파워가 0이다."<<endl;
	else cout<<"a의 파워가 0이 아니다."<<endl;
	if(!b) cout<<"b의 파워가 0이다."<<endl;
	else cout<<"b의 파워가 0이 아니다."<<endl;
}
