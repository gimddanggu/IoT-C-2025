#include <stdio.h>
/* 메인함수 동작 알아보기 */
int main(int argc, char* argv[]) {  // char* argv[] 로 바꿀 수 있음

	int i = 0;
	printf("전달갯수: %d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("전달 값[%d]: %s\n", i, argv[i]);
	}
	return 0;
}

/* 입력 */
//Day05.exe 1 2 3

/* 출력 */
//전달갯수: 4
//전달 값[0] : Day05.exe
//전달 값[1] : 1
//전달 값[2] : 2
//전달 값[3] : 3