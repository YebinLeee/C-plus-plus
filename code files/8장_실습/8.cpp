#include <iostream>
using namespace std;

class Printer {
	string model, manufacturer;
	int printedCount, availablecount;
public:
	Printer() {};
	// ���� ����
	void print(int pages) {

	}

};

class InkPrinter :public Printer {
private:
	int availableInk;
public:
	InkPrinter() {};
	// ���� ��ũ
	void printInkJet(int pages) {

	}
};

class RaserPrinter :public Printer {
private:
	int availableToner;
public:
	RaserPrinter() {};
	// ���� ���
	void printLaser(int pages) {

	}
};

int main() {
	c
}