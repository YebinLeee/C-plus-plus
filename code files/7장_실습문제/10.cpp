#include <iostream>
using namespace std;

class Statistics{
	int *p; // �Ҵ���� �޸��� ���� �ּ� 
	int capacity; // �迭�� �Ҵ�� �޸� ���� ���� 
	int size; // �迭�� ����ִ� ��� ���� 
public:
	Statistics(int n=10){ // ������ �Լ� - �ʱ⿡ ���Ƿ� 10�� ���� �Ҵ� 
		capacity=n;
		size=0;
		p=new int[n]; // int �迭 ���� �Ҵ� 
	}
	~Statistics(){if(p) delete []p; }
	
	bool operator ! (){return (size==0);} // ������ ������ 0���� ��� true ��ȯ 
	int operator >>(int &avg){ // avg ���ϱ�(������ �ǿ������� ������ ������ �Ű�����) 
		int sum=0;
		for(int i=0;i<size;i++) sum+=p[i];
		avg = sum/size; // �ش� ������ sum/num ���� 
	}
	Statistics& operator << (int n){ // op�� ��ü�� ��ҷ� ���� 
		if(size==capacity){ // �̹� ����ִ� ����� ������ capacity�� �����ߴٸ� 
			capacity*=2; // capacity�� 2��� �ø� 
			int *q=new int[capacity]; // �ӽ� ������ q�� capacity��ŭ ���� �Ҵ� 
			for(int i=0;i<size;i++)
				q[i]=p[i]; // size���� q�� ���� p�� �ű⵵�� �Ѵ�. 
			p=q; // p�� �ּҸ� q�� �ּҷ� �ǹٲٰ� 
			delete []q; // �ӽ÷� ������� q�� ���ؼ��� ��� �޸� ���� 
		}
		p[size]=n; // ���ο� size���� ��� ����
		size++;
		
		return *this; // ���ο� �ڱ� �ڽ� ��ü ���� 
		
	}
	void operator ~ (){ // ���
		 for(int i=0;i<size;i++) cout<<p[i]<<' ';
		 cout<<endl;
	}
};

int main(){
	Statistics stat;
	if(!stat) cout<<"���� ��� �����Ͱ� �����ϴ�."<<endl;
	
	int x[5];
	cout<<"5�� ���� �Է� >> ";
	for(int i=0;i<5;i++) cin>>x[i];
	
	for(int i=0;i<5;i++) stat<<x[i]; // x�� ��� ��ü�� ����
	stat<<100<<200; // ��� ��ü�� ����
	~stat; // ��� ������ ��� ��� 
	
	int avg;
	stat>>avg; // ��� ��ü�κ��� ��� ����
	cout<<"avg = "<<avg<<endl; 
}
