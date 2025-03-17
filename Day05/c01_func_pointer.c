#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 함수 포인터 */
// 동일구조 (함수 입, 출력 타입과 개수 같음)

int sum(int, int);
int minus(int, int);

int main()
{
	int (*fp)(int, int);		// int형 입력 2개 int형 출력하는 함수 포인터
	int res;
	res = sum(10, 20);
	printf("res: %d\n", res);

	res = minus(10, 20);
	printf("res: %d\n", res);

	fp = sum;
	res = fp(20, 10);
	printf("res: %d", res);

	return 0;
}

int sum(int a, int b)
{
	int res = a + b;
	return res;
}

int minus(int a, int b)
{
	int res = a - b;
	return res;

}