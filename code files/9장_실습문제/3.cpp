#include <iostream>
using namespace std;

// �߻� Ŭ���� 
class LoopAdder{
	string name;
	int x,y,sum;
	void read(); // x, y�� �о����
	void write(); // sum�� ���
protected:
	LoopAdder(string name=""){this->name=name;} 
	int getX(){return x;} int getY(){return y;}
	virtual int calculate()=0; // ���� ���� �Լ� - ������ ���� ���� ���ϴ� �Լ�
public:
	void run(); 
};

void LoopAdder::read(){
	cout<<name<<":"<<endl;
	cout<<"ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin>>x>>y;
}
void LoopAdder::write(){cout<<x<<"���� "<<y<<"������ �� = "<<sum<<" �Դϴ�"<<endl<<endl;}
void LoopAdder::run(){
	read(); // x, y�� ����
	sum=calculate(); // ���� ���� �Ի�
	write(); // ��� sum ���	
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
