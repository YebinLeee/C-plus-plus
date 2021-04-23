#include <iostream>
#include <istream>
#include <cstring>
#include <string>
using namespace std;

void p1() {
	int num = 1;
	
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++)
			cout << num++ << '\t';
		cout << endl;
	}
	cout << endl;
}
void p2() {
	for (int i = 1;i <= 9;i++) {
		for (int j = 1;j <= 9;j++)
			cout << j << 'x' << i << '=' << j * i << '\t';
		cout << endl;
	}
	cout << endl;
}
void p3() {
	int n1, n2;
	
	cout << "두 수를 입력하라 >>";
	cin >> n1 >> n2;

	cout << "큰 수 = ";
	n1 > n2 ? cout << n1 : cout << n2;
	cout << endl;
}

void p4() {
	double arr[5] = { 0.0, };
	cout << "5 개의 실수를 입력하라>>";
	double max = arr[0];
	for (int i = 0;i < 5;i++) {
		cin >> arr[i];
		if (arr[i] > max)max = arr[i];
	}

	cout << "제일 큰 수 = " << max << endl;
}

void p5() {
	cout << "문자들을 입력하라(100개 미만)." << endl;
	
	char str[100];
	cin.getline(str, 100); // 무조건 char 배열 이용
	
	int cnt = 0;
	for (int i = 0;str[i] !=NULL ;i++)
		if (str[i] == 'x') cnt++;

	cout << "x의 개수는" << cnt << endl;
}
void p6() {
	string str1, str2;
	
	cout << "새 암호를 입력하세요>>";
	cin >> str1;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> str2;

	if (str1 == str2)
		cout << "같습니다" << endl;
	else cout << "같지 않습니다" << endl;
}
void p7() {
	char str[50];
	
	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(str, 50);
		if (strcmp(str, "yes") == 0) break;
	}
	cout << "종료합니다..." << endl;
}
void p8() {
	string name;
	string longName;
	int length = 0;

	cout << "5명의 이름을 '';' 로 구분하여 입력하시오" << endl << ">> ";

	for (int i = 0;i < 5;i++) {
		getline(cin, name, ';'); // char name[100]; cin.getline(name, 100, ',');
		cout << i + 1 << " : " << name << endl;
		if (length < name.length()) {
			length = name.length(); // 가장 긴 이름의 길이 
				longName = name; // 가장 긴 이름을 저장 
		}
	}
}
void p9() {
	string name, address;
	int age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, address);
	cout << "나이는?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "세" << endl;
}
void p10() {
	string str;
	cout << "문자열 입력>>";
	cin >> str;

	for (int i = 0;i < str.length();i++) {
		for (int j = 0;j <= i;j++)
			cout << str[j];
		cout << endl;
	}
}
void p11() {
	int k, n = 0;
	int sum = 0;

	cout << "끝 수를 입력하세요>>";
	cin >> n;

	for (k = 1;k <= n;k++)
		sum += k;
	cout << "1에서 " << n << "까지의 합은 " << sum << " 입니다." << endl;
}

int sum(int, int);
void p12() {
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl;
}
int sum(int a, int b) {
	int k, res = 0;
	for (k = a;k <= b;k++)
		res += k;
	return res;
}

void p13() {
	int choice, num;
	string food;

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> choice;
		if (choice == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		if (choice < 1 || choice>4) {
			cout << "다시 주문하세요!!"<<endl;
			continue;
		}

		switch (choice) {
		case 1:food = "짬뽕";break;
		case 2:food = "짜장";break;
		case 3:food = "군만두";break;
		}

		cout << "몇인분?";
		cin >> num;

		cout << food << ' ' << num << "인분 나왔습니다" << endl;
	}
}

void p14() {
	char coffee[100];
	int num, price, total_price = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while (1) {
		cout << "주문>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0) {
			total_price += 2000 * num;
			price = 2000;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			total_price += 2300 * num;
			price = 2300;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			total_price += 2500 * num;
			price = 2500;
		}
		else {
			cout << "다시 입력하시오" << endl;
			continue;
		}
		cout << price * num << "원입니다.맛있게 드세요" << endl;

		if (total_price >= 20000) {
			cout << "오늘 " << total_price << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
			break;
		}
	}
}

void p15() {
	string line;
	int i = 0;
	int n1, n2;
	int result;
	char op, equal;

	while (1) {
		cout << "? ";
		cin >> n1 >> op >> n2 >> equal;

		switch (op) {
		case '+':result = n1 + n2;break;
		case '-':result = n1 - n2;break;
		case '*':result = n1 * n2;break;
		case '/':result = n1 / n2;break;
		case '%':result = n1 % n2;break;
		default:break;
		}

		cout << n1 << ' ' << op << ' ' << n2 << ' ' << "= " << result << endl;

	}
}

void p16() {
	char buf[1000];
	int alpha[27] = { 0, };
	int cnt, total_cnt = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 1000개까지 가능합니다." << endl;

	cin.getline(buf, 1000, ';');
	for (int i = 0;buf[i] != NULL;i++) {
		if (isalpha(buf[i])) {
			total_cnt++;
			if (isupper(buf[i]))
				buf[i] = tolower(buf[i]);
			cnt = 0;
			for (char ch = 'a';ch <= 'z';ch++) {
				if (buf[i] == ch) {
					alpha[cnt]++;
					break;
				}
				cnt++;
			}

		}
	}
	cout << "총 알파벳 수 " << total_cnt << endl;

	cnt = 0;
	for (char ch = 'a';ch <= 'z';ch++) {
		cout << ch << " (" << alpha[cnt] << ")\t: ";
		for (int i = 0;i < alpha[cnt];i++)
			cout << '*';
		cout << endl;
		cnt++;
	}
}
int main(void) {
	
	// p.88-94 실습 문제 #1-16
	
	/*p1();
	p2();
	p3();
	p4();
	*/
	//p5();
	//p6();
	//p7();
	//p8();
	//p9();
	//p10();
	//p11();
	//p12();
	//p13();
	//p14();
	//p15();
	p16();

	return 0;
}