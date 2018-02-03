#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c", &c);
	if (c < 'a'&&c >= 'A')
	{
		printf("%d", c - 64);
	}
	else
	{
		printf("%d", c - 96);
	}
	return 0;
}