#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* ���ڿ� �Է� */
int main(void) {

	char str[100];
	/* scanf() */
	printf("=== scanf() ===\n");
	printf("���ڿ� �Է� >> ");
	scanf("%s", str);
	// scanf �Է½� ������ �о���� ����
	// ������ �����ڷ� ����ϱ� ����

	printf("���ڿ�: %s", str);
	scanf("%s", str);
	printf("���ڿ�: %s", str);

	/* ��°�� */
	// ���ڿ� �Է� >> hi hello
	// ���ڿ�: hi���ڿ�: hello
	// �ι�° scanf���� ���� �Է��� ��������. �Է� ���ۿ� �����ִ� ���� �״�� ��µǾ� ���´�.

	/* gets() */
	// ���ڿ� �Է¿� Ưȭ�� �Լ� gets()
	printf("=== gets() ===\n");
	printf("������ ������ �Է� >> ");
	gets(str);
	printf("�Է� ���ڿ�: %s\n", str);
	/* ��°�� */
	// ������ ������ �Է� >> hi hello
	// �Է� ���ڿ� : hi hello
	// gets()�� ������� �Է� ����

	/* fgets() */
	// ���۸� ���� ��������� ��.
	printf("=== fgets() ===\n");
	printf("������ ������ �Է� >> ");
	gets(str, sizeof(str), stdin);
	printf("�Է� ���ڿ�: %s", str);
	// stdin - ǥ�� �Է� ����(�Է� ��Ʈ��)
	// �Ϲ������� fgets() �Լ��� ��ȣ��

	return 0;
}