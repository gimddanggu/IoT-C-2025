# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

/* ���ڿ� �Լ� */
void myStringCopy(char*, char*, int);

int main(void) {
	char str1[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";
	int size = sizeof(str1);

	printf("str1: %s\n", str1);
	printf("str1: %s\n", str2);

	// str1�� �����ؼ� srt2��
	strcpy(str1, str2);			// strcpy(����, ����)
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	strcpy(str1, "banana");			// strcpy(����, ����)
	printf("str1: %s\n", str1);


	printf("myStirngCopy() �Լ� ���� �� str1, str2 �� Ȯ��\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	myStringCopy(str1, str2, size);

	printf("myStirngCopy() �Լ� ���� �� str1, str2 �� Ȯ��\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	//strcpy(ps, str2);				// ���� �߻�
	//printf("ps: %s", ps);


	// ���ϴ� ������ŭ ����
	strncpy(str1, "abcdef", 3);
	printf("str1: %s\n", str1);

	return 0;
}
// st�� st2�� ����
void myStringCopy(char* st, char* st2, int size)
{
	int i = 0;

	while (i < size)
	{
		st2[i] = st[i];
		i++;
	}
}