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
	strcpy(s.name, "김다현");
	s.age = 25;
	s.height = 165.2;
	s.str = (char*)malloc(sizeof(100));
	printf("인사말: ");
	gets(s.str);

	printf("이름: %s\n", s.name);
	printf("나이: %d\n", s.age);
	printf("키: %lf\n", s.height);
	printf("인사말: %s\n", s.str);

	free(s.str);

	return 0;
}