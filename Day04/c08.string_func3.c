#include <stdio.h>
/* ���ڿ� �Լ� 3 */

int main(void) {
	/* strcmp */
	// ���ڿ� �� �Լ�
	char str1[100] = "apple";
	char str2[100] = "ogrange";
	

	// ���� ������ ��
	// str1�� ���� ������ -1, str2�� ���� ������ 1 ��ȯ, ������ 0 ��ȯ
	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else printf("%s\n", str2);

	//printf("%s", strcmp(str1, str2, 3));
	char* sp = "apple";
	char st[] = "apple";

	printf("%c", *sp);
	printf("%c", st[0]);

	return 0;
}