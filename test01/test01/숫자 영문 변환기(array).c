#include <stdio.h>

int test01();		//�Լ��� prototype
void test02(int a); //���ڿ��� ���ڹ迭

main()
{
	//test01;
	test02(1);
}
int test01()
{
	char* str[] = { "Zero","one","Two","Theree","Four","Five","Six","Seven","Eight","Nine" };
	//���ڿ� ������
	printf("���ڸ� �Է��ϼ���!\n");
	int n = 1;
	while (n)
	{
		printf(">");
		char a = getch();
		int m = a - 0x30; //Ascll ->num(Ascii ���� �ѹ������� ��ü)
		printf("%c: %s\n", a, str[m]);

	}
}

void test02(int a)
{
	char ca[] = "Hello"; // ca[0]: 'H' ... ca[4]: 'o' ca[5]: \o
	for (int i = 0; i < 10; i++) //3���� ��� �Է� , 0~5���� i���� ����
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
