#include <iostream>
using namespace std;

class Stack {
    int stack[10];
    int top;
public:
    Stack() { top = 0; }
    Stack& operator<< (int n) {
        stack[top] = n;
        top++;
        return *this;
    }
    bool operator! () {
        if (top)
            return false;
        return true; //top이 empty면 true 반환 
    }
    Stack operator>> (int& n) {
        n = stack[top - 1];
        top--;
        return *this;
    }
};
int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack)break; // empty
		int x;
		stack >> x; // pop
		cout << x<<' ';
	}
	cout << endl;
}