#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
	int get;
	map<string, int> dic;
	
	cout<<"***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****"<<endl;
	
	while(1){
		cout<<"�Է�:1, ��ȸ:2, ����:3 >> ";
		cin>>get;
		if(get==3) break;
		
		string name;
		int score;
		 
		switch(get){
			case 1:
				cout<<"�̸��� ����>> ";
				cin>>name>>score;
				dic.insert(make_pair(name, score));
				break;
			case 2:
				cout<<"�̸�>> ";
				cin>>name;
				if(dic.find(name)==dic.end()) cout<<"����"<<endl;
				else cout<<dic[name]<<endl;	
		}	
	}
	cout<<"���α׷��� �����մϴ�..."<<endl;
} 
