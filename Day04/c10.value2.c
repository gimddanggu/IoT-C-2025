#include <stdio.h>

void incFunc1();
void incFunc2();

int main(void) {
	for (int i = 0; i < 5; i++) {
		incFunc1();
		incFunc2();
	}
	//scnt++;		// static �����̹Ƿ� incFunc2())������ ��� ����
					// �ܺο��� ���� ������ ������ �����Ѵ�.
	return 0;
}


void incFunc1()
{
	int cnt = 0;					// ��������
									// �Լ� ȣ��� ������ �ʱ�ȭ
	cnt++;
	printf("cnt : %d\t", cnt);
}

void incFunc2()
{
	static int scnt = 0;			// ������������ ( ������ ����� ��� �ȿ����� ����)
									// �Լ� ���� ȣ��� �ѹ��� �ʱ�ȭ
	scnt++;
	printf("scnt: %d\n", scnt);
}