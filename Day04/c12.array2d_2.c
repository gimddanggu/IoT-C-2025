#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 2차원 문자 배열 */
int main(void) {

	// 2차원 배열에서 배열이름은 array[0] 의 주소
	char fruit[5][10];

	/*for (int i = 0; i < 5; i++) {
		scanf("%s", &fruit[i]);
	}*/ // 배열은 &안써도 됨

	for (int i = 0; i < 5; i++) {
		scanf("%s", fruit[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n", fruit[i]);
	}

	// 입력한 문자열을 한 글자씩 출력
	printf("\n입력된 문자열을 한 글자씩 출력:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; fruit[i][j] != '\0'; j++) {
			printf("%c ", fruit[i][j]);
		}
		printf("\n");
	}

	int ary2d[][3] = { 1,1,1,1,1,1,1,1,1 };
	printf("%p\n", ary2d[0]);			// 첫 행의 주소
	printf("%p\n", &ary2d[0][0]);
	printf("%p\n", &ary2d[0][1]);
	printf("%p\n", &ary2d[0][2]);


	printf("%p\n", ary2d[1]);			// 두 번째 행의 주소
	printf("%p\n", &ary2d[1][0]);
	printf("%p\n", &ary2d[1][1]);
	printf("%p\n", &ary2d[1][2]);

	printf("%p\n", ary2d[2]);			// 세 번째 행의 주소

 /*
	 2차원 배열도 연속적으로 메모리가 저장되는 것을 확인할 수 있음
	 다음 행에 접근할 경우 *(ary2d + 1)
	 *(ary2d + i) + j	i번째 행의 j 열 주소
 */
	return 0;
}