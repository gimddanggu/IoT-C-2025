#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision {
	double left;
	double right;
} Vision;

Vision exchange(Vision);	// 함수 원형

int main(void) {
	Vision root;
	printf("시력을 입력하세요 > ");
	scanf("%lf %lf", &root.left, &root.right);
	
	root = exchange(root);


	printf("바뀐 시력은 왼쪽: %.1lf, 오른쪽: %.1lf", root.left, root.right);


	return 0;
}
Vision exchange(Vision v) 
{
	v.left += 0.5;
	v.right += 0.6;
	return v;
}