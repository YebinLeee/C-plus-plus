#include <iostream>
using namespace std;

// 추상 클래스 
class LoopAdder{
	string name;
	int x,y,sum;
	void read(); // x, y를 읽어들임
	void write(); // sum을 출력
protected:
	LoopAdder(string name=""){this->name=name;} 
	int getX(){return x;} int getY(){return y;}
	virtual int calculate()=0; // 순수 가상 함수 - 루프를 돌며 합을 구하는 함수
public:
	void run(); 
};

void LoopAdder::read(){
	cout<<name<<":"<<endl;
	cout<<"처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin>>x>>y;
}
void LoopAdder::write(){cout<<x<<"에서 "<<y<<"까지의 합 = "<<sum<<" 입니다"<<endl<<endl;}
void LoopAdder::run(){
	read(); // x, y를 읽음
	sum=calculate(); // 루프 돌며 게산
	write(); // 결과 sum 출력	
} 

class ForLoopAdder:public LoopAdder{
public:
	ForLoopAdder(string name=""):LoopAdder(name){};
	int calculate(){
		int sum=0;
		for(int i=getX();i<=getY();i++) sum+=i;
		return sum;
	}
};

class WhileLoopAdder:public LoopAdder{
public:
	WhileLoopAdder(string name=""):LoopAdder(name){};
	int calculate(){
		int i=getX(), sum=0;
		while(i<=getY()){
			sum+=i++;
		}
		return sum;
	}
};

class DoWhileLoopAdder:public LoopAdder{
public:
	DoWhileLoopAdder(string name=""):LoopAdder(name){};
	int calculate(){
		int i=getX(), sum=0;
		do{
			sum+=i++;
		}while(i<=getY());
		return sum;
	}
};

int main(){
	ForLoopAdder forLoop("For Loop"); 
	forLoop.run();
	
	WhileLoopAdder whileLoop("While Loop");
	whileLoop.run();
	
	DoWhileLoopAdder doWhileLoop("Do While Loop");
	doWhileLoop.run();
	
}
