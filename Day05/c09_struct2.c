#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myStruct {
	char name[20];
	int age;
	double height;
	char* str;
};


int main(void)
{
	struct myStruct s;
	strcpy(s.name, "�����");
	s.age = 25;
	s.height = 165.2;
	s.str = (char*)malloc(sizeof(100));
	printf("�λ縻: ");
	gets(s.str);

	printf("�̸�: %s\n", s.name);
	printf("����: %d\n", s.age);
	printf("Ű: %lf\n", s.height);
	printf("�λ縻: %s\n", s.str);

	free(s.str);

	return 0;
}