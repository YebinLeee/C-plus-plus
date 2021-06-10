#include<iostream>
using namespace std;

class SortedArray {
    int size; // ���� �迭�� ũ�� 
    int* p; // ���� �迭�� ���� ������ 
    void sort(); // ���� �迭�� ������������ ���� 
public:
    SortedArray(); // p�� NULL�� size�� 0���� �ʱ�ȭ 
    SortedArray(SortedArray& src); // ���� ������ 
    SortedArray(int p[], int size); // ������. ���� �迭�� ũ�⸦ ���޹��� 
    ~SortedArray(); // �Ҹ��� 
    SortedArray operator+ (SortedArray& op2); // ���� �迭�� op2 �迭 �߰� 
    SortedArray& operator= (const SortedArray& op2); // ���� �迭�� op2 �迭 ���� 
    void show(); // �迭�� ���� ��� 
};

void SortedArray::show() {
    sort();
    cout << "�迭 ��� : ";
    for (int i = 0; i < size; i++) cout << p[i] << ' ';
    cout << endl;
}
SortedArray::SortedArray() {size = 0;p = NULL;}
SortedArray::SortedArray(int p[], int size) {
    this->p = new int[size];
    this->size = size;
    for (int i = 0; i < size; i++)
        this->p[i] = p[i];
}
SortedArray::SortedArray(SortedArray& src) {
    this->size = src.size;
    this->p = new int[this->size];
    for (int i = 0; i < this->size; i++)
        this->p[i] = src.p[i];
}
SortedArray& SortedArray::operator= (const SortedArray& op2) {
    delete[] p; //  delete
    this->size = op2.size;
    this->p = new int[this->size];
    for (int i = 0; i < this->size; i++)
        this->p[i] = op2.p[i];
    return *this;
}
SortedArray SortedArray::operator+ (SortedArray& op2) {
    SortedArray tmp;
    tmp.size = this->size + op2.size;
    tmp.p = new int[tmp.size];
    for (int i = 0; i < tmp.size; i++) {
        if (i < this->size)
            tmp.p[i] = this->p[i];
        else
            tmp.p[i] = op2.p[i - (tmp.size - op2.size)];
    }
    return tmp;
}
void SortedArray::sort() {
    int tmp;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (p[i] < p[j] || p[i] == p[j]);
            else {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}
SortedArray::~SortedArray() {if (p) delete[] p;}

int main() {
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b; // +, = ������ �ۼ� �ʿ�
    // + �����ڰ� SortedArray ��ü�� �����ϹǷ� ���� ������ �ʿ�

    a.show();
    b.show();
    c.show();
}
