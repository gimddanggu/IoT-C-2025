#include <stdio.h>
/* ����ü ������ */
/*
	����ü ������ ���ؼ� ����� �����ϴ� �����? . (������� ������)
	����ü �����͸� ���ؼ� ����� �����ϴ� �����? -> (ȭ��ǥ ������, Arrow ������)
*/
typedef struct score {
	int kor;
	int eng;
	int mat;
}Score;

int main()
{	
	Score s = { 100, 80, 85 };
	Score* ps = &s;

	printf("����: %d\n", ps->kor);
	printf("����: %d\n", ps->eng);
	printf("����: %d\n", (*ps).mat);



	return 0;
}
