#include <stdio.h>

/*
	������ �迭: �迭(�����͸� ������ �� �ִ� �迭)
	�迭 ������: ������(�迭�� ����Ű�� ������)
*/

int main(void) {

	char* pary[5] = {"dog", "tiger", "lion", "apple", "banana"};		// char*�� 5�� ������ �� �ִ� ������ �迭
	char* pary2[3];
	pary[0] = "abcd";
	pary[1] = "efg";
	pary[2] = "hijk";

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}
