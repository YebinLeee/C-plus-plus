#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<int> v;
	int cnt=0, n;
	
	while (1){
		int sum=0;
		cout<<"������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin>>n;
		if(n==0) break;
		v.push_back(n);
		cnt++;
		for(int i=0;i<cnt;i++){
			cout<<v[i]<<" ";
			sum+=v[i];
		}
		cout<<endl<<"��� = "<<(double)sum/cnt<<endl;
	}
}
