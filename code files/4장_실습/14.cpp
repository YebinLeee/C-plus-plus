#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Player 클래스

class Player {
	string name;
public:
	// 이름 입력 받아 저장하는 setName함수
	void setName(string name) { this->name = name; }
	string getName() { return name; } // 이름 반환
};

// GamblingGame 클래스

class GamblingGame{
	// 선수 두 명 객체 동적으로 할당 받기
	Player* p = new Player[2];
public:
	GamblingGame() {
		cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
		srand((unsigned)time(NULL));
	}

	// player 이름 받기
	void nameSet() {
		string name;	
		cout << "첫번째 선수 이름>>";
		cin >> name;
		p[0].setName(name);
		cout << "두번째 선수 이름>>";
		cin >> name;
		p[1].setName(name);
	};
	

	// 3개의 (0~2) 사이의 난수 생성
	string getRandom(string ask) {
		int num[3];
		cout << endl<<"\t\t";
		for (int i = 0;i < 3;i++) {
			num[i] = rand() % 3;
			cout << num[i] << '\t';
		}
		if (num[0] == num[1] && num[1] == num[2]) {
			ask += "님 승리!\n";
			return ask;
		}
		else return "아쉽군요!\n";
	};

	// 3개 난수가 모두 같은지 체크하는 함수
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

	// 동적 할당 받은 p 반환
	~GamblingGame() { delete[]p; }
};
int main() {
	GamblingGame gameStart;
	gameStart.nameSet();
	gameStart.startGame();
}