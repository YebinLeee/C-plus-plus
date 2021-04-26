# C-plus-plus language 기본 문법 정리

>> 명품 C++ 프로그래밍 

<br>

## 클래스와 객체


1. 클래스(class): 객체를 정의하는 틀
> 멤버 변수(상태 - state) <br> 멤버 함수(행동 - behavior)

2. 객체(object): 클래스라는 틀에서 프로그램실행 도중 실존하는 실체(인스턴스-instance)
<br>

### 클래스 생성

1. 클래스 선언부(class declaration) : 클래스의 모양 정의

> class 키워드와 클래스 이름으로 선언 <br> 멤버 변수 선언 - 초기화 가능 <br> 멤버 함수의 원형 선언 - 리턴 타입, 매개 변수 리스트 포함


2. 클래스 구현부(class implementation) : 클래스의 멤버 함수 구현

> 클래스 선언부에 선언된 멤버 함수의 코드를 구현 <br> 범위지정연산자(::) 사용하여 클래스 이름과멤버 함수를 기술


```C++
// 클래스 선언부
class Circle {
public:				// 멤버에 대한 접근 지정자 public
	int radius;		// 멤버 변수
	double getArea();	// 매개 변수가 없는 멤버 함수
   	void setArea(int r); // 매개 변수가 있는 멤버 함수
};

// 클래스 구현부
double Circle::getArea() { return 3.14 * radius;radius; }
void Circle::setArea(int r){ radius=r; }
```
<br>

### 객체 생성

> 객체 생성: 클래스 이름 + 객체 이름 <br> 객체의 멤버 접근: 멤버 연산자 '.' 

```C++
int main(){
  Circle c;
  c.radius = 3;
}
```

<br>

### 생성자 (Constructor)


- 객체가 생성될 때 필요한 초기 작업 수행

> 변수의 값을 특정 값으로 설정하는 경우 <br> 메모리를 동적 할당 받을 때 <br> 파일을 열 때 <br> 네트워크를 연결 할 때


- 객체가 생성되는 시접에 오직 한 번만 자동으로 실행

- 생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 함

- 함수의 원형에 리턴 타입을 선언하지 않음

- 함수 실행 종료를 위해  return 문을 사용할 때에도, 값이 리턴되어서는 안됨 (return; 으로만 작성)

- 생성자는 중복 가능 => 매개변수나 타입이 서로 다르게 선언되어야 함
<br> 

<클래스 선언부 - 생성자 포함>
```C++
// 클래스 선언부
class Circle {
public:
	int radius;
	Circle(); // 기본 생성자
	Circle(int r); // 정수형 매개 변수를 전달 받는 생성자
	double getArea();
};
```
<br>

<클래스 구현부 - 생성자 포함>
```C++

// 클래스 구현부(생성자)
Circle::Circle() {
	radius = 1; // 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r; // 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}

// 클래스 구현부(멤버 함수)
double Circle::getArea() {
	return 3.14 * radius * radius;
}
```
<br>

<main함수 - 객체 생성과 생성자 실행>
```C++
int main()
{
	Circle donut; // 매개변수가 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출 -> 값 39이 r로 전달
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
```
<br>

### 위임 생성자 (delegating constructor)

> 객체의 초기화를 타겟 생성자에게 위임하는 생성자 <br> 객체의 생성 과정이 명료하고 단순해진다. <br> 타겟 생성자를 호출한뒤, 자신의 코드를 실행하게 된다.
<br>

```C++
// 위임 생성자
Circle::Circle() : Circle(1){ }

// 타겟 생성자
Circle::Circle(int r) {
	radius = r; // 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}
```
<br>


### 소멸자 (Destructor)

> 객체 소멸 시 자동으로 호출되는 클래스의 멤버 함수

- 객체가 사라질 때 필요한 마무리 작업

> 동적으로 할당 받은 메모리를 운영체제에게 돌려줄 때 <br> 열어 놓은 파일을 저장하고 닫는 경우 <br> 연결된 네트워크를 해제할 때
- 클래스 이름앞에 ~ 를 붙인다.

- 리턴 타입도 없으며, 어떤 값도 리턴해서는안 됨

- 소멸자는 오직 한 개만 존재, 매개변수도 가지지 않음

- 소멸자 선언이 없는 경우, 기본 소멸자(default destructor)가 자동으로 생성

```C++
class Circle {
public:
	int radius;
	Circle();
	Circle(int r); 
    ~Circle(); // 소멸자 선언
	double getArea();
};

...

// 소멸자 구현
Circle::~Circle(){
	cout << "반지름 " << radius << " 원 소멸" << endl;
}
```

>> 전역/지역 객체는 생성된 순서의 반대 순으로 소멸된다. <br> 지역 객체는 선언되어 있는 해당 함수가 종료될 때, 전역 객체는 프로그램 전체가 종료될 때 소멸된다.
<br>


### 멤버 접근 지정자 (access specifier)

- 목적: 객체 지향의 캡슐화 구현

1. private: 클래스 내의 멤버 함수들에게만 접근 허용(default 접근 지정)
> 클래스의 멤버 변수 - 외부에서 값을 변경하지 못하도록 보호. 생성자의 인수로 전달될 때 값 초기화 가능
2. public: 프로그램의 모든 함수의 접근 허용
> 생성자 - 클래스 외부에서 객체를 생성하기 위함 (자식 클래스에서만 생성자를 호출하도록 proteted로 선언하는 경우도 있음)
3. protected: 클래스 내의 멤버 함수와이클래스를 상속받는 파생 클래스의 멤버 함수에게만 접근 허용
<br>

### 인라인 함수 (inline function)

#### 클래스 멤버 함수의 인라인 선언(자동 인라인 함수)
- 생성자를 포함한 클래스의 모든 멤버 함수가 인라인으로 선언될 수 있다.

- 멤버 함수의 크기가 작은 경우, 클래스의 선언부에 직접 구현 가능 (인라인 선언 없어도 됨-컴파일러에 의해 인라인 자동 처리)

- 제약 사항: 재귀 함수(recursion). static 변수, 반복문, switch문, goto 문을 가진 함수는 인라인 함수로 허용하지 않음

```C++
// 클래스 선언부

class Circle {
public:
	int radius;

// 멤버 함수를 인라인으로 작성
	Circle() :Circle(1) {}; 
	Circle(int r) { // 생성자의 인라인 함수
		radius = r;
		cout << "반지름 " << radius << " 원 생성" << endl;
	};
	double getArea() {return 3.14*radius*radius}; // 코드의 길이가 짧은 멤버 함수
	~Circle() {};
};
```

<br>

### C++ 의 구조체

> C++ 프로그램의 구조체는 상속, 멤버, 접근 지정 클래스와  그 기능이 모두 같다. <br> 다른 한 가지는, 디폴트 접근 지정이 public이라는 점이다. <br> 다만 구조체의 객체를 생성할 때, struct 키워드를 생략한다.

<br>

### 헤더 파일과 cpp 파일 분리

- header 파일: 클래스 선언부 (중복 방지를 위해 조건 컴파일문 사용 - #ifndef, #define, #endif)

- cpp 파일: 클래스 구현부 (헤더파일 추가)

- main.cpp 파일: main 함수, 전역 변수 (헤더파일 추가)

