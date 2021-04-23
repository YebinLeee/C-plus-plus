/*
- ���ڸ� ��Ÿ���� Box Ŭ������ �����Ѵ�.

- Box Ŭ������ ������  ���� ��(width), ���� ��(length), ����(height), �׸��� �ڽ��� ��� �ִ��� �ƴ����� ���¸� ��Ÿ���� empty, �� 4���� ��������� ���´�.

- �����ڴ� �ΰ��� �ۼ��ϵ� �ζ������� �ۼ��Ѵ�. �⺻ �����ڴ� ��� ���̰��� 0.0����, empty�� true�� �ʱ�ȭ�Ѵ�. �ٸ� �����ڴ� 3���� �Ű�����(double)�� Box ��ü�� �� ���̰��� �ʱ�ȭ�ϰ�, empty�� true�� �ʱ�ȭ�Ѵ�.

- ������ �� ����(width, length, height)�� empty���� ��ȯ�ϴ� �� ���� �Լ��� �ۼ��ϵ�, �ζ��� �Լ��� �ۼ��Ѵ�.

- ������ �� ����(width, length, height)�� empty���� ���� �����ϴ� �� ���� �Լ��� �ۼ��ϵ�, �ζ��� �Լ��� �ۼ��Ѵ�.

- ���Ǹ� ����ؼ� ���ǰ��� ��ȯ�ϴ� getVolumn �Լ��� �ۼ��Ѵ�.
- ������ �� ���� ���̿� ���Ǹ� ����ϴ� print�Լ��� �ۼ��Ѵ�.

*/

#include <iostream>
using namespace std;

class Box {
private: // �� 4���� private ���� ��� ���� (���� ����)
	double width, length, height; // ������ ��� ����
	bool empty; // bool (true | false ) ������ ��� ����

	// �Լ��� �����ڸ� ��� �ζ��� �Լ��� �ۼ�
public:

	// �⺻ ������ (�ʱ�ȭ��)
	Box() {
		width = 0.0, length = 0.0, height = 0.0;
		empty = true;
	}
	
	// �Ű������� �ִ� ������
	Box(double width, double length, double height){
		this->width = width;
		this->length = length;
		this->height = height;
	}

	// ���� ���� ������ �� �ִ� �Լ�
	void setWidth(double w) { width = w; }
	void setLength(double l) { length = l; }
	void setHeight(double h) { height = h; }
	void setEmpty(bool e) { empty = e; }

	// ���� ��ȯ�� �� �ִ� �Լ�
	double getWidth() const{ return width; }
	double getLength() const{ return length; }
	double getHeight() const { return height; }
	bool getEmpty() const { return empty; }
	double getVolume() const { return width * length * height; };

	void print() {
		cout << "������ ����: " << getWidth() << endl;
		cout << "������ ����: " << getLength() << endl;
		cout << "������ ����: " << getHeight() << endl;
		cout << "������ ����: " << getVolume() << endl << endl;
		//main �Լ����� ����ϴ� �� �ڵ�� ����! cout << "���ڰ� ����ִ�? " << getEmpty() << endl << endl;
	}
}; 

int main() {
	cout << "���� #1" << endl;
	Box box1;
	box1.setWidth(10.0);
	box1.setLength(5.0);
	box1.setHeight(7.0);
	box1.setEmpty(false);
	box1.print();
	if (box1.getEmpty())
		cout << "���ڰ� ����ִ�? " << "Yes" << endl << endl;
	else
		cout << "���ڰ� ����ִ�? " << "No" << endl << endl;

	cout << "���� #2" << endl;
	Box box2{ 2.0, 3.0, 4.0 }; // ������ ȣ�� �Ҷ� (), {} ��� ����
	box2.print();
	if (box2.getEmpty())
		cout << "���ڰ� ����ִ�? " << "Yes" << endl << endl;
	else
		cout << "���ڰ� ����ִ�? " << "No" << endl << endl;

	return 0;
}
