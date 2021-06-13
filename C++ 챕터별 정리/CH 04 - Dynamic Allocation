# 동적 메모리 사용 

<br>

### 객체 포인터

객체에 대한 포인터 변수를 통해 멤버 변수를 읽고 값을 쓰고, 멤버 함수를 호출할 수 있다. <br>
> 1. 객체에 대한 포인터 변수 선언 <br> 2. 객체 주소 지정과 객체 멤버 접근


주소 & 연산자를 이용해 포인터 변수에 객체의 주소를 저장한다. <br>
객체 이름으로 멤버를 접근할 때에는 연산자를 사용하지만, 객체 포인터로 멤버를 접근할 때 -> 연산자를 사용한다.

``` C++
class Circle {
	int radius;
public:
	Circle() :Circle(1){} // 기본 생성자
	Circle(int r) { this->radius = r; } // 정수 매개변수를 갖고 있는 생성자
	void setRadius(int r) {	this->radius = r;} // 반지름 값 설정
	int getRadius() { return this->radius; } // 반지름 값 반환
    	double getArea() { return 3.14 * radius * radius; } // 면적 반환
};

int main(){

	Circle donut; // 객체 생성
	double d = donut.getArea(); // 일반 변수를 이용한 멤버 함수 접근


	Circle* p = &donut; // 포인터 변수 선언과 객체 주소로 초기화
    
	d = p->getArea(); // 포인터를 이용한 객체 멤버 접근
    	// d = (*p).getArea();
}
```

<br>

### 객체 배열

1. 객체 배열 선언

객체 배열이 선언되면, 선언한 배열 크기만큼 객체들이 생성된다. 생성자가 선언되어 있지 않은 경우, 각 객체에 대하여 기본 생성자가 호출된다.

``` C++
Circle circleArray[3]; // 객체 배열 생성
```

<br>

2. 객체 배열 사용

객체의 멤버 함수를 호출할 때 점 (.) 연산자를 사용하여 멤버에 접근하도록 한다. <br>
인덱스 번호를 이용하여 반복하여 배열의 원소들을 다룰 수 있다.


``` C++
// 1. 배열의 각 원소 객체의 멤버 접근
circleArray[0].setRadius(1);
circleArray[1].setRadius(2);
circleArray[2].setRadius(3);

// 2. 객체 포인터로 배열에 접근
Circle* p = circleArray; // 객체 포인터 생성하여 배열의 첫번째 원소 대입
for (int i = 0;i < 3;i++)
	cout << (p++)->getArea() << endl; // p[i].getArea()
	
// 다른 여러가지 방법

    // 객체 배열의 이름 사용
    for (int i = 0;i < 3;i++)
        cout << circleArray[i].getArea() << endl;

    // 객체 배열 포인터 이름 사용
    for (int i = 0;i < 3;i++)
        cout << p[i].getArea() << endl;

    // 객체 배열 포인터를 이용한 값 참조 
    for (int i = 0;i < 3;i++)
        cout << (*p++).getArea() << endl;

    // 객체 배열 포인터의 -> 연산자 사용
    for (int i = 0;i < 3;i++)
        cout << (p+i)->getArea() << endl;
		
```

<br>

3. 배열 소멸과 소멸자

함수가 종료되면 함수 내에 선언된 객체 배열이 소멸하며 모든 원소 객체가 소멸된다. <br>
원소 객체마다 소멸자가 호출되며, 높은 인덱스의 값부터 객체가 소멸된다.


<br>

### 객체 배열 초기화

객체 배열을 생성할 때 생성자를 사용하여 원소 객체를 초기화할 수 있다. <br>
배열 { } 안에서 호출할 생성자를 지정한다.


``` C++
// 객체 배열의 각 원소가 생성자를 호출한다.
Circle circleArray[3] = { Circle(1), Circle(2), Circle() };

Circle* p = circleArray;
for (int i = 0;i < 3;i++)
	cout << (*p++).getArea() << endl;
```


circleArray[0]가 생성될 때 Circle(10)이, circleArray[1]이 생성될 때 Circle(20)이, circleArray[2]가 생성될 때 Circle()이 호출된다.

(circleArray[2]는 기본 생성자를 호출하게 된다.)



<br>

### 다차원 객체 배열


다차원 객체 배열을 선언하게 되면, 1차원 배열과 마찬가지로 모든 객체 원소에 대해 기본 생성자가 호출된다. <br>
배열의 각 원소에 대해 다음과 같이 생성자를 호출하여 초기화할 수 있다.


```C++
Circle circleArray[2][3] =
{ {Circle(1), Circle(2), Circle(3)},
	{Circle(4), Circle(5), Circle()} };
	
 for (int i = 0;i < 2;i++)
	for (int j = 0;j < 3;j++) {
		cout << "Circle [" << i << "," << j << "]의 면적은 ";
		cout << circleArray[i][j].getArea() << endl;
	}
```

<br>

### 동적 메모리 사용

프로그램을 작성하는 과정에서 필요한 만큼 메모리를 할당 받고 사용이 끝난 메모리를 반환을 하는 것이 동적 할당 및 반환이다. <br>
C++ 에서는 new, delete 연산자 를 사용하여 동적으로 객체를 생성하여 사용하고 반환하게 된다.



기본 형식은 다음과 같다.

> data type *ptr = new data type; <br> delete ptr;

> 데이터 타입 *포인텨 변수 = new 데이터타입; <br> delete 포인터변수;

<br>

### 동적 메모리 할당과 반환 (new, delete 연산자)

``` C++
int* p = new int; // 힙으로부터 int 타입의 정수 공간 할당
if (!p) return; // 메모리 할당 실패

*p = 5; // 할당 받은 정수 공간에 5 기록
int n = *p;// 5가 저장되어 있는 공간에서 값 읽기 (n = 5)
cout << n << endl;
delete p; // 할당받은 메모리 반환
```

1. 동적 메모리 할당 (new)

- 힙(heap) 공간으로부터 메모리 할당 받는다.

데이터타입 *포인터 변수 = new 데이터타입;
<br>

2. 동적 메모리 반환 (delete)

- 할당받은 메모리를 힙으로 반환하여 동적 메모리를 초기화한다.

delete 포인터 변수;
<br>

3. 동적 메모리 초기화

- 데이터타입 *포인터 변수 =new 데이터타입(초깃값);

<br>

``` C++
int* p = new int(5); // int 형 메모리를 할당받아 해당 공간에 5를 초깃값으로 설정
char* c = new char('a'); // char 형 메모리를 할당받아 해당 공간에 'a'를 초깃값으로 설정
```

<br>

### 배열의 동적 메모리 사용

<br>

``` C++
	int* p = new int[5]; // 배열 동적 할당
	if (!p) {
		cout << "메모리 할당 오류" << endl; // 할당 실패
		return 0;
	}

	for (int i = 0;i < 5;i++) // 배열 원소에 값 저장
		p[i] = i; // (*p+i)=i;

	delete[]p; // 배열 메모리 반환
```
<br>

1. 배열 동적 할당 (new)

> 데이터타입 *포인터변수 = new 데이터타입[배열크기];

<br>

2. 배열 동적 메모리 공간 반환 (delete)

> delete [] 포인터변수;
<br>


3. 배열 초기화

- new로 배열을 동적 할당받을 때 초깂값을 지정하고자 할 때는 다음과 같은 방법으로 할 수 있다.

- 배열의 각 요소에 대하여 값을 지정해주어야 한다.

<br>

```C++
int* p = new int[] {1, 2, 3, 4, 5}; // 초기화된 정수 배열 생성
if (!p) {
	cout << "메모리 할당 오류" << endl;
	return 0;
}

for (int i = 0;i < 5;i++) // 배열 원소에 값 저장
cout << p[i] << endl;

delete[]p; // 배열 메모리 반환

```
<br>

### 객체, 객체 배열의 동적 할당

<객체>



1. 객체의 동적 생성 (new)


> 클래스이름 *포인터변수 = new 클래스이름; <br> 클래스이름 *포인터변수 = new 클래스이름(생성자매개변수리스트);

- 클래스 크기의 메모리를 할당 받아 객체를 생성하여 생성자를 호출하고, 포인터 변수에 해당 주소를 대입한다.

- 매개 변수가 없는 경우 기본 생성자가 호출된다.

<br>

2. 객체의 동적 메모리 반환 (delete)

> delete 포인터변수;

- 객체를 반환하기 직전에 객체의 소멸자가 실행된다.


``` C++ 
Circle* c = new Circle(); // 기본 생성자 호출
Circle* c1 = new Circle;
Circle* c2 = new Circle(20); // 생성자 Circle(2) 호출

delete c;
delete c1;
delete c2;
```


<br>

### this 포인터 (this-> 사용)
<br>

this는 객체 자신에 대한 포인터로, 클래스의 멤버 함수 내에서 사용된다.

객체의 멤버 함수가 호출될 때, 컴파일러에 의해 보이지 않게 전달되는 객체에 대한 주소이다. <br>



 다음과 같은 Sample 클래스가 있을 때,
 
 
 ``` C++
 class Sample {
	int a;
public:
	void setA(int x) { this->a = x; }
};

```

컴파일러는 Smaple 클래스를 컴파일 할 때, 다음과 같이 자기 자신에 대한 객체 포인터를 매개 변수로 묵시적으로 삽입한다.

이는 모든 멤버 함수들에 대해 이루어진다.

``` C++
class Sample {
	int a;
public:
	void setA(Sample* this, int x) { this->a = x; }
};
```



<br>

### this가 필요한 경우
<br>

1. 멤버 변수의 이름과 동일한 이름으로 매개변수 이름을 짓고자 하는 경우


아래의 예제에서는 두번째 생성자와 setRadius 함수가 정수형 변수 radius를 매개변수로 전달 받는다.

이 때, Circle 클래스의 멤버 변수인 radius와 매개 변수의 이름이 동일하므로,

멤버 변수를 알리기 위해 this 포인터를 사용하여 두 변수를 구분하였다.

``` C++
class Circle {
	int radius;
public:
	Circle() { this->radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) {	this->radius = radius;}
	int getRadius() { return this->radius; }
	double getArea() { return 3.14 * this->radius * this->radius; }
};
```


2. 객체 멤버 함수에서 객체 자신의 주소를 리턴할때



연산자 중복을 구현할 때 사용하게 된다.

``` C++
class Sample {
public:
	Sample* f{
		...
		return this; // 현재 객체의 주소 리턴
	}
};
```


this의 제약 조건



- 정적 멤버 함수(static member function)에서는 사용 불가능

- static 함수를 제외한 클래스의 니머지의 모든 멤버 함수에서 내부에서는 사용 가능



