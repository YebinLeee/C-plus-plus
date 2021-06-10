#include <iostream>
using namespace std;

class Phone{
	string name, telnum, address;
public:
	Phone(string name="", string telnum="", string address=""){
		this->name=name;
		this->telnum=telnum;
		this->address=address;
	}
	friend istream& operator >> (istream& ins, Phone& p);
	friend ostream& operator << (ostream& outs, Phone p);
};

istream& operator >> (istream& ins, Phone& p){
	cout<<"�̸�:";
	getline(ins, p.name);
	 
	cout<<"��ȭ��ȣ:";
	getline(ins, p.telnum);
	
	cout<<"�ּ�:";
	getline(ins, p.address);
	
	return ins;
}
ostream& operator << (ostream& outs, Phone p){
	outs << "(" << p.name << "," << p.telnum << "," << p.address << ")";
	return outs;
}
int main(){
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;	
} 
