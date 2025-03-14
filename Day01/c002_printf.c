#include <stdio.h>

int main(void) {
	// printf 연습
	// 파이썬과 다르게 print가 아닌 printf
	// 문자 하나일때는 ''가 가능하지만 문자열일 경우 "" 사용해야 함
	// 한줄 뒤에는 무조건 ; 붙이기
	// 파이썬은 print()에 자동개행이 되지만 c에서는 '\n' 무조건 붙여줘야 함
	// f-string 따윈없다.. 서식 문자 사용(%d, %s, %c, %f..)

	printf("정수출력: %d, %d\n", 10, 20);
	printf("실수출력: %lf\n", 3.14);
	printf("실수출력: %.4lf\n", 3.14);
	// .4lf : 소수점 4째자리 까지 출력


	/* 진수 */
	printf("%d\n", 100);	// 10진수: 0 ~ 9 까지
	printf("%d\n", 0xc);	// 16진수: 10진수 + a(10) ~ f(15)


	/* 문자 */
	printf("%c\n", 'a');		// 문자는 ''로 감싼다.
	printf("김다현\n");
	printf("%s\n", "김다현");	// 문자열은 ""로 감싼다.

	printf("문자 a: %c\n", 'a');
	printf("문자 a: %d\n", 'a');
	printf("문자 A: %c\n", 'A');
	printf("문자 A: %d", 'A');
	// 서식문자를 이용해 문자를 숫자로 출력가능
	// a, A의 아스키 코드 출력됨
	
	// 이름하고 나이 출력해보세요~
	printf("이름: % s, 나이 : % d", "김다현", 25);

	return 0;



}