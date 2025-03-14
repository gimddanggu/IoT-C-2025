#include <stdio.h>
/* 문자열 함수 2 */
int main(void) {
	char str[100] = "apple";
	/* strlen */
	// 문자열 개수 확인
	printf("str문자열 길이: %d\n", strlen(str));
	
	/* strcat */
	// 문자열 붙이기
	strcat(str, "banana");
	printf("%s\n", str);

	/* strncat */
	// 문자 몇 개를 붙일 지 지정
	strncat(str, "orange", 3);
	printf("%s\n", str);

	return 0;
}