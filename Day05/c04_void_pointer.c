#include <stdio.h>
/* void ������ */
int main(void) {
	int n = 10;
	double db = 3.14;


	void* p;					// void ������
	p = &n;
	//printf("*p: %d", *(p);	// void ������ �� int�� ������ �־����Ƿ� �����߻�
	printf("*p: %d\n", *(int*)p);
	p = &db;
	printf("*p: %lf\n", *(double*)p);
	
	(int*)p = &n;				// �� �ȵ�? -> �����ʿ��� ����ȯ�ϴ� ���� ����
								// ���Կ������� ������� ��
	printf("*p: %d\n", *(int*)p);
	return 0;
}