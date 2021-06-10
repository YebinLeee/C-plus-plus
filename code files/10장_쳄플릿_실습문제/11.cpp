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
	
	cout<<"입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다"<<endl;
	while(true){
		int year;
		string title, author;
		
		cout<<"년도>>";
		cin>>year;
		if(year==-1) break;
		cin.ignore(1, '\n');
		
		cout<<"책이름>>";
		getline(cin, title);
		cout<<"저자>>";
		getline(cin, author);
		
		Book b(title, author, year);
		v.push_back(b);		
	}
	cin.ignore(1, '\n');
	cout<<"총 입고된 책은 "<<v.size()<<"권 입니다."<<endl;
	
	string author;
	cout<<"검색하고자 하는 저자이름을 입력하세요>>";
	getline(cin, author);
	
	for(int i=0;i<v.size();i++){
		if(author==v[i].getAuthor())
			cout<<v[i].getYear()<<"년도, "<<v[i].getTitle()<<", "<<v[i].getAuthor()<<endl;
	}
	
	int year;
	cout<<"검색하고자 하는 년도를 입력하세요>>";
	cin>>year;
	
	for(int i=0;i<v.size();i++){
		if(year==v[i].getYear())
			cout<<v[i].getYear()<<"년도, "<<v[i].getTitle()<<", "<<v[i].getAuthor()<<endl;
	}
} 
