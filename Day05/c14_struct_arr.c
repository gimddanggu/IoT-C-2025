#include <stdio.h>
/* 구조체 배열 */
typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr*, int);

int main()
{
	// 구조체 배열 선언 및 초기화
	Addr list[3] = { {"홍길동", 100, "010-1234-1234", "몰라"},
					 {"김철수", 33, "010-2222-2222", "부산"},
					 {"김영희", 24, "010-3333-3333", "울산" } };

	//printf("%d", sizeof(list)/sizeof(Addr));
	int size = sizeof(list) / sizeof(Addr);

	print_list(list, size);
	
	return 0;
}

void print_list(Addr* ad, int size)
{
	// 입력으로 배열 포인터.?
	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s, %s\n", ad[i].name, ad[i].age, ad[i].tel, ad[i].addr);
	}
	
}