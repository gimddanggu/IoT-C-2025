#include <stdio.h>
/* 문자열 함수 3 */

int main(void) {
	/* strcmp */
	// 문자열 비교 함수
	char str1[100] = "apple";
	char str2[100] = "ogrange";
	

	// 사전 순으로 비교
	// str1이 먼저 나오면 -1, str2가 먼저 나오면 1 반환, 같으면 0 반환
	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else printf("%s\n", str2);

	//printf("%s", strcmp(str1, str2, 3));
	char* sp = "apple";
	char st[] = "apple";

	printf("%c", *sp);
	printf("%c", st[0]);

	return 0;
}