#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 문자열 입력 */
int main(void) {

	char str[100];
	/* scanf() */
	printf("=== scanf() ===\n");
	printf("문자열 입력 >> ");
	scanf("%s", str);
	// scanf 입력시 공백을 읽어오지 못함
	// 공백을 구분자로 사용하기 때문

	printf("문자열: %s", str);
	scanf("%s", str);
	printf("문자열: %s", str);

	/* 출력결과 */
	// 문자열 입력 >> hi hello
	// 문자열: hi문자열: hello
	// 두번째 scanf에서 따로 입력을 주지않음. 입력 버퍼에 남아있던 값이 그대로 출력되어 나온다.

	/* gets() */
	// 문자열 입력에 특화된 함수 gets()
	printf("=== gets() ===\n");
	printf("공백을 포함한 입력 >> ");
	gets(str);
	printf("입력 문자열: %s\n", str);
	/* 출력결과 */
	// 공백을 포함한 입력 >> hi hello
	// 입력 문자열 : hi hello
	// gets()는 공백까지 입력 가능

	/* fgets() */
	// 버퍼를 직접 지정해줘야 함.
	printf("=== fgets() ===\n");
	printf("공백을 포함한 입력 >> ");
	gets(str, sizeof(str), stdin);
	printf("입력 문자열: %s", str);
	// stdin - 표준 입력 버퍼(입력 스트림)
	// 일반적으로 fgets() 함수를 선호함

	return 0;
}