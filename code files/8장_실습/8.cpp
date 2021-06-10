#include <iostream>
using namespace std;

class Printer {
	string model, manufacturer;
	int printedCount, availablecount;
public:
	Printer() {};
	// 남은 종이
	void print(int pages) {

	}

};

class InkPrinter :public Printer {
private:
	int availableInk;
public:
	InkPrinter() {};
	// 남은 잉크
	void printInkJet(int pages) {

	}
};

class RaserPrinter :public Printer {
private:
	int availableToner;
public:
	RaserPrinter() {};
	// 남은 토너
	void printLaser(int pages) {

	}
};

int main() {
	c
}