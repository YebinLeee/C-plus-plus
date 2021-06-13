# 객체의 참조

<br>


# 함수의 인자 전달 방식

<br>

### 1. 값에 의한 호출(call by value)

- 실인자 값이 함수의 매개 변수에 복사되어 전달되는 방식

- 매개 변수가 스택에 생성되고 실인자 값이 각 매개 변수에 복사되어 해당 함수가 종료되면 복사본은 사라지고 반환값만 호출한 곳에 대압

<br>

### 2. 주소에 의한 호출(call by address)

- 주소를 직접 포인터 타입의 매개 변수에 전달하는 방식

- 주소에 접근하므로 함수 내에서 실인자의 값을 변경 가능
<br>


### 3. 참조에 의한 호출(call by reference) 



<hr>

## 함수 호출 시 객체 전달


<br>

### 값에 의한 호출과 문제점(소멸자만 실행되는 비대칭 구조)



값에 의한 호출(call by value)로 객체를 전달할 때에는,

객체가 매개 변수에 복사되어 전달되고, 호출된 해당 함수가 종료하면 매개 변수 객체가 소멸된다.

실인자 객체의 크기가 크면 객체를 복사하는 시간이 커진다는 단점이 있다.



이 때, C++ 컴파일러는 매개 변수 객체의 생성자는 실행되지 않고 소멸자만 실행되도록 컴파일 한다.


<br>


### <매개 변수 객체의 생성자가 실행되지 않도록 컴파일 하는 이유>



함수의 매개 변수에 객체가 전달된 후, 생성자가 실행된다면

전달 받은 원본의 상태를 잃어버리게 되므로 매개 변수 객체의 생성자가 실행되지 않도록 한다.

대신, 

컴파일러는 매개 변수 객체의 생성자 대신 복사 생성자(copy structor)가 호출되도록 컴파일한다. 

복사 생성자가 작성되어 있지 않은 경우, 디폴트 복사 생성자를 자동으로 삽입한다.


<br>


## 복사 생성자

<br>

매개 변수 객체의 생성자가 실행되지 않고 소멸자만 실행되는 대칭 구조는,

함수 호출 시 원본 객체의 상태를 그대로 매개 변수 객체에 전달되도록 하기 위한 것이다.

이 문제점은 복사 생성자(copy structor)을 통해 해결하게 된다.

클래스에 복사 생성자가 작성되어 있지 않은 경우에는 실인자 객체의 멤버 변수를 1:!로 매개 변수 객체에 복사하는 디폴트 복사 생성자를 자동으로 삽입한다. (포인터 변수 값도 동일 => 문제점 발생)




<hr>

### 주소에 의한 호출



객체를 통째로 복사하여 넘기는 값에 의한 호출이 아닌,

객체의 주소만 전달하는 '주소에 의한 호출'(call by address).

<br>


호출하는 곳에서 객체의 주소를 인수로 전달하여,

호출되는 함수는 헤당 주소를 포인터 변수로 선언된 매개 변수로 받게 된다. 

객체의 주소가 전달되는 것이므로, 생성자나 소멸자와 상관이 없고 원본 함수에 있던 객체의 값을 변경 시킬 수 있다.

<br>



- 원본 객체 복사하는 시간 소모 X

- 생성자 소멸자의 비대칭 문제 X

- 원본 객체를 훼손할 가능성이 있음

<hr>


## 객체 치환 및 객체 리턴

<br>

## 객체 치환(assignment)

= 연산자 이용하여 새로운 객체에 원본 객체 대입

객체의 모든 데이터가 비트 단위로 복사된다. (동일한 클래스 타입에 대해서만 적용)

<br>

```C++
Circle c1(5);
Circle c2(30);
c1 = c2; // c1의 반지름은 30으로 변경
```

<br>

### 객체 리턴

생성된 복사본을 반환값으로 넘겨준다.

<br>

```C++
Circle getCircle(){
	Circle tmp(30);
    	return tmp;
}
```

<br>
<hr>

## 참조와 함수


### 참조(reference)



### 참조 변수(reference variable) - & 참조자 사용



- 이미 선언된 변수에 대한 별명(alias)

<br>

```C++
string s1("Hello"), s2("Hi"), s3("Ha");

// 참조 변수 선언(참조자 기호의 위치는 데이터 타입과 변수 사이 어느 곳이든 상관 없다.)
string& str1 = s1;
string &str2 = s2;
string & str3 = s3;
```
<br><br>

### 1. 참조 변수(reference variable)

<br>

### 참조 변수 선언

선언 시, 반드시 원본 변수로 초기화해주어야 한다.

선언된 참조 변수는 이름만 선언되며, 원본 변수와 같은 공간을 공유한다.

<br>
```C++
int n=2; // 원본 변수
int &refn = n; // 참조 변수 refn 선언., (refn과 n은 동일한 변수)

Circle circle; // 원본 객체
Circle &refn = circle; // 참조 변수 refc 선언. (refc와 circle은 동일한 객체)
```
refn과 refc는 별도의 변수 공간을 가지지 않으며, 각각 원본 변수/객체인 n과 circle의 공간을 공

<br>

### 참조 변수 사용



- 참조 변수를 이용한 값 변경
```C++
refn = 3; // refn=3, n=3
n = 5; // refn=5, n=5
refn++; // refn=6, n=6
```

<br>

- 참조 변수에 대한 포인터 생성

```C++
int *p = &refn;
*p = 20; // refn=20, n=20
```
n과 같은 공간을 공유하는 참조 변수 refn에 대한 포인터 p를 선언하였다.

p를 역참조하여 20의 값을 저장하였고, refn과 n 모두 그 값이 20으로 변경된다.

<br>

- 참조 변수에 대한 참조 선언 가능


```C++
int &r = refn; // r=refn=n
```
r, refn 모두 n과 같은 공간을 공유하며, 구분 없이 사용 가능하다.


<br><br>

### 2. 참조에 의한 호출(call by referecne)


### 참조 매개 변수(reference parameter)

함수의 매개 변수를 참조 타입으로 선언하여, 매개 변수가 함수를 호출하는 쪽의 실인자를 참조(refernece)하여

실인자와 공간을 공유하도록 하는 인자 전달 방식.

<br>




#### 참조 매개변수가 필요한 사례



다음 에시는 반환 리턴값에 따라 평균을 구하는 함수의 성공 여부를 판단하고,

avg 값을 참조 매개 변수로 선언하여 리턴하도록 작성한 프로그램이다.


<br>


```C++
#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if(size<=0) // 인수의 값에 오류가 발생한 경우
	{
		return false;
	}
	int sum = 0;
	for (int i = 0;i < size;i++) sum += a[i];
	avg = sum / size;
	return true;
}

int main() {
	int x[] = { 1,2,3,4,5,6,7,8,9,10 };
	int avg;
	if (average(x, 10, avg))
		cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl; // avg값이 의미 없는 경우

	if (average(x, -2, avg))
		cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;
}
```
<br>

### - 참조에 의한 호출의 장점

간단히 변수를 넘겨주기만 하면 되고, 함수 내에서도 참조 매개변수를 보통 변수처럼 사용하기 때문에 작성하기 쉽고 코드가 간결하다.


<br>


### 참조에 의한 호출로 객체 전달



1) 참조 매개 변수에대한 연산은 원본 객체에 대한 연산이다.

2) 이름만 생성되므로, 생성자와 소멸자는 실행되지 않는다,


<br>

### 3. 함수의 참조 리턴

<br>


정수, 문자, 실수 등의 기본 데이터 타입값과 포인터 주소 외에,

C++에서는 함수가 참조를 리턴할 수 있다. 변수 등과 같이 현존하는 '공간'에 대한 참조의 리턴이다.



함수가 참조를 리턴함으로써,

변수의 공간에 저장되어 있는 값을 함수 리턴 값에 변경할 수 있다.



<br>

```C++
// 배열 s의 index 원소 공간에 대한 '참조'를 리턴하는 함수
char& find(char s[], int index) {
	return s[index]; // 참조 리턴 (s[index] 에 대한 공간)
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] 을 S로 변경

	char& ref = find(name, 2); // ref은 name[2]에 대한 참조 변수
	ref = 't'; // 참조 변수 ref(name[2]를 't'로 변경)
	cout << name << endl; // name = "Site"
}
```

<hr>
<br>



## 복사 생성자(copy structor)

'복사'란 원본과 동일한 별개의 사본을 만드는 것이다.

복사 생성은 객체가 생성될 때, 원본 객체를 복사하여 생성되는 경우이다.


<br>

###객체 얕은 복사(shallow copy)의 문제점



문자열 배열에 대하여, 원본 객체와 복사된 객체가 같은 메모리를 공유하기 때문에,

사본 객체에서 문자열을 변경하면 원본 객체의 문자열도 변경되는 문제가 발생한다


<br>

### 1. 복사 생성자(copy structor) 선언

```C++
// 복사 생성자 선언
class Circle {
	...
	class(const Circle &c);
    	...
};

// 복사 생성자 구현
Circle::Circle(const Circle &c){...}
```
복사 생성자의 매개 변수는 오직 하나이며, 자기 클래스에 대한 참조로 선언된다.

클래스에서 오직 한 개만 선언 가능하다.



### 2. 복사 생성자 실행



복사 생성자는 치환 연산 '='을 통한 객체 복사가 실행되는 것이 아닌 '복사 생성'으로 실행된다.
<br>

```C++
Circle src(20); // Circle(int radius) 보통 생성자 호출

Circle src(dst); // src 객체를 복사하여 객체 생성: 복사 생성자 circle(Circle& c) 호출
```


위 예제에서 Circle(Circle &c) 이 호출되며, src 객체가 참조 매개변수 c로 전달되며

src 객체를 복사한 dst 객체가 생성된다.
<br>

### 얕은 복사(shallow copy) 생성자의 문제점
### 디폴트 복사 생성자(default copy structor)

<br>



컴파일러는 얕은 복사를 실행하게 되는 디폴트 복사 생성자 를 묵시적으로 삽입하고,

이 생성자를 호출하도록 컴파일한다.





아래의 예제는 Person 이라는 클래스의 구현부와 생성자와 소멸자를 구현부 내에 인라인 함수로 구현해 놓은 코드이다.


```C++
// 클래스
class Person {
	int id;
	char* name;

public:
	// 생성자
	Person(int id, char* name) {
		this->id = id;
		int len = strlen(name); // name의 문자 개수
		this->name = new char[len + 1]; // name 문자열 공간 할당
		strcpy(this->name, name);
	}

	// 소멸자
	~Person() {
		if (name) // name에 동적 할당된 배열이 있다면
			delete[]name; // 할당된 동적 메모리 반환
	}
};

```

<br>

컴파일러가 묵시적으로 삽입하는 복사 생성자는 다음과 같다.

참조 매개변수 p로 원본 객체의 id와 name 포인터를 사본 객체(this)에 복사한다.

복사 생성되는 객체의 name과 p 객체의 name은 그 값이 동일하다. (포인터 변수가 동일한 값을

```C++
// 복사 생성자
Person::Person(const Person& p) {
	this->id = p.id;
	this->name = p.name;
}
```

<br>


이러한 디폴트 복사 생성자의 문제점은,



- '포인터 멤버 변수'를 클래스가 가지고 있는 경우, 원본 객체의 포인터 멤버 변수가 사본 객체의 포인터 멤버 변수에 복사되면, 같은 메모리를 가리키게 되어 심각한 문제를 야기한다.

- 또한, main의 return 0; 문이 실행되며 복사 생성자가 먼저 소멸되고 나면, 포인터 변수를 멤버 변수로 가지고 있던 메모리도 힙에 반환하게 되면서, 원본 객체의 포인터 멤버 변수는 메모리를 상실하게 되어 오류를 발생시킨다.




<hr>

## 사용자 복사 생성자 작성 - 깊은 복사(deep copy) 생성자




아래 예제는 깊은 복사 생성자를 직접 작성하여

원본 객체를 복사한 객체의 포인터 변수를 변경하는 예제이다.

메모리의 동적 할당을 이용하여, 별도의 메모리 공간을 제공함으로써 같은 메모리를 가리키지 않도록 한다.

<br>
```C++
Person::Person(const Person& person) // 복사 생성자
{
	this->id = person.id; // id값 복사
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 : " << this->name << endl;
}
```

<br>


위의 예제에 대한 복사 생성자를 깊은 복사 생성자로 다시 작성하면 위와 같다.

포인터 변수에 대해서, 복사 생성자를 위한 새로운 메모리 공간을 할당함으로써

원본 객체와 같은 공간을 가리키지 않도록 하는 것이다.






<br>

전체 코드를 작성하여 출력하면 다음과 같다.

<br>






```C++
#include <iostream>
using namespace std;

class Person {
	char* name; // 포인터 멤버 변수
	int id;
public:
	Person(int id, const char* name); // 일반 생성자
	// 깊은 복사 생성자 작성
	Person(const Person& person); // 복사 생성자
	// 소멸자 
	~Person() {
		if (name) // 동적 할당 된 배열이 있다면
			delete[]name;
	}
	// 이름 변경
	void changeName(const char* name);

	void show(){ cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) // 일반 생성자
{
	this->id = id; // id값 복사
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name을 위한 동적 할당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::Person(const Person& person) // 복사 생성자
{
	this->id = person.id; // id값 복사
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 : " << this->name << endl;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return; // 현재 동적 할당된 메모리보다 긴 이름으로 변경 불가능
	strcpy(this->name, name);
}


int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ---- " << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ---- " << endl;
	father.show();
	daughter.show();

	return 0;
}
```

<hr>

<br>

### 묵시적 복사 생성


컴파일러가 복사 생성자를 자동으로 호출하는 경우

<br>

### 1. 객체를 초기화하여 객체가 생성될 때

```C++
Person son = father; // 복사 생성자 자동 호출

// Person son(father);
```
son 객체를 생성할 때 father 객체로 초기화

<br>


2. '값에 의한 호출'로 객체가 전달될 때



매개 변수 객체가 생성될 때 복사 생성자가 자동으로 호출된다.

생성자 대신 복사 생성자가 실행되고, 소멸자가 실행된다.

<br>

```C++
void f(Person person){ ... }
Person father(1, "Kitae");
f(father); // 값에 의한 호출로 father 객체 전달
```

<br>

### 
3. 함수가 객체를 리턴할 때

return을 이용해 함수가 객체를 반홚 라때, 리턴 객체의 복사본을 생성하여 호출한 곳으로 전달한다.













