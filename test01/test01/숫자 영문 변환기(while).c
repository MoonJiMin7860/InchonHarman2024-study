#include <stdio.h>
int main()
{
	printf("���ڸ� �Է��ϼ��� ������� �� �Դϴ�\n");
	char a = getch();
	while (1)
	{
		if (a == '1')
		{
			printf("one\n");
			a = getch(); // �ʱ�ȭ ��Ű��
			//getchar�ʹ� �ٸ� �༮

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
			printf("���� �� �Դϴ�\n");
			break;
		}
		printf("���α׷��� �����ϰ� �ʹٸ� �ƹ��ų� �Է��ϼ���\n");
	}
}