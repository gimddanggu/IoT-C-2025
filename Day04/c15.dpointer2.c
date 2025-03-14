#include <stdio.h>

void printAry(char*[], int);
// void printAry(char**, int);

int main(void) {
	
	char* ary[] = { "mango", "apple", "banana" };

	printAry(ary, 3);

	return 0;
}

//void printAry(char* ary[], int size) 
void printAry(char** ary, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", *(ary + i));
	}
}