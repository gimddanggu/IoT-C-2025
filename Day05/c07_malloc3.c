// 다섯개의 문자열을 입력 받아 힙 영역에 저장해라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	// 포인터 배열 선언 
	char* arr[5];

	for (int i = 0; i < 5; i++) {
		char str[100];

		printf("문자열을 입력하세요 %d번째 입력 > ", i+1);
		gets(str);

		char* sp = (char*)malloc(strlen(str) + 1);
		if (sp == NULL) {
			printf("메모리 할당 실패!\n");

			for (int j = 0; j < i; j++) {
				free(arr[i]);
			}
			return 1;
		}


		strcpy(sp, str);
		arr[i] = sp;
		//free(sp);		// 이미 해제된 메모리를 아래 출력에서 사용하려 하므로 오류 발생
	}
	printf("\n ==== 출력결과 ====\n");
	for (int j = 0; j < 5; j++) {
		printf("%d 번째 문자열 : %s\n", j+1, arr[j]);
	}

	// 값 출력 후 메모리 반환
	for (int j = 0; j < 5; j++) {
		free(arr[j]);  // 동적 메모리 해제
	}
	return 0;
}