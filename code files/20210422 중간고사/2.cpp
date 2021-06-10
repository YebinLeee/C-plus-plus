#include <iostream>
using namespace std;

class Box {
	double length;
	double width;
	double height;
public:
	Box(double l = 1, double w = 1, double h = 1) {
		objectCount++;
		this->length = l;
		this->width = w;
		this->height = h;
	}
	static int objectCount;
	void show() {
		cout << "(����, �ʺ�, ����)�� (" << length << ", " << width << ", " << height << ")�̰� ���ǰ� " << getVolume() << "�� Box" << endl;
	}
	int getVolume() { return width * height * length; }
};

int Box::objectCount = 0;

Box getLargerBox(Box b1, Box b2) {
	if (b1.getVolume() > b2.getVolume())return b1;
	else return b2;
}

int main(void) {

	// main()�Լ��� ����� �������� ����, �̻��·� ä���� ����  

	Box box0;
	Box box1(4.0, 6.0, 3.0);
	Box box2(3.0, 5.0, 5.0);

	cout << "�ڽ��� �� " << Box::objectCount << "���� �����Ǿ����ϴ�." << endl;
	box0.show();
	box1.show();
	box2.show();
	cout << endl;

	cout << "�� �� �� ���ǰ� �� ū ���ڴ� " << endl;
	Box box3 = getLargerBox(box1, box2);
	box3.show();

}


/*

class Box {

	// ***** Box Ŭ���� ��� ���� ������ �ݵ�� �����ϵ��� �ۼ��ؾ� ��
	
Box getLargerBox(Box b1, Box b2) {
	//7. b1�� b2�� �� ū ������ ���ڸ� ��ȯ�ϴ� �����Լ� �ڵ� �ۼ�
}

int main(void) {

	// main()�Լ��� ����� �������� ����, �̻��·� ä���� ����

	Box box0;
	Box box1(4.0, 6.0, 3.0);
	Box box2(3.0, 5.0, 5.0);

	cout << "�ڽ��� �� " << Box::objectCount << "���� �����Ǿ����ϴ�." << endl;
	box0.show();
	box1.show();
	box2.show();
	cout << endl;

	cout << "�� �� �� ���ǰ� �� ū ���ڴ� " << endl;
	Box box3 = getLargerBox(box1, box2);
	box3.show();
	return 0;
}


*/