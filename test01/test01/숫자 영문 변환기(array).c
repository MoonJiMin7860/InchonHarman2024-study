#include <stdio.h>

int test01();		//함수의 prototype
void test02(int a); //문자열과 문자배열

main()
{
	//test01;
	test02(1);
}
int test01()
{
	char* str[] = { "Zero","one","Two","Theree","Four","Five","Six","Seven","Eight","Nine" };
	//문자열 포인터
	printf("숫자를 입력하세요!\n");
	int n = 1;
	while (n)
	{
		printf(">");
		char a = getch();
		int m = a - 0x30; //Ascll ->num(Ascii 값을 넘버값으로 교체)
		printf("%c: %s\n", a, str[m]);

	}
}

void test02(int a)
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[4]: 'o' ca[5]: \o
	for (int i = 0; i < 10; i++) //3가지 요소 입력 , 0~5까지 i값이 변동
	{
		printf("ca[%d]: %c(%02x)\n", i, ca[i], ca[i]);
	}
	ca[2] -= 1;
	ca[3] -= 1;
	for (int i = 0; i < 10; i++)
	{
		printf("ca[%d]: %c(%02x)\n", i, ca[i], ca[i]);
	}
}
