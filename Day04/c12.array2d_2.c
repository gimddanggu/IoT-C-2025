#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 2���� ���� �迭 */
int main(void) {

	// 2���� �迭���� �迭�̸��� array[0] �� �ּ�
	char fruit[5][10];

	/*for (int i = 0; i < 5; i++) {
		scanf("%s", &fruit[i]);
	}*/ // �迭�� &�Ƚᵵ ��

	for (int i = 0; i < 5; i++) {
		scanf("%s", fruit[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n", fruit[i]);
	}

	// �Է��� ���ڿ��� �� ���ھ� ���
	printf("\n�Էµ� ���ڿ��� �� ���ھ� ���:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; fruit[i][j] != '\0'; j++) {
			printf("%c ", fruit[i][j]);
		}
		printf("\n");
	}

	int ary2d[][3] = { 1,1,1,1,1,1,1,1,1 };
	printf("%p\n", ary2d[0]);			// ù ���� �ּ�
	printf("%p\n", &ary2d[0][0]);
	printf("%p\n", &ary2d[0][1]);
	printf("%p\n", &ary2d[0][2]);


	printf("%p\n", ary2d[1]);			// �� ��° ���� �ּ�
	printf("%p\n", &ary2d[1][0]);
	printf("%p\n", &ary2d[1][1]);
	printf("%p\n", &ary2d[1][2]);

	printf("%p\n", ary2d[2]);			// �� ��° ���� �ּ�

 /*
	 2���� �迭�� ���������� �޸𸮰� ����Ǵ� ���� Ȯ���� �� ����
	 ���� �࿡ ������ ��� *(ary2d + 1)
	 *(ary2d + i) + j	i��° ���� j �� �ּ�
 */
	return 0;
}