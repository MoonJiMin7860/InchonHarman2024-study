//������
// ������: char, int, long
// char: 1byat ����, 
// �Ǽ���: float, double
#include <stdio.h>
main()
{
	//���� ����
	char vchar;
	int vint;
	long vlong;
	float vfloat;
	double vdouble;

	// ���� �ʱ�ȭ
	/* vchar = 'f';
	 vint = 10;
	 vlong = 4000000000;
	 vfloat = 3.14159265;
	 */
	 vdouble = 3.14159265;
	

	printf("\n�ȳ��ϼ���\n");
	printf("%8x\n %8x\n %8x\n %8x\n",&vchar, &vint, &vlong, &vfloat);
	scanf("%c %d %d %f",&vchar, &vint, &vlong, &vfloat);
	//��ȯ ���ڸ� �� �� �ִ�
	printf("  ���� ��� �׽�Ʈ : [%12d]\n", vint); 
	printf("  �Ǽ� ��� �׽�Ʈ : [%12.8f]\n", vfloat);
	printf("  ���� ��� �׽�Ʈ : [%12e]\n", vdouble);

	printf(" 8���� ��� �׽�Ʈ : [%12o]\n", vint);
	printf("16���� ��� �׽�Ʈ : [%12x]\n", vint);

	printf(" ���� ��� �׽�Ʈ : [%c]\n", vchar);
	printf(" ���� ���� ��� �׽�Ʈ : [%c]\n",vchar +1);
}