#include <stdio.h>
/* ���ڿ� */
int main(void) {

	char str[100] = "oragne";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%p\n", "orange");		// orange �� �ּ� ��Ÿ��
	//printf("%c\n", "orange");		// �긦 ����� ���� �� *�� �ʿ�����?
									// ��¾ȵ�
	printf("%c\n", *"orange");		// ���� ���
	printf("%c\n", *("orange" + 1));		
	printf("%c\n", "orange"[2]);

	//"orange"[0] = 'O';				// ���ܹ߻�
										// ���ڿ� ���ͷ��̱� ������ �����Ұ�
	/**"orange" = 'O';*/
	//printf("%s\n", str);

	return 0;
}