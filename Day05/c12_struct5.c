#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision {
	double left;
	double right;
} Vision;

Vision exchange(Vision);	// �Լ� ����

int main(void) {
	Vision root;
	printf("�÷��� �Է��ϼ��� > ");
	scanf("%lf %lf", &root.left, &root.right);
	
	root = exchange(root);


	printf("�ٲ� �÷��� ����: %.1lf, ������: %.1lf", root.left, root.right);


	return 0;
}
Vision exchange(Vision v) 
{
	v.left += 0.5;
	v.right += 0.6;
	return v;
}