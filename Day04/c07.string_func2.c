#include <stdio.h>
/* ���ڿ� �Լ� 2 */
int main(void) {
	char str[100] = "apple";
	/* strlen */
	// ���ڿ� ���� Ȯ��
	printf("str���ڿ� ����: %d\n", strlen(str));
	
	/* strcat */
	// ���ڿ� ���̱�
	strcat(str, "banana");
	printf("%s\n", str);

	/* strncat */
	// ���� �� ���� ���� �� ����
	strncat(str, "orange", 3);
	printf("%s\n", str);

	return 0;
}