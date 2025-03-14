/* puts, fputs - 전용 출력 함수 */
// stdout - 표준 출력 버퍼(스트림)
#include <stdio.h>

int main(void) {
	char str[100] = "Delmonte orange";
	char* ps = "banana";
	printf("%s\n", str);
	puts(str);			// printf() 보다 가벼움 (문자열만 출력하기 때문)
	fputs(str, stdout);	// 자동 개행 안됨

	puts(ps);			// 자동 개행
	fputs(ps, stdout);	

	return 0;
}