#include <iostream>
using namespace std;

// �� ���������� ù��° �Ű������� �迭�� �����ؾ��� (tmp ������ �����ͷ� ��üȭ�Ǿ�� �ȵǱ� ������) 
template <class T>
void reverseArray(T arr[], int n){
	for(int i=0;i<n/2;i++){
		T tmp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=tmp;
	}
}

int main() {
	int x[] = {1, 10, 100, 5, 4}; // 5/2=2 , 0(i)<->4(n-i-1)
	reverseArray(x, 5);
	for(int i=0; i<5; i++)
		cout << x[i] << ' ';
	cout << endl;

	int y[] = {-1, -10, -100, -1000};
	reverseArray(y, 4);
	for(int i=0; i<4; i++)
		cout << y[i] << ' ';
	cout << endl;
}

