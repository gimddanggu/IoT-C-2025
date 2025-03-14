#include <stdio.h>
/* 이중포인터 */
int main(void) {
	int n = 100;
	int* pn;
	int** ppn;			// 2중 포인터

	pn = &n;			// 변수 n의 주소를 저장
	ppn = &pn;			// 포인터 변수 pn의 주소를 저장 

	printf("n: %d\t n 주소: %p\n", n, &n);
	printf("pn: %p\t pn 주소: %p\t n값: %d\n", pn, &pn, *pn);
	printf("ppn: %p\t ppn 주소: %p\t *ppn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);



}