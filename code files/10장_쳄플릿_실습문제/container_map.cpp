#include <iostream>
#include <map>
using namespace std;

int main(){
	cout<<"map �����̳ʸ� �̿��� ���� ���� ���α׷��Դϴ�."<<endl<<endl; 
	
	map<string, string> dic; // map �����̳� ����(Ű�� �� ��� string ���ڿ� ��ü)
	
	// ���� ���� 
	// insert() ��� �Լ� �̿� - (love, ���) ���� ����� dic�� insert�� / [] ������ �̿� 
	dic.insert(make_pair("love", "���"));
	dic["apple"]="���";

	string eng, kor;
	while(true){
		cout<<"������ �߰��ϰ� ���� ����-�ѱ��� �Է��Ͻÿ� (����� exit) >>"<<endl;
		getline(cin, eng);
		if(eng=="exit") break;
		getline(cin, kor);
		dic.insert(make_pair(eng, kor));
		cout<<"������ "<<eng<<" "<<kor<<"�� ���������� �߰��Ǿ����ϴ�"<<endl<<endl;
	}
	
	cout<<endl<<"������ ����� �ܾ� ���� : "<<dic.size()<<endl<<endl;
	cin.clear(); // �Է� ���� ���� 
	
	string get;
	
	while(true){
	 	cout<<"ã�� ���� �ܾ� (�߷�� exit) >> ";
	 	getline(cin, get);
	 	if(get=="exit") break;
	
		// map�� key�� �����Ͱ� �ִ��� �˻��ϱ� ���ؼ��� end() �Լ� �̿�
		if(dic.find(get) == dic.end())
		 	cout<<"dic���� ["<<get<< "] �߰� ����"<<endl;
		else
			cout<<"dic["<<get<<"] = "<<dic[get]<<endl<<endl; 
	}
} 
