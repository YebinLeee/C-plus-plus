#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
	int get;
	map<string, int> dic;
	
	cout<<"***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****"<<endl;
	
	while(1){
		cout<<"입력:1, 조회:2, 종료:3 >> ";
		cin>>get;
		if(get==3) break;
		
		string name;
		int score;
		 
		switch(get){
			case 1:
				cout<<"이름과 점수>> ";
				cin>>name>>score;
				dic.insert(make_pair(name, score));
				break;
			case 2:
				cout<<"이름>> ";
				cin>>name;
				if(dic.find(name)==dic.end()) cout<<"없음"<<endl;
				else cout<<dic[name]<<endl;	
		}	
	}
	cout<<"프로그램을 종료합니다..."<<endl;
} 
