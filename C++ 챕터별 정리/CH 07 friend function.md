# 프렌드 함수 (Friend Function)




**friend 키워드** : 클래스 외부에 작성된 함수를 클래스 내에 선언하여, 클래스의 멤버함수와 동일한 접근 자격을 부여할 수 있도록 하는 키워드



**friend 함수** : 클래스 내에 friend 키워드로 선언된 외부의 함수

- 멤버 함수는 아니므로, 상속되지는 않음

- 클래스의 멤버인 것처럼 클래스의 모든 변수나 함수에 접근 가능

- 프렌드 함수 개수에는 제한이 없음


<br>

### 프렌드 함수가 왜 사용될까?

- 클래스의 멤버 함수로는 적합하지 안지만, 클래스의 private, protected 멤버를 접근해야 하는 특별한 경우

- 연산자 함수에서 대표적으로 사용됨

<br>


### 프렌드 함수를 선언하는 경우 3가지

1. 클래스 외부에 작성된 함수를 프렌드로 선언 - friend 키워드 사용

2. 다른 클래스의 멤버 함수를 프렌드로 선언 - friend 키워드와 함께 클래스 이름과 범위 지정 연산자 :: 이용

3. 다른 클래스의 모든 멤버 함수를 프렌드로 선언 - friend 키워드와 클래스 이름 (해당 클래스의 모든 멤버를 자유롭게 접근가능)

<br>

<hr>
<br>

## 프렌드 함수의 선언


- friend 키워드로 클래스의 아무 곳에서나 선언하면 됨




### 1. 외부에 선언된 전역 함수를 프렌드 함수로 선언

<br>

다음은 Rect 클래스에서 friend 키워드를 사용하여 외부에 선언된 equals 함수를 클래스 내부에서 선언한 예이다.

equals 함수는 두 Rect 객체의 width 와 height 를 각각 비교한 후, 두 객체가 동일한지 판별하는 함수이다.

클래스 멤버 함수로는 적합하지는 않으나, 클래스의 priavte 멤버로 선언된 width, height 변수에 접근해야 하므로 bools 함수를 friend 키워드를 이용하여 프렌드 함수로 선언하였다.

<br>


```C++
#include <iostream>
using namespace std;

class Rect; 			// 전방 선언(forward declaration)
bool equals(Rect r, Rect s); // 전방 참조(forward reference)

class Rect {
	int width, height;
public:
	Rect(int width, int height) {this->width = width; this->height = height;}
	friend bool equals(Rect r, Rect s); // euqlas 함수를 friend 함수로 선언
};

bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true; // 객체의 private 멤버에 접근
	else return false;
}

int main() {
	Rect a(3, 4);
	Rect b(3, 5);
	if (equals(a, b))cout << "equal" << endl;
	else cout << "not equal" << endl;
}
```

Rect 클래스의 객체 a와 b는 height가 다르므로, 결국 not equal이 출력된다.




<br>




### 전방 참조(Forward Reference), 전방 선언(Forward Declaration)

<br>

위의 예제에서, Rect 클래스에서는 뒤에서 선언된 equals 함수를 friend 함수로 선언한다.

전방 참조를 하게 되는 경우이므로, Rect 클래스 이전에 equals 함수에 대한 선언이 필요하다.

이 떄, equals는 Rect 객체를 매개 변수로 전달 받는 함수이므로 뒤에 선언된 Rect 클래스에 대한 전방 참조를 한 것과 같다.

따라서 이에 대해서도 Rect 클래스에 대한 선언이 이전에 이루어져야 한다.


<br>


정리하면, 뒤에서 선언되는 이름을 미리 사용하게 되는 경우를 전방 참조(forward reference) 라 하고,

이를 해결하기 위해 전방 참조가 이루어지기에 앞서 클래스 혹은 함수에 대해 선언해주는 것을 전방 선언(forward declaration)이라고 한다.

```C++
class Rect; // 전방 선언(forward declaration)
bool equals(Rect r, Rect s); // 전방 참조(forward reference)
```
<br>

<br>

### 2. 다른 클래스의 멤버 함수를 프렌드로 선언


<br>


이번에는 equals 함수가 RectManager 클래스에 선언되어 있는 멤버 함수라고 가정하자.

다른 클래스에 있는 멤버 함수를 프렌드로 선언하면 다음과 같이

friend키워드와 :: 범위 지정 연산자, 그리고 함수를 적어주면, Rect클래스의 모든 멤버를 접근할 수 있게 된다.

<br>

```C++
class Rect {
	...
   	 // RectManager 클래스에 선언되어 있는 euqlas 함수를 friend 함수로 선언
	friend RectManager::bool equals(Rect r, Rect s);
};
```

<br>


### 3. 다른 클래스의 전체 멤버 함수를 프렌드로 선언
<br>


이번에는 RectManager 클래스의 모든 멤버 함수를 프렌드 함수로 선언해보자.

RectManager 클래스를 Rect 클래스에 프렌드로 초대하려면,

다음과 같이 friend 키워드와 클래스 이름을 적어주면 된다.
<br>

```C++
class Rect {
	...
   	 // RectManager 클래스에 선언되어 있는 모든 멤버 함수를 friend 함수로 선언
	friend RectManager;
};
````
<br>
<hr>

- **다형성(polymorphism)** : 동일한 연산/기호를 대상(피연산자(에 따라 서로 다른 의미로 해석하는 것

ex ) 함수 중복(function overloading)

<br>



## 연산자 중복(Operator Overloading)
- 피연산자에 따라 서로 다른 연산을 하도록 동일한 연산자를 중복해서 작성하는 것


<br>


### < '+' 덧셈 연산자의 활용 예 - 다형성의 예시 >


<br> 
1) 두 정수에 대한 덧셈 연산 ( 2+3=5 )

2) 두 문자열(string 객체) 합치기 ( "Hello ", "C++Programming"="Hello C++Programming" )

3) 두 색을 섞은 새로운 색 만들기 ( Red + Blue = Purple )

4) 두 배열 더하기 ( {1,2,3} + {4,5,6} = {1,2,3,4,5,6} )


<br>



### <연산자 중복의 특징>

<br>

1. C++언어에 본래 있는 연산자만 중복 가능

- +, -, *, /, ==, !=, %, &&, ||, <<, <=, new[] 등



2. 연산자 중복 : 피연산자의 타입이 다른 연산을 새로 정의하는 것

- 객체+수, 수+객체, 객체+객체



3. 연산자 함수(operator function): 새로운 연산 처리를 수행하는 함수를 구현



4. 클래스와의 관계를 가진다. 피연산자에 객체를 동반한다.

- 클래스의 멤버 함수로 구현

- 전여 함수로 구현하고 클래스에 프렌드 함수로 선언



5. 피연산자의 개수를 바꾸는 것은 불가능



6. 연산자의 우선순위 변경 불가능



7. 중복이 불가능한 연산자: '.', '.*', '::'(범위 지정 연산자), ? : (3항 연산자) 


<br>


<hr>
<br>

## 연산자 함수

연산자 중복은 연산자 함수를 통해 구현된다. 연산자 함수의 작성 방법은 2가지가 있다.

<br>

1. 클래스의 멤버 함수로 구현 (자신 객체에 대한 포인터 this, 같은 클래스의 다른 객체 이용)

2. 외부 함수로 구현, 클래스의 프렌드 함수로 선언 (두 객체 이용)



<br>



### 연산자 함수 선언



연산자 함수는 operator 키워드를 이용해 선언한다.

기존의 함수 선언과 더불어 'operator' 키워드와 '연산자'가 추가된다. 


<br>


다음은 두 Color 객체를 더하고 두 객체가 동일한지 확인하는 +, == 연산자에 대한 연산자 함수를

외부 함수로 구현하고 클래스에 프렌드 함수로 선언한 첫번째 방법,

멤버 함수로 선언한 두번째 방법을 나타낸 코드이다.

리턴타입 operator 연산자(매개변수리스트);

```c++
// 두 Color 객체를 더하는 연산자 함수

// 1. 외부 함수로 구현하고 클래스에 프렌드로 선언
Color operator + (Color op1, Color op2);
bool operator == (Color op1, Color op2);

class Color{
	...
    friend Color operator + (Color op1, Color op2);
    friend bool operator == (Color op1, Color op2);
};


// 2. 클래스의 멤버 함수로 선언
```C++
class Color{
	...
    Color operator + (Color op2); // 왼쪽 피연산자는 객체 자신, 오른쪽 피연산자가 op2에 전달
    bool operator == (Color op2); 
};
```
<hr>

이제부터 연산자 중복의 예제로 사용할 클래스는 Power 클래스이다.

게임에서 발로 차는 kick, 그리고 주먹으로 때리는 힘 punch 두 멤버 변수를 가진 클래스이다.



```C++
class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0){
		this->kick=kick;
		this->punch=punch;
	}
};
```

<hr>

이항 연산자 중복
이항 연산자(binary operator)는 2개의 피연산자를 갖는 연산자이다.

+, -, ==, += 산술 중복 이항 연산자를 이용해 두 객체(피연산자)를 연산하는 과정을 살펴보자.







+ 연산자 중복

두 Power 객체를 더하는 + 연산자를 이용하여 두 멤버 변수인 kick과 punch 를 더하도록 할 것이다.


```C++
// 3개의 객체(2개의 피연산 객체, 결과값 저장할 1개의 객체)

Power a(3,5), b(4,6), c;
c = a + b;
```

Power 클래스의 멤버 함수로 + 이항 연산 함수를 선언하면 a + b 를 실행하면, 컴파일러는 다음과 같이 처리한다.

왼쪽 피연산자인 a 객체의 멤버함수 operator +() 를 호출하여, 

b를 매개 변수로 넘겨주는 함수 호출이다.

```C++
a. + ( b ); // a 객체의 멤버함수 operator + 호출하여 매개 변수 객체인 b와 연산을 실행
```

멤버 함수로 operator + () 를 구현하면 다음과 같다.

this 는 Power 객체 a 자신에 대한 포인터이고, op2는 Power 객체 b를 전달받은 매개 변수이다.

연산의 결과를 저장하기 위해 선언한 tmp 객체가 반환되며, Power c의 객체에 반환 객체가 저장된다.

```C++
class Power{
	...
    
	Power operator + (Power op2){ // 참조 매개 변수를 사용해도 무관하다. (Power &op2) 객체의 복사가 이루어지지 않아 효과적
		Power tmp;
		tmp.kick = this->kick + op2.kick;
		tmp.punch = this->punch + op2.punch;
		return tmp;
	}
};
```

+ 연산자 중복 2



이번에는 동일한 두 Power 객체를 더하는 것이 아닌,

한 개의 Power 객체와 정수(객체)를 더하는 + 연산자 중복을 구현해보자.

kick 값과 punch 값과 정수를 각각 더하는 연산이다.



Power 객체 a와 b에 대하여, b = a + 2; 를 계산하기 위해 구현하면 다음과 같다.

```C++
class Power{
	...
    
	Power operator + (int op2){
		Power tmp;				// 반환할 tmp 객체 선언
		tmp.kick = kick + op2;	// a의 kick 에 정수 op2를 더함
		tmp.punch = punch + op2; // a의 punch 에 정수 op2를 더함
		return tmp;
	}
    ... // get 함수포함
};

int main(){
	Power a(1,2), b;
	b=a+2; // c는 a에 '2'라는 객체를 더한 객체
	
	cout<<"객체 a : "<<a.getKick()<<" "<<a.getPunch()<<endl;
	cout<<"객체 b : "<<b.getKick()<<" "<<b.getPunch()<<endl;	
}
```

결과창을 보면, a의 kick과 punch 값에 각각

2를 더한 값을 객체 b가 가지고 있음을 확인할 수 있다.

