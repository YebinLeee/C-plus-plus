#include <iostream>
using namespace std;

class Printer{
protected:
	string model, manufacturer;
	int printedCount; // 인쇄 매수
	int availableCount; // 인쇄 종이 잔량
public:
	Printer(string name, string manu, int pages){
		model=name;
		manufacturer=manu;
		availableCount=pages;
		printedCount=0;
	}
	void print(int pages){ // pages 매의 용지를 사용 턴 
		availableCount-=pages;
		printedCount+=pages;
	}
	string getName(){return model;}
	string getManu(){return manufacturer;}
	int getPages(){return availableCount;} // 남은 잔량 리 	
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
		availableInk-=pages; // 잉크 
		availableCount-=pages; // 매수 
		printedCount+=pages;
	}
	int getInk(){return availableInk;}
	void printInkJetPrinter(){
		cout<<"잉크젯 : "<<getName()<<", "<<getManu()<<", "<<"남은 종이 "<<getPages()<<", 남은 잉크: "<<getInk()<<endl;
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
		availableToner-=pages; // 토너 
		availableCount-=pages; // 매수
		printedCount+=pages; 
	}
	int getToner(){return availableToner;}
	void printLaserPrinter(){
		cout<<"레이저 : "<<getName()<<", "<<getManu()<<", "<<"남은 종이 "<<getPages()<<", 남은 토너: "<<getToner()<<endl;
	}
	
};

int main(){
	InkJetPrinter *Ink=new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter *Laser=new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	
	cout<<"현재 작동중인 2 대의 프린터는 아래와 같다"<<endl;
	Ink->printInkJetPrinter();
	Laser->printLaserPrinter();
	
	char keep;
	do{
		int choice, n;
		cout<<endl<<endl<<"프린터(1: 잉크젯, 2:레이저)와 매수 입력>> ";
		cin>>choice>>n;
		if(choice==1){
			if(n>Ink->getInk() || n>Ink->getPages()){
				cout<<"용지가 부족하여 프린트할 수 없습니다"<<endl;
			}
			else{
				Ink->printInkJet(n);
				cout<<n<<"장 성공적으로 프린트하였습니다"<<endl; 
			}
		}
		else if(choice==2){
			if(n>Laser->getToner() || n>Laser->getPages()){
				cout<<"용지가 부족하여 프린트할 수 없습니다"<<endl;
			}
			else{
				Laser->printLaser(n);
				cout<<n<<"장 성공적으로 프린트하였습니다"<<endl; 
			}
		}
		Ink->printInkJetPrinter();
		Laser->printLaserPrinter();	
		cout<<endl<<"계속 프린트하시겠습니까(y/n)>>";
		cin>>keep;
	}while(keep=='y');
	
	delete []Ink;
	delete []Laser;
}
