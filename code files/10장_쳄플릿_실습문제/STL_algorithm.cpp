#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v;
	vector<int>::iterator it;
	int n, tmp;
	
	cout<<"정수 벡터 몇 개? >> ";
	cin>>n;
	cout<<n<<"개의 정수 입력 >> ";
	for(int i=0;i<n;i++){
		cin>>tmp;
		v.push_back(tmp);
	}
	
	// v.begin() 첫번째 원소와 v.end() 마지막 원소 사이의 값을 오름차순으로 정렬 
	sort(v.begin(), v.end());
	
	cout<<"정렬 후 >> ";
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<' ';
	cout<<endl;
}
