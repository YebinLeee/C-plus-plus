#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s) { this->coffee = c;this->water = w;this->sugar = s; }
	void drinkEspresso() { coffee--;water--; }
	void drinkAmericano() {	coffee--;water -= 2;}
	void drinkSugarCoffee() { coffee--;water -= 2;sugar--; }
	void show() { cout << "커피 머신 상태,  커피: " << coffee << "\t물: " << water << "\t설탕: " << sugar << endl; }
	void fill() { coffee += 10;water += 10;sugar += 10; }

};
int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}