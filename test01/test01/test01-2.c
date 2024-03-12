//연산자
// 정수형: char, int, long
// char: 1byat 정수, 
// 실수형: float, double
#include <stdio.h>
main()
{
	//변수 선언
	char vchar;
	int vint;
	long vlong;
	float vfloat;
	double vdouble;

	// 변수 초기화
	/* vchar = 'f';
	 vint = 10;
	 vlong = 4000000000;
	 vfloat = 3.14159265;
	 */
	 vdouble = 3.14159265;
	

	printf("\n안녕하세요\n");
	printf("%8x\n %8x\n %8x\n %8x\n",&vchar, &vint, &vlong, &vfloat);
	scanf("%c %d %d %f",&vchar, &vint, &vlong, &vfloat);
	//변환 문자만 들어갈 수 있다
	printf("  정수 출력 테스트 : [%12d]\n", vint); 
	printf("  실수 출력 테스트 : [%12.8f]\n", vfloat);
	printf("  지수 출력 테스트 : [%12e]\n", vdouble);

	printf(" 8진수 출력 테스트 : [%12o]\n", vint);
	printf("16진수 출력 테스트 : [%12x]\n", vint);

	printf(" 문자 출력 테스트 : [%c]\n", vchar);
	printf(" 문자 연산 출력 테스트 : [%c]\n",vchar +1);
}