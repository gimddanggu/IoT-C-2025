#include <stdio.h>

void main123() {
// int main(void) 대신 void main()으로 쓸 수 있음
// 단, 표준은 아님

	// 변수
	// 파이썬에서는 따로 타입명(자료형) 지정하지 않아도 됨
	// C에서는 변수 선언 시 `무조건` 타입명 지정
	// 자료형은 데이터 타입의 크기를 알려주는 것
	// 일반적으로 int 4byte float 8byte..
	// 데이터 크기를 알아야 메모리에 변수 크기 만큼 값을 할당할 수 있다.


	/* 1. 변수 선언과 초기화 */
	int num;	// 변수 선언
	num = 10;	// 변수 초기화

	/*
	int num = 10 
	위와 같이 선언과 동시에 초기화도 가능
	*/
	
	 //여러 개의 변수 동시에 선언, 초기화
	int num1, num2, num3;
	num1, num2, num3 = 1, 2, 3;
	// 단, 같은 자료형일 경우에만 가능
	// int와 float 동시에 초기화 안됨

	/*
	* 선언과 초기화 한번에 할 경우 한 줄에 다 나타낼 수 없다.
	* int num = 1, int num2 = 3;
	*/

	char ch = 'A';		// 문자 타입의 변수 선언
	printf("num의 값 : %d\n", num);
	printf("num1의 값 : %d\n", num1);
	printf("num2의 값 : %d\n", num2);
	printf("ch의 값 : %s\n", ch);



	/* 2. signed와 unsigned */

	// 기본적으로 signed 형태
	signed char ch = 0; // -128 ~ 127
	unsigned char ch1 = 0; // 0 ~ 255

	unsigned int num;
	num = 123456;
	printf("num: %d\n", num);
	num = -1;
	printf("num: %d\n", num);
	// unsigned int의 최대값인 4294967295 출력
	// c에서 정수는 2의 보수 방법으로 저장
	printf("num: %u\n", num);


	/* 소수 표현 시 float 과 double 의 정밀도 확인 */
	float f = 1.123456789123456789f;  // float 값은 'f' 접미사를 붙여 명확하게 표현
	double d = 1.123456789123456789;

	// float 출력 (float는 %f 사용)
	printf("float  (%%f) : %f\n", f);
	printf("float  (%%.15f) : %.15f\n", f); // 소수점 15자리까지 출력

	// double 출력 (double은 %lf 사용)
	printf("double (%%lf) : %lf\n", d);
	printf("double (%%.15lf) : %.15lf\n", d); // 소수점 15자리까지 출력

	/*
	출력결과
	float  (%f) : 1.123457
	float  (%.15f) : 1.123456835746765
	double (%lf) : 1.123457
	double (%.15lf) : 1.123456789123457
	*/



	/* 3. 문자열 저장 */

	char str[10] = "banana";		// 문자타입 배열 선언과 초기화

	printf("str: %s\n", str);
	printf("str[0], %c\n", str[0]);
	printf("str[1]: %c\n", str[1]);
	printf("str[5], %c\n", str[5]);
	printf("str[6]: %c\n", str[6]);	// 파이썬에서는 out of range 오류 발생
	printf("str[6]: %s\n", str[6]);	// 파이썬에서는 out of range 오류 발생
	// 문자열을 배열에 넣을 때에는 마지막에 null이 들어감
	// 따라서 문자열을배열에 넣을때는 최소 문자열길이 +1 의 배열 길이가 필요함

	char str2[5] = "apple";
	printf("str2: %s\n", str2);
	/*
	결과
	str2: apple儆儆儆儆儆儆儆儆儆儆儆??y?
	c 언어에서 문자열 끝(\0)을 인식하지 못해 출력결과가 이상하게 나옴
	따라서 문자열을 배열에 저장할 경우 적절한 크기를 지정해줘야 한다.
	c 언어에서는 문자열 끝을 \0(null)로 인식한다.

	// 참고
	파이썬에서는 문자열을 문자열 배열이 아닌 str객체로 관리하기 때문에
	\0 문자가 따로 저장되지 않음
	*/


	// 배열 크기 문자열+1 하면 원하는 결과 출력
	char str3[6] = "apple";
	printf("str3: %s\n", str3);
	str2[0] = 'A';
	printf("str3: %s\n", str3);

	/* 4. 배열 */
	// `동일한 자료형`을 연속적으로 저장할 수 있는 공간
	// 반복문 for 를 이용해서 제어해야 한다.
	// 배열의 이름은 배열의 시작 주소
	// 배열의 이름 = 배열의 0번방 주소

	int ary[5] = { 1, 2, 3, 4, 5 }; // 배열의 초기화
									// 정수형 배열 선언

	// 문자열이 아닌 배열은 널 문자 없음

	printf("ary[0]: %d", ary[0]);
	ary[3] = 400;
	printf("ary[3]: %d", ary[0]);

	
	// 배열의 값 출력
	for (int i = 0; i < 5; i++) {
		printf("ary[0]: %d", ary[i]);
	}
	// for 반복문 기본형태 for(초기값; 범위; 증분)



	/* 5. 상수*/

	int r = 10;
	const double pi = 3.14;
	// 값을 상수화 시킨 것이 아니라
	// 변수 명 자체를 상수화 시킨 것임
	// `변수 명으로 변경 시키는 것을 허락하지 않겠다.` 라는 뜻
	
	double cf = 2 * pi * r;

	// 포인트로 접근하면 변경 가능함
	double* dp = &pi;
	*dp = 4.0;

	printf("원 둘레 : % .2lf\n", cf);
	printf("pi : % .2lf\n", pi);

}