#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v; // ���� ���� ����
	vector<int>::iterator it; // ���� v�� ���ҿ� ���� ������ it ����
	 
	// ���� ����
	for(int i=0;i<10;i++){
		v.push_back(i);
		cout<<v[i]<< ' ';
	}
	cout<<endl<<endl;
	
	cout<<"v.size() = "<<v.size()<<endl; // ������ ���� 
	cout<<"v.capacity() = "<<v.capacity()<<endl<<endl;  // ������ �뷮
	
	// �����͸� �̿��� ���� �� ����
	for(it=v.begin(); it!=v.end(); it++){
		int n=*it;
		n*=2;
		*it=n; // 2�� ���� ������ ���� 
	} 
	
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<' ';
	cout<<endl;
}
