#include <stdio.h>
/* ����ü �迭 */
typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr*, int);

int main()
{
	// ����ü �迭 ���� �� �ʱ�ȭ
	Addr list[3] = { {"ȫ�浿", 100, "010-1234-1234", "����"},
					 {"��ö��", 33, "010-2222-2222", "�λ�"},
					 {"�迵��", 24, "010-3333-3333", "���" } };

	//printf("%d", sizeof(list)/sizeof(Addr));
	int size = sizeof(list) / sizeof(Addr);

	print_list(list, size);
	
	return 0;
}

void print_list(Addr* ad, int size)
{
	// �Է����� �迭 ������.?
	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s, %s\n", ad[i].name, ad[i].age, ad[i].tel, ad[i].addr);
	}
	
}