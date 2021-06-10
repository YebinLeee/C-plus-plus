#include <iostream>
#include <cctype>
using namespace std;


int main(){
	cout << "dec" << '\t' << "hexa" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hexa" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hexa" << '\t' << "char" << '\t';
	cout << "dec" << '\t' << "hexa" << '\t' << "char" << endl;
	cout << "___" << '\t' << "____" << '\t' << "____" << '\t';
	cout << "___" << '\t' << "____" << '\t' << "____" << '\t';
	cout << "___" << '\t' << "____" << '\t' << "____" << '\t';
	cout << "___" << '\t' << "____" << '\t' << "____" << endl;
	
	for (int i=0;i<128;i++){
		cout.width(3); // setw(3)
		cout<<left;
		cout<<dec<<i<<'\t'<<hex<<i<<'\t'<< (isprint(i)?(char)i:'.')<<'\t';
		if(i%4==3) cout<<endl;
		
	}


}
