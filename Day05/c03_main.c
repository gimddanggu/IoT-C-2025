#include <stdio.h>
/* �����Լ� ���� �˾ƺ��� */
int main(int argc, char* argv[]) {  // char* argv[] �� �ٲ� �� ����

	int i = 0;
	printf("���ް���: %d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("���� ��[%d]: %s\n", i, argv[i]);
	}
	return 0;
}

/* �Է� */
//Day05.exe 1 2 3

/* ��� */
//���ް���: 4
//���� ��[0] : Day05.exe
//���� ��[1] : 1
//���� ��[2] : 2
//���� ��[3] : 3