#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v;
	vector<int>::iterator it;
	int n, tmp;
	
	cout<<"���� ���� �� ��? >> ";
	cin>>n;
	cout<<n<<"���� ���� �Է� >> ";
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	
	// v.begin() ù��° ���ҿ� v.end() ������ ���� ������ ���� ������������ ���� 
	sort(v.begin(), v.end());
	
	cout<<"���� �� >> ";
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<' ';
	cout<<endl;
}
