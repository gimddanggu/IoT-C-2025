#include <stdio.h>

/* getchar()를 이용해서 문자열 받을 수 있는 함수 만들기*/
void myStrInput(char*, int);

int main(void) {

	char str[100];
	int size = sizeof(str);
	myStrInput(str, size);
	printf("입력한 문자열 :%s\n", str);


	return 0;
}

void myStrInput(char* str_arr, int size)
{
	char s;
	int i = 0;
	printf("문자열을 입력해주세요 > ");
	while (1)
	{

		s = getchar();
		str_arr[i] = s;
		// i++위치는 if문 다음 if문 이전 정상작동한다.
		// while 문이 끝나고 마지막 문자를 null로 바꿔주기 때문이다.
		i++;
		// 엔터를 눌러 입력을 종료했을 때,
		// 최대 입력개수 100을 넘었을 때 종료
		if (s == '\n' || i >= (size - 1))	break;
		
	}
	str_arr[i] = NULL;	// 문자열의 끝을 표시하기 위해 마지막 인덱스에 NULL 문자 삽입


}

