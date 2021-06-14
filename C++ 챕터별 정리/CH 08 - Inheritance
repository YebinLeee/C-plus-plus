# 상속(Inheritance)

<br>

상속 - 자식 클래스의 객체가 생성될 때, 자신의 멤버 뿐 아니라 부모 클래스의 멤버를 포함할 것을 지시

- 기본 클래스(base class) : 부모 클래스

- 파생 클래스(derived class) : 자식 클래스

<br>

다중 상속(multiple inheritance) - 여러 개의 클래스를 동시에 상속받음

<hr>

### 상속의 목적과 장점

<br>

- 상속을 통해 코드의 중복 작성을 없애(클래스들 사이의 중복을 제거하여) 클래스를 간결하게 구현 가능하다.

- 어떤 코드에 오류가 있다면, 기본 클래스의 오류 부분만 수정하면 된다.

- 서로 관련된 클래스를 계층 관계로 표현함으로써, 클래스들의 구조적인 관계 파악을 쉽게 해주며 관리가 클래스/객체의 관리가 용이하다.

- 소프트웨어의 생산성을 향상한다 -> 기존에 작성해 놓은 클래스를 확장하여 새로운 소프트웨어를 빠른 시간 내에 만들어낼 수 있도록 한다.

<hr>


## 클래스 상속과 객체
<br>

### 상속 선언
class 선언 뒤에 콜론(:) 과 기본 클래스의 이름을 선언한다.

상속 접근 지정은 public, private, protected 중 하나로 지정한다.

상속을 통해 파생 클래스는 기본 클래스의 모든 멤버를 물려받는다. (상속 횟수는 제한 x)

<br>

```c++
// Person 기본 클래스를 상속받는 파생 클래스 Student(상속 접근지정: public)
class Student : public Person { ... };

// Student 기본 클래스를 상속받는 파생 클래스 StudentWorker(상속 접근지정: public)
clas StudentWorker : public Student { ... };
```


<br>

### 파생 클래스 객체 선언
<br>

아래는 좌표 위의 점(x,y)를 나타내는 클래스 Point와

Point 클래스를 상속 받아 컬러 점을 나타내는 ColorPoint 파생 클래스의 예제이다.



기본 클래스의 객체 p와 파생 클래스의 객체 cp가 생성되었다.

파생클래스의 객체인 cp는 Point의 멤버와 ColorPoint의 멤버를 모두 가지게 된다.
<br>

```C++
#include <iostream>
using namespace std;

class Point{
	int x,y;
public:
	void set(int x, int y){this->x=x;this->y=y;}
	void showPoint(){cout<<"("<<x<<","<<y<<")"<<endl;}
};

// ColorPoint: 파생클래스(derived class) / Point: 기본클래스(base class) 
class ColorPoint : public Point{
	string color;
public:
	void setColor(string color){this->color=color;}
	void showColorPoint(){
		cout << this->color << ':';
		showPoint(); // 기본 클래스 Point의 showPoint() 멤버 함수 호출 
	}
};

int main(){
	Point p; // 기본클래스 Point의 객체 p 생성
	ColorPoint cp; // 파생클래스 ColorPoint의 객체 cp 생성
	cp.set(3,4); // 기본 클래스의 set() 멤버 함수 호출 
	cp.setColor("Red"); // 파생 클래스의 setColor() 함수 호출 
	cp.showColorPoint(); // 파생클래스의 showColorPoint() 함수 호출 
}
```

<br>

### 파생 클래스에서 기본 클래스 멤버 접근


파생 클래스는 기본 클래스의 private 멤버 외에 모든 멤버를 접근할 수 있다.

private 멤버가 파생 클래스 객체가 생성될 때, 함께 상속되는 것은 맞지만 파생 클래스에서 접근할 수는 없다.

(이 때, 파생클래스의 멤버로만 접근할 수 있도록 허용하는 접근 지정자가 protected 이다.)

<br>

위 예제에서 파생 클래스 객체인 cp는 기본 클래스의 멤버 함수인 set() 에 접근하였다.

Point 기본 클래스의 private 멤버 변수인 x와 y에 직접적인 접근은 불가능하지만,

set() 함수를 통해서는 접근이 가능하다.


```C++
cp.set(3,4); // 기본 클래스의 set() 멤버 함수 호출 
```

<hr>

## 상속과 객체 포인터
파생 클래스의 객체를 기본 클래스의 포인터(업캐스팅)와 파생 클래스의 포인터(다운캐스팅)로 가리킬 수 있다.



<br>

### 1. 업 캐스팅(up-casting)


업캐스팅 - 기본 클래스의 포인터로 파생 클래스의 객체를 가리키는 것

<br>

다음은 파생 클래스의 객체 cp의 주소를 대입한 파생 클래스 포인터 pDer을,

기본 클래스 Point의 포인터 pBase에 대입하여 파생 클래스의 객체를 가리키도록 하는 예제이다.



파생 클래스의 포인터는 기본/파생 클래스의 멤버에 접근 가능하지만,

(업캐스팅된) 파생 클래스 객체를 가리키는 기본 클래스의 포인터로는 기본 클래스의 멤버에만 접근이 가능하다.

<br>

```C++
ColorPoint cp; // 파생 클래스 ColorPoint의 객체 cp
ColorPoint *pDer = &cp; // 파생 클래스 포인터
Point *pBase = pDer; // 업 캐스팅 : 기본 클래스 포인터에 파생 클래스 객체의 주소 대입
// Point *pBase = &cp; // 바로 파생클래스의 객체 주소 대입 가능


pDer->set(3,4); // 파생 클래스 포인터 -> 기본 클래스의 멤버 함수
pBase->showPoint(); // 기본 클래스 포인터(파생클래스객체주소) -> 파생클래스 멤버함수
pDer->setColor("Red"); // 파생 클래스 포인터 -> 파생클래스 멤버 함수

// 오류
// pBase->showColorPoint(); // 기본 클래스 포인터(파생클래스객체주소) -> 파생클래스 멤버함수
```

<br>


- 업캐스팅한 기본 클래스의 포인터로는 기본 클래스의 멤버만 접근할 수 있다.

- 업캐스팅시, 명시적 타입 변환이 필요 없다. 

```C++
Point *pBase = (Point*)pDer; // 업캐스팅. 명시적 형변환(Point*) 생략 가능
```


<br>

### 2. 다운 캐스팅(down-casting)


다운 캐스팅 - 기본 클래스 포인터가 가리키는 객체를 파생 클래스의 포인터로 가리키는 것



<br>

먼저 다음은 파생 클래스 객체 (cp)를 기본 클래스의 포인터(pBase)가 가리켰다가,

기본 클래스의 포인터(pBase)를 파생 클래스 형으로 강제적 형변환하여 파생 클래스의 포인터(pDer)에 대입하여

다운 캐스팅 하는 예이다.

본래 cp는 파생 클래스(ColorPoint)의 객체였으므로, 기본 클래스의 포인터를 다운캐스팅하여 파생 클래스 포인터가 이 cp 객체를 가리키도록 하는 것에는 문제가 없다.

<br>
  
  
  ```C++
  ColorPoint cp; // 파생 클래스 객체 cp
ColorPoint *pDer; // 파생 클래스 포인터 pDer
Point *pBase = &cp; // 업캐스팅

// 다운 캐스팅: 파생 클래스 객체를 가리키던 기본 클래스 포인터를 다시 형변환 하여 파생 클래스 포인터에 대입
pDer = (ColorPoint*)pBase; 

pDer -> setColor("Red"); // 파생 클래스의 멤버 접근 가능
pDer -> showColorPoint();
```

<br>

그러나 다음 다운캐스팅 사례에는 문제가 있다.

본래 기본 클래스의 객체 (po) 를 가리키던 포인터 (pBase)를

다운 캐스팅 하여 파생 클래스의 포인터(pDer) 에 기본 클래스 포인터(pBase)를 형변환하여 대입한 예이다.

기본 클래스의 객체였기 때문에, 다운캐스팅을 했다고 하더라도 파생 클래스의 멤버는 객체 공간에 존재하지 않는다.




<br>

```C++
ColorPoint *pDer; // 파생 클래스의 포인터 pDer
Point *pBase, po; // 기본 클래스의 포인터와 객체
pBase = &po; // 기본 클래스 포인터가 기본 클래스 객체 가리킴

// 다운 캐스팅 : 기본 클래스의 객체를 가리키던 기본클래스의 포인터를 다운 캐스팅 하여 파생 클래스의 포인터에 대입
pDer = (ColorPoint*) pBase;

// 실행오류!
// pDer -> setColor("Red"); // 파생 클래스의 멤버 접근 불가능!
// pDer -> showColorPoint(); // 불가능!
```


<hr>

## protected 접근 지정


상속을 받을 때, 클래스 선언 뒤에 콜론(:)과 함께 접근 지정자+기본 클래스를 작성하게 된다.

파생 클래스에서는 기본 클래스의 private 멤버를 제외하고는 모든 멤버에 접근이 가능하다.



<br>


- prviate 멤버: 멤버를 선언한 (기본)클래스에서만 접근 가능

- protected 멤버: 멤버를 선언한 (기본)클래스, 그리고 파생 클래스에서 접근 가능

- public 멤버: 멤버를 선언한 (기본)클래스, 파생 클래스, 그리고 다른 클래스나 외부 함수에서 모두 접근 가능





그 중에서도, protected 로 지정된 멤버는 파생클래스에게만 접근을 허용한다.


<hr>

<br>

## 상속과 생성자, 소멸자

<br>
### 파생 클래스 객체 생성 시, 생성자/소멸자 호출




### 생성자



- 파생 클래스 객체가 생성될 떄, 기본 클래스의 생성자가 먼저 실행되고, 파생 클래스의 생성자가 실행된다.

- 기본 클래스의 초기화가 가장 먼저 이루어지도록 하기 위해, 생성자의 코드를 컴파일 할 떄 기본 클래스의 생성자를 호출하는 코드를 삽입한다.


<br>



다음과 같이, 클래스 A를 상속 받는 클래스 B, 클래스 B를 상속받는 클래스 C가 있다고 하자.

C 클래스의 객체를 생성하면, C 클래스의 생성자가 호출되고,

상속받은 B 클래스에 대한 생성자를 다시 호출하고, 

클래스 B생성자는 상속받은 클래스 A의 생성자를 호출하여, 

A의 생성자를 실행 -> 다시 B의 생성자를 실행 -> 마지막으로 C의 생성자를 실행하게 된다.

<br>

```C++
class A {};
class B : public A {};
class C : public B {};
```


호출: C() -> B() -> A()

A() 생성자 -> B() 생성자 -> C() 생성자



<br>

### 소멸자

- 소멸자의 실행 순서는 생성자의 실행 순서와 반대로 실행된다. 파생 클래스의 소멸자부터 실행된다.


<br>


### 파생 클래스에서 기본 클래스 생성자 호출


### 1. 묵시적 선택

- 기본 생성자의 코드가 없는 경우, 파생 클래스에서 생성자가 호출되면, 묵시적으로 기본 클래스의 기본 생성자를 호출한다.

- 그러나, 매개 변수를 갖는 생성자 함수만 작성되어 다면, 컴파일 오류를 발생시킨다.

- 따라서, 매개 변수를 갖는 생성자 함수를 작성할 때는, 기본 생성자 함수도 꼭 작성하자.





### 2. 명시적으로 생성자 선택

- 파생 클래스의 생성자를 작성할 때, 기본 클래스의 생성자를 명시적으로 선택할 수 있다.

```C++
class A { ... };

class B : public A {
public:
	B() { ... };
    	B(int x) : A(x+3) { ... };
 }
 ```
 
 <br>
 <hr>
 <br>
 
 ## 상속의 종류 : public, protected, private 상속


기본 클래스로부터 상속 받을 때 지정한 접근 지정자에 따라, 파생 클래스의 멤버로 확장될 때의 접근 지정에 변화가 생긴다.



public 상속: 기본 클래스의 기존 멤버들에는 접근 지정 변경 없다.
protected 상속: 기본 클래스의 protected, public 멤버들이 모두 protected 접근 지정으로 변경되어 파생 클래스에 상속 확장된다.
private 상속: 기본 클래스의 모든 멤버들이 private 접근지정으로 변경되어 파생 클래스에 상속 확장된다.
** 접근 지정자를 생략하면, 디폴트 값으로 private 접근 지정 상속으로 처리된다.



** 중첩 상속 될 때, 상속받은 클래스를 다시 상속받을 때, 첫 base class가 어떠한 접근 지정으로 상속 받았는지를 잘 확인해보아야 한다.


<br>
<hr>
<br>

## 다중 상속 (Multiple Inheritance)


다중 상속 - 하나의 파생 클래스가 여러 클래스를 동시에 상속 받는 것

<br>

다음과 같이, 두 개 이상의 기본 클래스를 상속받을 때는,

클래스 선언문에서 접근지정과 함께 기본 클래스를 콤마(,)로 나열하면 된다.


```C++
class Adder { ... };
class Subtarctor { ... };

class Calculator : public Adder, public Subtractor { ... };
```


<br>
<hr><br>

## 가상 상속 (Virtual Inheritance)




다중 상속의 문제점: 기본 클래스의 멤버 중복 상속



여러 개의 클래스를 상속받는 다중 상속의 문제점은,

다음과 같이 하나의 기본 클래스를 상속 받은 두 클래스를 다중 상속 받는 파생 클래스에서,

기본 클래스의 멤버가 중복 상속되는 경우에 발생한다.


<br>


다음과 같이 BaseIO를 상속 받는 클래스 In 과 Out이 있고,

In과 Out을 다중 상속 받는 InOut 클래스가 있다고 하자.

InOut 클래스의 객체가 생성되면, BaseIO의 mode 멤버 변수를 상속 받는 In과 Out의 클래스로부터 상속받아

mode에 접근하게 될 때, 상속받은 mode에 대한 공간이 2개 생성되어 있으므로

중복된 멤버에 대한 접근에 모호한 문제가 발생한다.


<br>

```C++
class BaseIO{
public:
	int mode;
};

class In : public BaseIO{
public:
	int readPos;
}

class Out : public BaseIO{
public:
	int writePos;
}

class InOut : public In, public Out{ // 다중 상속
public:
	bool safe;
}
```

문제 해결 => 가상 상속

따라서 다중 상속에서 생기는 멤버 중복 생성 문제를 '가상 상속'을 통해 해결할 수 있다.

<br>

## 가상 상속
- 파생 클래스의 객체가 생성될 때, 기본 클래스의 멤버 공간을 오직 한 번만 할당하고, 이미 할당되어 있다면 그 공간을 공유하도록 컴파일러에게 지시하는 상속




<br>



### 가상 상속 선언

파생 클래스를 선언할 때 기본클래스 앞에 virtual 키워드를 이용해서 가상 상속을 선언하면 된다.



아래와 같이 virtual 키워드를 BaseIO 상속 선언 앞에 붙이면,

In과 Out은 가상 기본 클래스(virtual base class) BaseIO를 상속 받게 된다고 할 수 있다.

```C++
class In : vitual public BaseIO { ... } // BaseIO를 가상상속

class Out : virtual public BaseIO { ...} // BaseIO를 가상상속
```


virtual 키워드를 통해, 컴파일러에게 BaseIO 클래스의 멤버들을 오직 한 번만 할당하도록 지시한다.

InOut 객체가 생성될 때에는, BaseIO 클래스의 mode 변수에 대한 공간은 오직 하나만 할당되어 중복의 문제가 해결된다.




