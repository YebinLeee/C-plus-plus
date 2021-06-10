#include <iostream>
using namespace std;

// src에서 minus에 들어있는 같은 정수를 모두 삭제한 새로운 배열을 동적으로 할당하여 리턴 
template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int &retSize){
	retSize=0;
	int i,j;
	T *p=new T[sizeSrc];
	
	for(i=0;i<sizeSrc;i++){
		for(j=0;j<sizeMinus;j++)
			if(src[i]==minus[j]) break;
		// j가 마지막 값까지 도달하면 (minus 배열이 끝까지 실행된 경우) src[i]와 동일한 요소가 발견되지 않았다는 뜻 
		if(j==sizeMinus)
			p[retSize++]=src[i];
	} 
	return p;
}	

int main() {
	// remove() 함수를 int로 구체화하는 경우
	cout << "정수 배열 {1,2,3,4}에서 정수 배열 {-3,5,10,1,2,3}을 뺍니다" << endl;

	int x[]={1,2,3,4};
	int y[]={-3,5,10,1,2,3};
	int retSize;

	int* p = remove(x, 4, y, 6, retSize);
	if(retSize == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
		return 0;
	}
	else {
		cout<<"새로 생성된 배열 : { "; 
		for(int i=0; i<retSize; i++) 
			cout << p[i] << ' ';
		cout << "}"<<endl;

		delete [] p; // 할당받은 배열 반환
	}
	cout << endl;


	// remove() 함수를 double로 구체화하는 경우
	cout << "실수 배열 {1.0, 2.0, 3.2, 4.8, 5.0, 6.0, 7.0, 99.9}에서 " << endl; 
	cout << "실수 배열 {3.5, 4.8, 1.0, 2.0, 3.0}을 뺍니다" << endl;

	double x2[]={1.0, 2.0, 3.2, 4.8, 5.0, 6.0, 7.0, 99.9};
	double y2[]={3.5, 4.8, 1.0, 2.0, 3.0};

	double* q = remove(x2, 8, y2, 5, retSize);
	if(retSize == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
	}
	else {
		cout<<"새로 생성된 배열 : { "; 
		for(int i=0; i<retSize; i++) 
			cout << q[i] << ' ';
		cout << "}"<<endl;

		delete [] q; // 할당받은 배열 반환
	}
}

