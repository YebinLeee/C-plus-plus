#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h> 
using namespace std;

class Nation{
	string nation;
	string capital;
public:
	Nation(string n, string c){
		nation=n;capital=c;
	}
	string getNation(){return nation;}
	string getCapital(){return capital;}
};

int main(){
	Nation Kor("대한민국", "서울"), US("미국", "워싱턴"), Japan("일본", "도쿄");
	vector<Nation> v;
	v.push_back(Kor);
	v.push_back(US);
	v.push_back(Japan);
	
	cout<<"***** 나라의 수도 맞추기 게임을 시작합니다. *****"<<endl;
	
	while(true){
		int get;
		cout<<endl<<"정보 입력: 1, 퀴즈: 2, 전체 출력 : 3, 종료: 4 >> ";
		cin>>get;
		if(get==4) break;
		
		if(get==1){			
			cout<<"현재 "<<v.size()<<"개의 나라가 입력되어 있습니다."<<endl;
			cout<<"나라와 수도를 입력하세요(no no 이면 입력끝)"<<endl;
			cin.ignore(1, '\n');
			
			while(true){
				string nation,capital;
				int check=0;
				
				cout<<v.size()+1<<">>";
				getline(cin, nation, ' ');
				getline(cin, capital);
				if(nation=="no" && capital=="no") break;

				for(int i=0;i<v.size();i++){
					if(nation==v[i].getNation()){
						cout<<"already exists !!"<<endl;
						check=1;
						break;
					}
				}
				if(check==0){
					Nation p(nation, capital);
					v.push_back(p);
				}
			}
		}
		if(get==2){
			while(true){
				string capital;
				srand(time(NULL));
				int ran=rand()%v.size();
				
				cout<<v[ran].getNation()<<"의 수도는?(종료는 exit) >> ";
				cin>>capital;
				if(capital=="exit") break;
				
				if(capital==v[ran].getCapital()) cout<<"Correct !!"<<endl;
				else cout<<"NO !!"<<endl;
			}
		}
		if(get==3){
			for(int i=0;i<v.size();i++)
				cout<<i<<" : "<<v[i].getNation()<<" "<<v[i].getCapital()<<endl;
		}
	}
}
