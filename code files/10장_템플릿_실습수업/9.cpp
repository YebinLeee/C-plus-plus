#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<int> v;
	int cnt=0, n;
	
	while (1){
		int sum=0;
		cout<<"정수를 입력하세요(0을 입력하면 종료)>>";
		cin>>n;
		if(n==0) break;
		v.push_back(n);
		cnt++;
		for(int i=0;i<cnt;i++){
			cout<<v[i]<<" ";
			sum+=v[i];
		}
		cout<<endl<<"평균 = "<<(double)sum/cnt<<endl;
	}
}
