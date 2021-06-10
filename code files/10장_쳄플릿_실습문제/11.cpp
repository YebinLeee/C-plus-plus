#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
	string title, author;
	int year;
public:
	Book(string t, string a, int y){
		title=t;author=a;year=y;
	}
	string getAuthor(){return author;}
	string getTitle(){return title;}
	int getYear(){return year;}
};

int main(){
	vector<Book> v;
	
	cout<<"�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�"<<endl;
	while(true){
		int year;
		string title, author;
		
		cout<<"�⵵>>";
		cin>>year;
		if(year==-1) break;
		cin.ignore(1, '\n');
		
		cout<<"å�̸�>>";
		getline(cin, title);
		cout<<"����>>";
		getline(cin, author);
		
		Book b(title, author, year);
		v.push_back(b);		
	}
	cin.ignore(1, '\n');
	cout<<"�� �԰�� å�� "<<v.size()<<"�� �Դϴ�."<<endl;
	
	string author;
	cout<<"�˻��ϰ��� �ϴ� �����̸��� �Է��ϼ���>>";
	getline(cin, author);
	
	for(int i=0;i<v.size();i++){
		if(author==v[i].getAuthor())
			cout<<v[i].getYear()<<"�⵵, "<<v[i].getTitle()<<", "<<v[i].getAuthor()<<endl;
	}
	
	int year;
	cout<<"�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin>>year;
	
	for(int i=0;i<v.size();i++){
		if(year==v[i].getYear())
			cout<<v[i].getYear()<<"�⵵, "<<v[i].getTitle()<<", "<<v[i].getAuthor()<<endl;
	}
} 
