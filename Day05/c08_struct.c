#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
#include <string.h>
/* ����ü */
// ����� ���� �ڷ���
// ���� �ڷ����� ��� ���� ���� �ڷ���

// ����ü ����
struct Human {	
	char name[10];			// ��� ����
	int age;				// ��� ����
};

int main(void) {
	// . : ��� ���� ������
	struct Human h;			// Human ����ü�� ���� h ����
	h.age = 30;				// h��ü�� ��� age�� 30�� �����Ѵ�.
	// h.name = "�����";	// ���� �߻�
	strcpy(h.name, "kimdahyun");	// ���ڿ��� ������ ���� ����� ����� �ʱ�ȭ�Ѵ�.
									// strcpy(), memcpy()

	char str[100] = "�����";
	printf("%s", str);

	char str2[100];
	//*str2 = "kim dahyun";		// ���� �߻�
	// �Ʒ��� ���� �� ���ھ� �־��ִ� �� ����
	/*str2[0] = 'k';
	str2[1] = 'i';
	..
	str2[10] = '/0';*/

	//printf("%s", str);
	printf("���� �̸��� %s�̰�, ���̴� %d �Դϴ�.",h.name ,h.age );
	return 0;
}