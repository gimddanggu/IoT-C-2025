#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	// scanf �Լ��� ���� ���â�� ��Ÿ���µ� 
	// #define _CRT_SECURE_NO_WARNINGS 
	// ������ ���� ��� ù�ٿ� �Է��ϸ� �����ų �� �ִ�.

	int inputVal;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &inputVal);		// & �ּҿ�����
	printf("�Է��� ������ %d �Դϴ�.", inputVal);

	int n1, n2;
	printf("�� ���� ������ �Է��ϼ��� > ");
	scanf("%d %d", &n1, &n2);
	printf("�Է��� ������ %d, %d �Դϴ�.\n", n1, n2);


	char str[20];
	printf("���ڿ��� �Է��Ͻÿ� > ");
	scanf_s("%s", str, sizeof(str));
	// scanf_s�� overflow�� ����, ��� �޽��� �ȶ�.

	printf("�Է��� ���ڿ� : %s\n", str);

	printf("char ũ��: % d\n", sizeof(char));		// 1byte
	printf("int ũ��: % d\n", sizeof(int));			// 4byte
	printf("float ũ��: %d\n", sizeof(float));		// 4byte
	printf("double ũ��: % d\n", sizeof(double));	// 8byte


	// �̸�, ���̸� �Է� �޾Ƽ� ����غ�����~
	char name[10];
	int age;

	printf("����� �̸���? > ");
	scanf_s("%s", name, sizeof(name));
	printf("����� ���̴�? > ");
	scanf("%d", &age);
	printf("�̸��� %s, %d�� �Դϴ�.", name, age);
	// �ѱ��� �� ���ڴ� 3����Ʈ�� 3���� * 3����Ʈ + �ι��� �ؼ� �ּ� 10����Ʈ �ʿ�
	// ����� �� ���ڴ� 1����Ʈ 3���� * 1����Ʈ + �ι��� �ּ� 4����Ʈ (kim)

	return 0;
}