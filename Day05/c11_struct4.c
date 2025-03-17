#include <stdio.h>

struct human {
	char name[100];
	int age;
};
//자료형에 새로운 이름(별칭, alias)을 부여하는 키워드                       
typedef int int32mt;

typedef struct myst {
	int a;
	int32mt b;
}Mystruct;
// struct mystruct 대신 Mystruct 쓸 수 있음

// 구조체 선언과 동시에 초기화 하기
int main()
{
	struct human h = {"김다현", 100 };
	struct human h2 = { "강사", 100 };
	struct human h = { "홍길동", 100 },
		h2 = { "이순신", 110 },
		h3 = { "김유신", 200 };
	
	int n1 = 100, n2 = 200, n3 = 300;

	return 0;
}