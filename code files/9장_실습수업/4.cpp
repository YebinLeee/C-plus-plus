#include <iostream>
#include <string>
using namespace std;

class LoopAdder { // �߻� Ŭ����
	string name; // ������ �̸�
	int x, y, sum;
	void read(); // x, y ���� �о� ���̴� �Լ�
	void write(); // sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name="") { // ������ �̸��� �޴´�. �ʱ갪�� ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���鼭 ���� ���ϴ� �Լ�
public:
	void run(); // ������ �����ϴ� �Լ�
};

void LoopAdder::read() { // x, y �Է�
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() { // ��� sum ���
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read(); // x, y�� �д´�.
	sum = calculate(); // �������鼭 ����Ѵ�.
	write(); // ��� sum�� ����Ѵ�.
}

class WhileLoopAdder : public LoopAdder{
	int s=0;
public:
	WhileLoopAdder(string name):LoopAdder(name){}
	int calculate();
};

int WhileLoopAdder::calculate(){
	int i=getX();
	while(i<=getY()){
		s+=i++;
	}
	return s;
}

class DoWhileLoopAdder : public LoopAdder{
	int s=0;
public:
	DoWhileLoopAdder(string name):LoopAdder(name){}
	int calculate();
};

int DoWhileLoopAdder::calculate(){
	int i=getX();
	do{
		s+=i++;
	}while(i<=getY());
	return s;
}

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}





