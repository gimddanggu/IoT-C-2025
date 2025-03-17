#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언
int sum(int, int);
int minus(int, int);
void func(int(*fp)(int, int), int, int);


int main(void) {
	int num1 = 0;
	int num2 = 0;;
	char op;

	printf("두 정수를 입력하세요 > ");
	scanf("%d %d", &num1, &num2);

	printf("연산자를 입력하세요 > ");
	scanf(" %c", &op);


	if (op == '+') {
		func(sum, num1, num2);
	} else if (op =='-') {
		func(minus, num1, num2);
	}
	
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

void func(int(*fp)(int, int), int num1, int num2)
{
	printf("연산 결과는 : %d 입니다.", fp(num1, num2));
}