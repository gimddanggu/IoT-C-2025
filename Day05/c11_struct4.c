#include <stdio.h>

struct human {
	char name[100];
	int age;
};
//�ڷ����� ���ο� �̸�(��Ī, alias)�� �ο��ϴ� Ű����                       
typedef int int32mt;

typedef struct myst {
	int a;
	int32mt b;
}Mystruct;
// struct mystruct ��� Mystruct �� �� ����

// ����ü ����� ���ÿ� �ʱ�ȭ �ϱ�
int main()
{
	struct human h = {"�����", 100 };
	struct human h2 = { "����", 100 };
	struct human h = { "ȫ�浿", 100 },
		h2 = { "�̼���", 110 },
		h3 = { "������", 200 };
	
	int n1 = 100, n2 = 200, n3 = 300;

	return 0;
}