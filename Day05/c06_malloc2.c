#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc(), exit() 사용을 위해 추가
#include <string.h>  // strlen(), strcpy() 사용을 위해 추가

int main()
{
	char str[100];
	// 일일히 문자 수를 세서 배열에 저장하긴 힘듦
	// malloc을 통해 동적 메모리 할당 !
	printf("문자열을 입력하세요 >> ");
	gets(str);
	printf("입력한 문자열 : %s\n", str);


	char* ps;
	ps = (char*)malloc(strlen(str) + 1);	// 입력된 문자열을 저장할 공간을 힙으로부터 할당 받는다.
	if (ps == NULL) {
		exit(1);
	}

	strcpy(ps, str);				// 문자열 복사
	printf("heap : %s\n", ps);
	free(ps);						// 동적 메모리 반환
	return 0;
}