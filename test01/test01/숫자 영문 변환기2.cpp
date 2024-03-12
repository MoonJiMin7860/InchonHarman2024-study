#include <stdio.h>
int main()
{
	printf("숫자를 입력한다면 해당 영단어를 안내해드립니다\n");
	char c = getch(); //no echo: 키값을 출력하지 않고 반환

	if (c == 1)
	{
		printf("1: one");
	}
	else if(c==2)
}