#include <stdio.h>

/* getchar()�� �̿��ؼ� ���ڿ� ���� �� �ִ� �Լ� �����*/
void myStrInput(char*, int);

int main(void) {

	char str[100];
	int size = sizeof(str);
	myStrInput(str, size);
	printf("�Է��� ���ڿ� :%s\n", str);


	return 0;
}

void myStrInput(char* str_arr, int size)
{
	char s;
	int i = 0;
	printf("���ڿ��� �Է����ּ��� > ");
	while (1)
	{

		s = getchar();
		str_arr[i] = s;
		// i++��ġ�� if�� ���� if�� ���� �����۵��Ѵ�.
		// while ���� ������ ������ ���ڸ� null�� �ٲ��ֱ� �����̴�.
		i++;
		// ���͸� ���� �Է��� �������� ��,
		// �ִ� �Է°��� 100�� �Ѿ��� �� ����
		if (s == '\n' || i >= (size - 1))	break;
		
	}
	str_arr[i] = NULL;	// ���ڿ��� ���� ǥ���ϱ� ���� ������ �ε����� NULL ���� ����


}

