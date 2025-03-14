#include <stdio.h>
void incFunc(int);
void incFunc1();
// 전역변수
// 별도의 초기화 없을 경우 0으로 초기화
int cnt;

int main(void) {
	// int cnt = 0;
	for (int i = 0; i < 5; i++) {
		incFunc(cnt);
	}  

	printf("cnt: %d\n", cnt);
	// 5번 호출 했음에도 cnt 값 변하지 않음 (지역변수)


	for (int i = 0; i < 5; i++) {
		incFunc1();
	}
	printf("cnt: %d\n", cnt);
	// cnt 값 5로 변경

	return 0;
}
void incFunc(int cnt)		// Call by Value
{
	// cnt는 incFunc의 지역 변수
	cnt++;
}
// C 언어에서 변수를 참조할 때 가까운 스코프(범위)의 변수를 먼저 사용
// 매개변수와 전역변수 이름이 같다면 가까운 함수인 매개변수(지역변수를 사용)
// 원하는 값 얻기 위해선 매개변수 없애거나 주소를 매개변수로 줘야 함
// Call by Reference

// 전역변수 이용 
void incFunc1()		
{
	cnt++;
}
// 포인터 이용  // Call by Reference
void incFunc(int* cnt) {
	(*cnt)++;  // 포인터를 이용해 값 증가
}