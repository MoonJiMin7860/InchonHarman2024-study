#include <stdio.h>
int main()
{
	printf("숫자를 입력하세요 재미있을 것 입니다\n");
	char a = getch();
	while (1)
	{
		if (a == '1')
		{
			printf("one\n");
			a = getch(); // 초기화 시키기
			//getchar와는 다른 녀석

		}
		else if (a == '2')
		{
			printf("Two\n");
			a = getch();
		}
		else if (a == '3')
		{
			printf("Three\n");
			a = getch();
		}
		else if (a == '4')
		{
			printf("Four\n");
			a = getch();
		}
		else if (a == '5')
		{
			printf("Five\n");
			a = getch();
		}
		else if (a == '6')
		{
			printf("Six\n");
			a = getch();
		}
		else if (a == '7')
		{
			printf("Seven\n");
			a = getch();
		}
		else if (a == '8')
		{
			printf("Eight\n");
			a = getch();
		}
		else if (a == '9')
		{
			printf("Nine\n");
			a = getch();
		}
		else if (a == '0')
		{
			printf("zero\n");
			a = getch();
		}
		else
		{
			printf("상정 외 입니다\n");
			break;
		}
		printf("프로그램을 종료하고 싶다면 아무거나 입력하세요\n");
	}
}