#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0;a[i] != NULL;i++) // sieof(a)
	{
		if (a[i] == c) {
			success =true; // if(success= a[i]==c) return a[i];
			return a[i];
		}
	}
	// success = false; ���� ����


	/*
	while(a[i]) // NULL���� �ƴ� �� ����
	{
		if(a[i]==c){
			success=true;
			return a[i];
		}
	i++;
	}
	*/
}
int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b); // s[0]�� ���� loc�� �Բ� ����ϰ� �ִ�.
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm'; // 'M' ��ġ�� 'm' (a[i]) ���
	cout << s << endl; // "mike"�� ��µ�
}
