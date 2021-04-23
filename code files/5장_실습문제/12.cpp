#include <iostream>
#include <string>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		//cout << "�⺻ ������ ����" << endl;
		this->size = size;
		scores = new int[size];
	}
	/*
	Dept(const Dept& dept){
		//cout << "���� ������ ����" << endl;
		this->size = dept.size;
		this->scores = new int[dept.size];
		for (int i = 0;i < this->size;i++)
			scores[i] = dept.scores[i];
	}
	*/
	~Dept() {
		if (this->scores) {
			//cout << "���� �޸� ��ȯ" << endl;
			delete[]scores;
		}
	}
	int getSize() {
		//cout << this->size << "�� ������" << endl;
	return this->size;
	}
	void read() {
		cout << size << "�� ���� �Է� >> ";
		for (int i = 0;i < size;i++)
			cin >> scores[i];
	}
	bool isOver60(int index) {
		if (this->scores[index] > 60) {
			//cout << this->scores[index] << ' ' << endl;
			return true;
		}
		else {
			//cout << index<<"  :  "<<this->scores[index] << " under 60" << endl;
			return false;
		}
	}
};
int countPass(Dept &dept) {
	int count = 0;
	for (int i = 0;i < dept.getSize();i++)
		if (dept.isOver60(i)) count++;
	return count;
}

int main() {
	Dept com(10); // size�� 10 ����
	com.read(); // 10�� ������ �޾� scores�� ����
	int n = countPass(com);
	cout << "60�� �̻��� " << n << "��" << endl;
}