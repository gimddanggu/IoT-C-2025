#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	// scanf 함수를 쓰면 경고창이 나타나는데 
	// #define _CRT_SECURE_NO_WARNINGS 
	// 다음과 같은 명령 첫줄에 입력하면 실행시킬 수 있다.

	int inputVal;
	printf("정수를 입력하세요 : ");
	scanf("%d", &inputVal);		// & 주소연산자
	printf("입력한 정수는 %d 입니다.", inputVal);

	int n1, n2;
	printf("두 개의 정수를 입력하세요 > ");
	scanf("%d %d", &n1, &n2);
	printf("입력한 정수는 %d, %d 입니다.\n", n1, n2);


	char str[20];
	printf("문자열을 입력하시오 > ");
	scanf_s("%s", str, sizeof(str));
	// scanf_s는 overflow를 방지, 경고 메시지 안뜸.

	printf("입력한 문자열 : %s\n", str);

	printf("char 크기: % d\n", sizeof(char));		// 1byte
	printf("int 크기: % d\n", sizeof(int));			// 4byte
	printf("float 크기: %d\n", sizeof(float));		// 4byte
	printf("double 크기: % d\n", sizeof(double));	// 8byte


	// 이름, 나이를 입력 받아서 출력해보세요~
	char name[10];
	int age;

	printf("당신의 이름은? > ");
	scanf_s("%s", name, sizeof(name));
	printf("당신의 나이는? > ");
	scanf("%d", &age);
	printf("이름은 %s, %d세 입니다.", name, age);
	// 한글은 한 글자당 3바이트라 3글자 * 3바이트 + 널문자 해서 최소 10바이트 필요
	// 영어는 한 글자당 1바이트 3글자 * 1바이트 + 널문자 최소 4바이트 (kim)

	return 0;
}