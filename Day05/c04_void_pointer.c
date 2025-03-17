#include <stdio.h>
/* void 포인터 */
int main(void) {
	int n = 10;
	double db = 3.14;


	void* p;					// void 포인터
	p = &n;
	//printf("*p: %d", *(p);	// void 포인터 에 int형 정수를 넣었으므로 오류발생
	printf("*p: %d\n", *(int*)p);
	p = &db;
	printf("*p: %lf\n", *(double*)p);
	
	(int*)p = &n;				// 왜 안됨? -> 오른쪽에서 형변환하는 경우는 없음
								// 대입연산자의 연산방향 ←
	printf("*p: %d\n", *(int*)p);
	return 0;
}