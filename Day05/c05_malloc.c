#include <stdio.h>
/* 메모리 동적 할당 malloc - free */
// malloc - 메모리 할당 받음
// free - 할당받은 메모리 반환
int main(void)
{
	int* pi = (void*)malloc(sizeof(int));		// 힙영역에 입력크기만큼 메모리 공간 할당받아서 시작 주소를 리턴한다.
	//int* pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {
		printf(" 메모리 할당 실패\n");
		exit(1);
	}

	printf("할당 성공!\n");

	free(pi);
	
	return 0;
}