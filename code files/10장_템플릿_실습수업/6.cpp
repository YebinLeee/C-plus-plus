#include <iostream>
using namespace std;

// src���� minus�� ����ִ� ���� ������ ��� ������ ���ο� �迭�� �������� �Ҵ��Ͽ� ���� 
template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int &retSize){
	retSize=0;
	int i,j;
	T *p=new T[sizeSrc];
	
	for(i=0;i<sizeSrc;i++){
		for(j=0;j<sizeMinus;j++)
			if(src[i]==minus[j]) break;
		// j�� ������ ������ �����ϸ� (minus �迭�� ������ ����� ���) src[i]�� ������ ��Ұ� �߰ߵ��� �ʾҴٴ� �� 
		if(j==sizeMinus)
			p[retSize++]=src[i];
	} 
	return p;
}	

int main() {
	// remove() �Լ��� int�� ��üȭ�ϴ� ���
	cout << "���� �迭 {1,2,3,4}���� ���� �迭 {-3,5,10,1,2,3}�� ���ϴ�" << endl;

	int x[]={1,2,3,4};
	int y[]={-3,5,10,1,2,3};
	int retSize;

	int* p = remove(x, 4, y, 6, retSize);
	if(retSize == 0) {
		cout << "��� ���ŵǾ� �����ϴ� �迭�� �����ϴ�." << endl;
		return 0;
	}
	else {
		cout<<"���� ������ �迭 : { "; 
		for(int i=0; i<retSize; i++) 
			cout << p[i] << ' ';
		cout << "}"<<endl;

		delete [] p; // �Ҵ���� �迭 ��ȯ
	}
	cout << endl;


	// remove() �Լ��� double�� ��üȭ�ϴ� ���
	cout << "�Ǽ� �迭 {1.0, 2.0, 3.2, 4.8, 5.0, 6.0, 7.0, 99.9}���� " << endl; 
	cout << "�Ǽ� �迭 {3.5, 4.8, 1.0, 2.0, 3.0}�� ���ϴ�" << endl;

	double x2[]={1.0, 2.0, 3.2, 4.8, 5.0, 6.0, 7.0, 99.9};
	double y2[]={3.5, 4.8, 1.0, 2.0, 3.0};

	double* q = remove(x2, 8, y2, 5, retSize);
	if(retSize == 0) {
		cout << "��� ���ŵǾ� �����ϴ� �迭�� �����ϴ�." << endl;
	}
	else {
		cout<<"���� ������ �迭 : { "; 
		for(int i=0; i<retSize; i++) 
			cout << q[i] << ' ';
		cout << "}"<<endl;

		delete [] q; // �Ҵ���� �迭 ��ȯ
	}
}

