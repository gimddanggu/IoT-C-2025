#include <stdio.h>

void incFunc1();
void incFunc2();

int main(void) {
	for (int i = 0; i < 5; i++) {
		incFunc1();
		incFunc2();
	}
	//scnt++;		// static 변수이므로 incFunc2())에서만 사용 가능
					// 외부에서 정적 변수의 접근은 불허한다.
	return 0;
}


void incFunc1()
{
	int cnt = 0;					// 지역변수
									// 함수 호출될 때마다 초기화
	cnt++;
	printf("cnt : %d\t", cnt);
}

void incFunc2()
{
	static int scnt = 0;			// 정적지역변수 ( 수정은 선언된 블록 안에서만 가능)
									// 함수 최초 호출시 한번만 초기화
	scnt++;
	printf("scnt: %d\n", scnt);
}