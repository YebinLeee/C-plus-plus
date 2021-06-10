#include <iostream>
using namespace std;

class Converter{
protected:
	double ratio;
	virtual double convert(double src)=0; // src�� �ٸ� ������ ��ȯ 
	virtual string getSourceString()=0; // src ���� ��Ī 
	virtual string getDestString()=0; // dest ���� ��Ī
public:
	Converter(double ratio){this->ratio=ratio;}
	void run(){
		double src;
		cout<<getSourceString()<<"�� "<<getDestString()<<"�� �ٲߴϴ�. ";
		cout<<getSourceString()<<"�� �Է��ϼ���>> ";
		cin>>src;
		cout<<"��ȯ ��� : "<<convert(src)<<getDestString()<<endl; 
	}
};

class WonToDollar:public Converter{
public:
	WonToDollar(double ratio):Converter(ratio){};
	virtual double convert(double src){ // src�� �ٸ� ������ ��ȯ
		return src/ratio;}
	virtual string getSourceString(){ // src ���� ��Ī 
		return "��";
	}
	virtual string getDestString(){ // dest ���� ��Ī
		return "�޷�";
	}
};

class KmToMile:public Converter{
public:
	KmToMile(double ratio):Converter(ratio){};
	virtual double convert(double src){ // src�� �ٸ� ������ ��ȯ
		return src/ratio;}
	virtual string getSourceString(){ // src ���� ��Ī 
		return "Km";
	}
	virtual string getDestString(){ // dest ���� ��Ī
		return "Mile";
	}
};

int main(){
	KmToMile toMile(1.6093441010); // 1 mile = 1.609344 Km
	toMile.run();	 
}
