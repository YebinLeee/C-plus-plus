#include <iostream>
using namespace std;

class Printer{
protected:
	string model, manufacturer;
	int printedCount; // �μ� �ż�
	int availableCount; // �μ� ���� �ܷ�
public:
	Printer(string name, string manu, int pages){
		model=name;
		manufacturer=manu;
		availableCount=pages;
		printedCount=0;
	}
	void print(int pages){ // pages ���� ������ ��� �� 
		availableCount-=pages;
		printedCount+=pages;
	}
	string getName(){return model;}
	string getManu(){return manufacturer;}
	int getPages(){return availableCount;} // ���� �ܷ� �� 	
};

class InkJetPrinter:public Printer{
	int availableInk;
public:
	InkJetPrinter(string name, string manu, int pages, int ink):Printer(name, manu,pages){
		model=name;
		manufacturer=manu;
		availableCount=pages;
		availableInk=ink;
		printedCount=0;		
	}
	void printInkJet(int pages){
		availableInk-=pages; // ��ũ 
		availableCount-=pages; // �ż� 
		printedCount+=pages;
	}
	int getInk(){return availableInk;}
	void printInkJetPrinter(){
		cout<<"��ũ�� : "<<getName()<<", "<<getManu()<<", "<<"���� ���� "<<getPages()<<", ���� ��ũ: "<<getInk()<<endl;
	}
};

class LaserPrinter:public Printer{
	int availableToner;
public:
	LaserPrinter(string name, string manu, int pages, int toner):Printer(name, manu,pages){
		model=name;
		manufacturer=manu;
		availableCount=pages;
		availableToner=toner;		
	}
	void printLaser(int pages){
		availableToner-=pages; // ��� 
		availableCount-=pages; // �ż�
		printedCount+=pages; 
	}
	int getToner(){return availableToner;}
	void printLaserPrinter(){
		cout<<"������ : "<<getName()<<", "<<getManu()<<", "<<"���� ���� "<<getPages()<<", ���� ���: "<<getToner()<<endl;
	}
	
};

int main(){
	InkJetPrinter *Ink=new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter *Laser=new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	
	cout<<"���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����"<<endl;
	Ink->printInkJetPrinter();
	Laser->printLaserPrinter();
	
	char keep;
	do{
		int choice, n;
		cout<<endl<<endl<<"������(1: ��ũ��, 2:������)�� �ż� �Է�>> ";
		cin>>choice>>n;
		if(choice==1){
			if(n>Ink->getInk() || n>Ink->getPages()){
				cout<<"������ �����Ͽ� ����Ʈ�� �� �����ϴ�"<<endl;
			}
			else{
				Ink->printInkJet(n);
				cout<<n<<"�� ���������� ����Ʈ�Ͽ����ϴ�"<<endl; 
			}
		}
		else if(choice==2){
			if(n>Laser->getToner() || n>Laser->getPages()){
				cout<<"������ �����Ͽ� ����Ʈ�� �� �����ϴ�"<<endl;
			}
			else{
				Laser->printLaser(n);
				cout<<n<<"�� ���������� ����Ʈ�Ͽ����ϴ�"<<endl; 
			}
		}
		Ink->printInkJetPrinter();
		Laser->printLaserPrinter();	
		cout<<endl<<"��� ����Ʈ�Ͻðڽ��ϱ�(y/n)>>";
		cin>>keep;
	}while(keep=='y');
	
	delete []Ink;
	delete []Laser;
}
