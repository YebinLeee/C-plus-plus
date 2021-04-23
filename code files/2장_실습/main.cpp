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
	
	cout << "�� ���� �Է��϶� >>";
	cin >> n1 >> n2;

	cout << "ū �� = ";
	n1 > n2 ? cout << n1 : cout << n2;
	cout << endl;
}

void p4() {
	double arr[5] = { 0.0, };
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	double max = arr[0];
	for (int i = 0;i < 5;i++) {
		cin >> arr[i];
		if (arr[i] > max)max = arr[i];
	}

	cout << "���� ū �� = " << max << endl;
}

void p5() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	
	char str[100];
	cin.getline(str, 100); // ������ char �迭 �̿�
	
	int cnt = 0;
	for (int i = 0;str[i] !=NULL ;i++)
		if (str[i] == 'x') cnt++;

	cout << "x�� ������" << cnt << endl;
}
void p6() {
	string str1, str2;
	
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> str1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> str2;

	if (str1 == str2)
		cout << "�����ϴ�" << endl;
	else cout << "���� �ʽ��ϴ�" << endl;
}
void p7() {
	char str[50];
	
	while (1) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 50);
		if (strcmp(str, "yes") == 0) break;
	}
	cout << "�����մϴ�..." << endl;
}
void p8() {
	string name;
	string longName;
	int length = 0;

	cout << "5���� �̸��� '';' �� �����Ͽ� �Է��Ͻÿ�" << endl << ">> ";

	for (int i = 0;i < 5;i++) {
		getline(cin, name, ';'); // char name[100]; cin.getline(name, 100, ',');
		cout << i + 1 << " : " << name << endl;
		if (length < name.length()) {
			length = name.length(); // ���� �� �̸��� ���� 
				longName = name; // ���� �� �̸��� ���� 
		}
	}
}
void p9() {
	string name, address;
	int age;

	cout << "�̸���?";
	getline(cin, name);
	cout << "�ּҴ�?";
	getline(cin, address);
	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��" << endl;
}
void p10() {
	string str;
	cout << "���ڿ� �Է�>>";
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

	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	for (k = 1;k <= n;k++)
		sum += k;
	cout << "1���� " << n << "������ ���� " << sum << " �Դϴ�." << endl;
}

int sum(int, int);
void p12() {
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
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

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> choice;
		if (choice == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}
		if (choice < 1 || choice>4) {
			cout << "�ٽ� �ֹ��ϼ���!!"<<endl;
			continue;
		}

		switch (choice) {
		case 1:food = "«��";break;
		case 2:food = "¥��";break;
		case 3:food = "������";break;
		}

		cout << "���κ�?";
		cin >> num;

		cout << food << ' ' << num << "�κ� ���Խ��ϴ�" << endl;
	}
}

void p14() {
	char coffee[100];
	int num, price, total_price = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while (1) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0) {
			total_price += 2000 * num;
			price = 2000;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			total_price += 2300 * num;
			price = 2300;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			total_price += 2500 * num;
			price = 2500;
		}
		else {
			cout << "�ٽ� �Է��Ͻÿ�" << endl;
			continue;
		}
		cout << price * num << "���Դϴ�.���ְ� �弼��" << endl;

		if (total_price >= 20000) {
			cout << "���� " << total_price << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
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

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 1000������ �����մϴ�." << endl;

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
	cout << "�� ���ĺ� �� " << total_cnt << endl;

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
	
	// p.88-94 �ǽ� ���� #1-16
	
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