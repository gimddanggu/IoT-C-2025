# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

/* 문자열 함수 */
void myStringCopy(char*, char*, int);

int main(void) {
	char str1[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";
	int size = sizeof(str1);

	printf("str1: %s\n", str1);
	printf("str1: %s\n", str2);

	// str1을 복사해서 srt2로
	strcpy(str1, str2);			// strcpy(복사, 원본)
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	strcpy(str1, "banana");			// strcpy(복사, 원본)
	printf("str1: %s\n", str1);


	printf("myStirngCopy() 함수 실행 전 str1, str2 값 확인\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	myStringCopy(str1, str2, size);

	printf("myStirngCopy() 함수 실행 후 str1, str2 값 확인\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	//strcpy(ps, str2);				// 예외 발생
	//printf("ps: %s", ps);


	// 원하는 개수만큼 복사
	strncpy(str1, "abcdef", 3);
	printf("str1: %s\n", str1);

	return 0;
}
// st를 st2에 복사
void myStringCopy(char* st, char* st2, int size)
{
	int i = 0;

	while (i < size)
	{
		st2[i] = st[i];
		i++;
	}
}