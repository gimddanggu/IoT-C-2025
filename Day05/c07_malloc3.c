// �ټ����� ���ڿ��� �Է� �޾� �� ������ �����ض�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	// ������ �迭 ���� 
	char* arr[5];

	for (int i = 0; i < 5; i++) {
		char str[100];

		printf("���ڿ��� �Է��ϼ��� %d��° �Է� > ", i+1);
		gets(str);

		char* sp = (char*)malloc(strlen(str) + 1);
		if (sp == NULL) {
			printf("�޸� �Ҵ� ����!\n");

			for (int j = 0; j < i; j++) {
				free(arr[i]);
			}
			return 1;
		}


		strcpy(sp, str);
		arr[i] = sp;
		//free(sp);		// �̹� ������ �޸𸮸� �Ʒ� ��¿��� ����Ϸ� �ϹǷ� ���� �߻�
	}
	printf("\n ==== ��°�� ====\n");
	for (int j = 0; j < 5; j++) {
		printf("%d ��° ���ڿ� : %s\n", j+1, arr[j]);
	}

	// �� ��� �� �޸� ��ȯ
	for (int j = 0; j < 5; j++) {
		free(arr[j]);  // ���� �޸� ����
	}
	return 0;
}