#include <stdio.h>
/* 문자열 */
int main(void) {

	char str[100] = "oragne";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%p\n", "orange");		// orange 의 주소 나타냄
	//printf("%c\n", "orange");		// 얘를 출력할 때는 왜 *가 필요하지?
									// 출력안됨
	printf("%c\n", *"orange");		// 정상 출력
	printf("%c\n", *("orange" + 1));		
	printf("%c\n", "orange"[2]);

	//"orange"[0] = 'O';				// 예외발생
										// 문자열 리터럴이기 때문에 수정불가
	/**"orange" = 'O';*/
	//printf("%s\n", str);

	return 0;
}