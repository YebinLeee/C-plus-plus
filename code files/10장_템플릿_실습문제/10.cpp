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
	Nation Kor("���ѹα�", "����"), US("�̱�", "������"), Japan("�Ϻ�", "����");
	vector<Nation> v;
	v.push_back(Kor);
	v.push_back(US);
	v.push_back(Japan);
	
	cout<<"***** ������ ���� ���߱� ������ �����մϴ�. *****"<<endl;
	
	while(true){
		int get;
		cout<<endl<<"���� �Է�: 1, ����: 2, ��ü ��� : 3, ����: 4 >> ";
		cin>>get;
		if(get==4) break;
		
		if(get==1){			
			cout<<"���� "<<v.size()<<"���� ���� �ԷµǾ� �ֽ��ϴ�."<<endl;
			cout<<"����� ������ �Է��ϼ���(no no �̸� �Է³�)"<<endl;
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
				
				cout<<v[ran].getNation()<<"�� ������?(����� exit) >> ";
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
