#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* �Լ� ������ */
// ���ϱ��� (�Լ� ��, ��� Ÿ�԰� ���� ����)

int sum(int, int);
int minus(int, int);

int main()
{
	int (*fp)(int, int);		// int�� �Է� 2�� int�� ����ϴ� �Լ� ������
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