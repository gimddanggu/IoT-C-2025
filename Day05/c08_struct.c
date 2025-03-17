#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
#include <string.h>
/* 구조체 */
// 사용자 정의 자료형
// 기존 자료형을 묶어서 만든 복합 자료형

// 구조체 선언
struct Human {	
	char name[10];			// 멤버 변수
	int age;				// 멤버 변수
};

int main(void) {
	// . : 멤버 접근 연산자
	struct Human h;			// Human 구조체의 변수 h 선언
	h.age = 30;				// h객체의 멤버 age에 30을 저장한다.
	// h.name = "김다현";	// 오류 발생
	strcpy(h.name, "kimdahyun");	// 문자열은 다음과 같은 방법을 사용해 초기화한다.
									// strcpy(), memcpy()

	char str[100] = "김다현";
	printf("%s", str);

	char str2[100];
	//*str2 = "kim dahyun";		// 오류 발생
	// 아래와 같이 한 문자씩 넣어주는 건 가능
	/*str2[0] = 'k';
	str2[1] = 'i';
	..
	str2[10] = '/0';*/

	//printf("%s", str);
	printf("나의 이름은 %s이고, 나이는 %d 입니다.",h.name ,h.age );
	return 0;
}