#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Player Ŭ����

class Player {
	string name;
public:
	// �̸� �Է� �޾� �����ϴ� setName�Լ�
	void setName(string name) { this->name = name; }
	string getName() { return name; } // �̸� ��ȯ
};

// GamblingGame Ŭ����

class GamblingGame{
	// ���� �� �� ��ü �������� �Ҵ� �ޱ�
	Player* p = new Player[2];
public:
	GamblingGame() {
		cout << "***** ���� ������ �����մϴ�. *****" << endl;
		srand((unsigned)time(NULL));
	}

	// player �̸� �ޱ�
	void nameSet() {
		string name;	
		cout << "ù��° ���� �̸�>>";
		cin >> name;
		p[0].setName(name);
		cout << "�ι�° ���� �̸�>>";
		cin >> name;
		p[1].setName(name);
	};
	

	// 3���� (0~2) ������ ���� ����
	string getRandom(string ask) {
		int num[3];
		cout << endl<<"\t\t";
		for (int i = 0;i < 3;i++) {
			num[i] = rand() % 3;
			cout << num[i] << '\t';
		}
		if (num[0] == num[1] && num[1] == num[2]) {
			ask += "�� �¸�!\n";
			return ask;
		}
		else return "�ƽ�����!\n";
	};

	// 3�� ������ ��� ������ üũ�ϴ� �Լ�
	void startGame() {
		string response;
		int i = 0;
		while (true) {
			cout << p[i % 2].getName() << ":<Enter>";
			getline(cin, response, '\n');
			string n = p[i % 2].getName();
			response = getRandom(n);
			if (response == n) {
				cout << n + response;
				break;
			}
			else cout << response << endl;
			i++;
		}
	};

	// ���� �Ҵ� ���� p ��ȯ
	~GamblingGame() { delete[]p; }
};
int main() {
	GamblingGame gameStart;
	gameStart.nameSet();
	gameStart.startGame();
}