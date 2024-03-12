#include <stdio.h>
int main()

{
	printf("숫자를 입력하세요!\n");
	int n = 1;
		while (n)
		{
			printf(">");
			char a = getch();
			switch (a)
			{
			case '1': printf("%c: one\n", a); break;
			case '2': printf("%c: Two\n", a); break;
			case '3': printf("%c: Three\n", a); break;
			case '4': printf("%c: Four\n", a); break;
			case '5': printf("%c: Five\n", a); break;
			case '6': printf("%c: six\n", a); break;
			case '7': printf("%c: seven\n", a); break;
			case '8': printf("%c: Eight\n", a); break;
			case '9': printf("%c: nine\n", a); break;
			case '0': printf("%c: zero\n", a); break;

			}
		}
}