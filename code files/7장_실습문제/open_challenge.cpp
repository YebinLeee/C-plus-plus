#include <iostream>
#include <ctype.h>
using namespace std;

class Histogram{
	string str;
public:
	Histogram(string str){ this->str=str;}
	Histogram& operator << (string s){
		str+=s;
		return *this;
	}
	Histogram& operator << (char c){
		str+=c;
		return *this;
	}
	void operator ! (){
		cout<<str<<endl<<endl;
		
		int alphaCnt=0;
		for(int i=0;i<str.size();i++){
			str[i]=tolower(str[i]);
			if(isalpha(str[i])) alphaCnt++;
		}
		cout<<"ÃÑ ¾ËÆÄºª ¼ö "<<alphaCnt<<endl;
		
		for(char ch='a';ch<='z';ch++){
			cout<<ch<<" : ";
			for(int i=0;i<str.size();i++)
				if (str[i]==ch) cout<<'*';
			cout<<endl;
		}
	}
};

int main(){
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you."<<"- by ";
	song<< 'k' << 'i' << 't';
	!song;
}
