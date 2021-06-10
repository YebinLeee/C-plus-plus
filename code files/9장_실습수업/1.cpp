#include <iostream>
#include <string>
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

class WonToDollar : public Converter {
public:
	WonToDollar(int ratio) :Converter(ratio) {} //������

	// virtual Ű���� ���� ����	
	double convert(double src) { return (double)src / ratio; }// src�� �ٸ� ������ ��ȯ�Ѵ�.
	string getSourceString() { return "��"; } // �ҽ� ���� ��Ī
	string getDestString() { return "�޷�"; } // dest ���� ��Ī
};

int main() {
	WonToDollar wd(1010); // 1 �޷��� 1010��
	wd.run();
}

