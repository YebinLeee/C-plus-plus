#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	// ���� ���� �Լ�
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
public:
	KmToMile(double ratio) :Converter(ratio) {} //������

	// virtual Ű���� ���� ����	
	double convert(double src) { return (double)src / ratio; }// src�� �ٸ� ������ ��ȯ�Ѵ�.
	string getSourceString() { return "Km"; } // �ҽ� ���� ��Ī
	string getDestString() { return "Mile"; } // dest ���� ��Ī
};


int main() {
	KmToMile toMile(1.609344); // 1mile�� 1.609344 Km
	toMile.run();
}

