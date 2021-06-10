#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v; // 정수 백터 생성
	vector<int>::iterator it; // 벡터 v의 원소에 대한 포인터 it 선언
	 
	// 정수 삽입
	for(int i=0;i<10;i++){
		v.push_back(i);
		cout<<v[i]<< ' ';
	}
	cout<<endl<<endl;
	
	cout<<"v.size() = "<<v.size()<<endl; // 원소의 개수 
	cout<<"v.capacity() = "<<v.capacity()<<endl<<endl;  // 벡터의 용량
	
	// 포인터를 이용한 원소 값 접근
	for(it=v.begin(); it!=v.end(); it++){
		int n=*it;
		n*=2;
		*it=n; // 2배 곱한 값으로 갱신 
	} 
	
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<' ';
	cout<<endl;
}
