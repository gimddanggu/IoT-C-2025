# IoT-C-2025
IoT 개발자 C 기초 프로그래밍 언어 리포지토리

## 1일차

> **C 언어는 함수로 시작해서 함수로 끝이 난다**

- C 언어
    - 1972년에 벨 연구소(Bell Labs)의 데니스 리치가 만든 범용(general-purpose) 프로그래밍 언어.
    - C언어의 기본단위는 **함수**
    - 프로그램이 시작되면 main 함수가 호출된다. 리터럴(상수)
    - 함수 내에 존재하는 문장의 끝에는 세미콜론(;)을 붙여준다.
- 함수
    - 함수에는 입력과 출력이 존재한다.
    - 함수의 기능은 중괄호 안에 표현, 표현된 함수의 기능을 함수의 몸체라고 한다.
    - 함수 표현 3가지
        1. 함수의 이름
        2. 출력형태(return type)
        3. 입력형태
<img src='https://blog.kakaocdn.net/dn/cxJaLX/btsescyPLCG/9gcPUaER0Yjx1RX36SZRB1/img.png' width=300>

    - 함수관련 용어
        - **함수의 정의**: 만들어진 함수, 실행이 가능한 함수
        - **함수의 호출**: 함수의 실행을 명령하는 행위
        - **인자의 전달**: 함수의 실행을 명령할 때 전달하는 입력 값
    
- C 언어 기본 틀
```c
#include <stdio.h>    

int main() {

	return 0;
}
```

```c
#include <stdio.h>

void main() {

}
```
[Q1.int main() 과 void main() 의 차이?](Questions.md#q1-int-main과-void-main의-차이)
- 주석
	- `//` : 한 줄 주석
	- `/**/` 여러 줄 주석
- 문자열 출력
<img src='https://mblogthumb-phinf.pstatic.net/MjAxNzA0MDNfNjkg/MDAxNDkxMTg1MDM2MTM2.lZA4OH0ymZSOG0pChC1sOqL6VcQdrvIa_9o4WMXgdBAg.g5BUsoABavXYf6kE7x9qoVD8Wri7nHInTZPHgMIjJtgg.PNG.dd1587/%EC%84%9C%EC%8B%9D%EB%AC%B8%EC%9E%90_%ED%91%9C.png?type=w800' widht='500'>

파이썬 문자열 치환방법과 비슷함. 차이는 `%()` 로 감싸지 않아도 된다는 것

- 아스키코드(ASCII)
    - 아스키코드표
    <img src='https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FbtOMFu%2Fbtq6XPqLXIR%2Fxcv712mblD4OljmiQTXsnk%2Fimg.png' width=600>

    - 미국 표준 협회에 의해 제정된 코드
    - 컴퓨터는 문자를 표현 및 저장하지 못함 -> 문자 표현 목적으로 각 문자에 고유한 숫자 지정
    - 따라서 인간이 입력하는 문자는 해당 문자의 숫자로 변환되어 컴퓨터에 저장 및 인식






- 변수
    - 값을 저장할 수 있는 메모리 공간
    - 변수가 선언시, 메모리 공간이 할당되고 할당된 메모리 공간에 이름이 붙는다.
    - 변수 이름을 통해 값 저장, 값 참조 할 수 있다.
    - 할당: `int num;`
    - 초기화: `num = 10;`
    - 할당과 초기화 동시에 할 수도 있다. `int num = 10;`
    - 변수 선언만 하면 값이 대입되기 전까지 쓰레기 값이 채워진다.

- 자료형
    - 정수형 변수(char, short, int, long)
    <img src='./image/c001.png' with=400>
    - 실수형 변수(float, double)
    <img src='./image/c002.png' with=400>
    📌 컴퓨터가 가장 연산을 빨리 할 수 있는  크기 4byte
    📌 변수 앞의 자료형은 메모리의 크기를 나타내준다.
    📌 double이 정밀도가 더 높음 (8바이트)

        - float (단정밀도, 32비트)
            ▫️ 최대 소수점 약 6~7자리까지 정확하게 표현 가능.
            ▫️ 7자리 이후의 값은 반올림되거나 오차 발생.
        - double (배정밀도, 64비트)
            ▫️ 최대 소수점 약 15~16자리까지 정확하게 표현 가능.
            ▫️ float보다 훨씬 더 정확한 값을 저장 가능.

 - 연산자
 📢 삼항 연산자부터는 파이썬에 없는 연산자
    - 대입연산자(`=`)
    - 산술연산자(`+`, `-`, `*`, `/`, `%`)
    - 복합 대입 연산자(`+=`, `-=`, `*=`, `/=`, `%=`)
    - 관계연산자(`<`, `>`, `>=`, `<=`, `!=`, `==`)
    - 논리 연산자(`&&`, `||`, `!`)
    - 증감연산자(`++`, `--`)
    - 삼항 연산자(`?:`)
    - 비트 연산자(`&`, `|`, `^`, `~`, `<<`, `>>`)
    - 주소 및 포인터 관련 연산자(`&`, `*`)
    - 구조체 관련 연산자(`.`, `->`)
    - 콤마 연산자(`.`)
    - sizeof 연산자(`sizeof`)
    - 형 변환 연산자(`(type)`)

    - 연산자 우선순위
- 상수
30, 40과 같이 프로그램상에 표현되는 숫자
상수의 이름은 대문자로 표시하고, 둘 이상의 단어를 연결할 때에는 언더바를 이용
예시) `MY_AGE`
    - 리터럴 상수
        - 정수: 기본적으로 int형으로 표현 
        - 실수: 기본적으로 double형으로 표현
        - 문자: 기본적으로 int형으로 표현
    - 심볼릭 상수(const 상수)
        const 예약어를 붙인 상수는 이후 값 변경이 불가능하다

- 제어문
📌 모든 프로그래밍의 제어문은 두가지다 
    - 선택 제어문(if, switch)
    - 반복 제어문(for, while)
