#include <stdio.h>
/* �޸� ���� �Ҵ� malloc - free */
// malloc - �޸� �Ҵ� ����
// free - �Ҵ���� �޸� ��ȯ
int main(void)
{
	int* pi = (void*)malloc(sizeof(int));		// �������� �Է�ũ�⸸ŭ �޸� ���� �Ҵ�޾Ƽ� ���� �ּҸ� �����Ѵ�.
	//int* pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {
		printf(" �޸� �Ҵ� ����\n");
		exit(1);
	}

	printf("�Ҵ� ����!\n");

	free(pi);
	
	return 0;
}