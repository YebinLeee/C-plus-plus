#include <iostream>
using namespace std;

class Phone{
	string name;
	string telnum;
	string address;
public:
	Phone(string name="", string telmnum="", string address=""){
		this->name=name;
		this->telnum=telnum;
		this->address=address;
	}
	friend istream& operator >> (istream& ins, Phone& p);
	friend ostream& operator << (ostream& stream, Phone p);
};

istream& operator >> (istream& ins, Phone& p){
	cout<<"이름: ";
	getline(ins, p.name); 
		 
	cout<<"전화번호: ";
	getline(ins, p.telnum); 

	cout<<"주소: ";
	getline(ins, p.address); 
	
	return ins;
}

ostream& operator << (ostream& stream, Phone p){
	stream << "(" << p.name <<","<<p.telnum<<","<<p.address<<")";
	return stream;
}

int main(){
	Phone girl, boy;
	cin>>girl>>boy;
	cout<<girl<<endl<<boy<<endl;	
} 
