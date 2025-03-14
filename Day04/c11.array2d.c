#include <stdio.h>
/* 2차원 배열 */

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


	/* 4명의 학생, 3과목의 총점과 평균을 구하시오. */
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
		printf("학생 %d의 총점은 %d, 평균은 %.2lf 입니다.\n", idx, sum[idx], avg[idx]);
	}

	return 0;
}