#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc(), exit() ����� ���� �߰�
#include <string.h>  // strlen(), strcpy() ����� ���� �߰�

int main()
{
	char str[100];
	// ������ ���� ���� ���� �迭�� �����ϱ� ����
	// malloc�� ���� ���� �޸� �Ҵ� !
	printf("���ڿ��� �Է��ϼ��� >> ");
	gets(str);
	printf("�Է��� ���ڿ� : %s\n", str);


	char* ps;
	ps = (char*)malloc(strlen(str) + 1);	// �Էµ� ���ڿ��� ������ ������ �����κ��� �Ҵ� �޴´�.
	if (ps == NULL) {
		exit(1);
	}

	strcpy(ps, str);				// ���ڿ� ����
	printf("heap : %s\n", ps);
	free(ps);						// ���� �޸� ��ȯ
	return 0;
}