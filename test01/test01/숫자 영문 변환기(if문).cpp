// 3��. ������ ������
#include <stdio.h>
int main()
{
	printf("���ڸ� �Է��ϼ��� ������� �� �Դϴ�\n");

	/*
	char a;
	scanf_s("%d", &a);
	*/
	char a = getchar(); // no echo: Ű���� ������� �ʰ� ��ȯ

	if (a == '1')
	{
		printf("one");
	}
	else if (a == '2')
	{
		printf("Two");
	}
	else if (a == '3')
	{
		printf("Three");
	}
	else if (a == '4')
	{
		printf("Four");
	}
	else if (a == '5')
	{
		printf("Five");
	}
	else if (a == '6')
	{
		printf("Six");
	}
	else if (a == '7')
	{
		printf("Seven");
	}
	else if (a == '8')
	{
		printf("Eight");
	}
	else if (a == '9')
	{
		printf("Nine");
	}
	else if (a == '0')
	{
		printf("zero");
	}
	else
	{
		printf("���~!");
	}

}


