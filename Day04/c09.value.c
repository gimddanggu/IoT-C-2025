#include <stdio.h>
void incFunc(int);
void incFunc1();
// ��������
// ������ �ʱ�ȭ ���� ��� 0���� �ʱ�ȭ
int cnt;

int main(void) {
	// int cnt = 0;
	for (int i = 0; i < 5; i++) {
		incFunc(cnt);
	}  

	printf("cnt: %d\n", cnt);
	// 5�� ȣ�� �������� cnt �� ������ ���� (��������)


	for (int i = 0; i < 5; i++) {
		incFunc1();
	}
	printf("cnt: %d\n", cnt);
	// cnt �� 5�� ����

	return 0;
}
void incFunc(int cnt)		// Call by Value
{
	// cnt�� incFunc�� ���� ����
	cnt++;
}
// C ���� ������ ������ �� ����� ������(����)�� ������ ���� ���
// �Ű������� �������� �̸��� ���ٸ� ����� �Լ��� �Ű�����(���������� ���)
// ���ϴ� �� ��� ���ؼ� �Ű����� ���ְų� �ּҸ� �Ű������� ��� ��
// Call by Reference

// �������� �̿� 
void incFunc1()		
{
	cnt++;
}
// ������ �̿�  // Call by Reference
void incFunc(int* cnt) {
	(*cnt)++;  // �����͸� �̿��� �� ����
}