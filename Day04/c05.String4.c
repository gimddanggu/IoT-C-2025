/* puts, fputs - ���� ��� �Լ� */
// stdout - ǥ�� ��� ����(��Ʈ��)
#include <stdio.h>

int main(void) {
	char str[100] = "Delmonte orange";
	char* ps = "banana";
	printf("%s\n", str);
	puts(str);			// printf() ���� ������ (���ڿ��� ����ϱ� ����)
	fputs(str, stdout);	// �ڵ� ���� �ȵ�

	puts(ps);			// �ڵ� ����
	fputs(ps, stdout);	

	return 0;
}