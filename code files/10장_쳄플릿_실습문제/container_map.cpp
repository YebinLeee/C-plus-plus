#include <iostream>
#include <map>
using namespace std;

int main(){
	cout<<"map 컨테이너를 이용한 영한 사전 프로그램입니다."<<endl<<endl; 
	
	map<string, string> dic; // map 컨테이너 생성(키와 값 모두 string 문자열 객체)
	
	// 원소 저장 
	// insert() 멤버 함수 이용 - (love, 사랑) 쌍을 만들어 dic에 insert함 / [] 연산자 이용 
	dic.insert(make_pair("love", "사랑"));
	dic["apple"]="사과";

	string eng, kor;
	while(true){
		cout<<"사전에 추가하고 싶은 영어-한글을 입력하시오 (종료는 exit) >>"<<endl;
		getline(cin, eng);
		if(eng=="exit") break;
		getline(cin, kor);
		dic.insert(make_pair(eng, kor));
		cout<<"사전에 "<<eng<<" "<<kor<<"가 성공적으로 추가되었습니다"<<endl<<endl;
	}
	
	cout<<endl<<"사전에 저장된 단어 개수 : "<<dic.size()<<endl<<endl;
	cin.clear(); // 입력 버퍼 비우기 
	
	string get;
	
	while(true){
	 	cout<<"찾고 싶은 단어 (중료는 exit) >> ";
	 	getline(cin, get);
	 	if(get=="exit") break;
	
		// map에 key의 데이터가 있는지 검사하기 위해서는 end() 함수 이용
		if(dic.find(get) == dic.end())
		 	cout<<"dic에서 ["<<get<< "] 발견 못함"<<endl;
		else
			cout<<"dic["<<get<<"] = "<<dic[get]<<endl<<endl; 
	}
} 
