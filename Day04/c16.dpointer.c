#include <stdio.h>
/* ���������� */
int main(void) {
	int n = 100;
	int* pn;
	int** ppn;			// 2�� ������

	pn = &n;			// ���� n�� �ּҸ� ����
	ppn = &pn;			// ������ ���� pn�� �ּҸ� ���� 

	printf("n: %d\t n �ּ�: %p\n", n, &n);
	printf("pn: %p\t pn �ּ�: %p\t n��: %d\n", pn, &pn, *pn);
	printf("ppn: %p\t ppn �ּ�: %p\t *ppn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);



}