#include <stdio.h>
/* 2���� �迭 */

int main(void) {
	int ary[4] = { 1, 2, 3, 4 };

	int ary2[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	int ary3[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	int ary4[3][2] = { 1, 2, 3, 4, 5, 6 };
	int ary5[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", ary3[i][j]);
		}
	}

	printf("\n\n");


	/* 4���� �л�, 3������ ������ ����� ���Ͻÿ�. */
	int score[4][3] = { { 63, 78, 90 }, { 96, 95, 92 }, { 45, 100, 95 }, {52, 61, 75} };
	int sum[] = { 0, 0, 0, 0 };
	double avg[] = { 0.0, 0.0, 0.0, 0.0 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i] += score[i][j];
		}
		printf("%d\n", sizeof(score[0][1]));
		avg[i] = sum[i] / 3.0;
	}

	for (int idx = 0; idx < 4; idx++)
	{
		printf("�л� %d�� ������ %d, ����� %.2lf �Դϴ�.\n", idx, sum[idx], avg[idx]);
	}

	return 0;
}