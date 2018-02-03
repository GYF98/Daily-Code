#include <stdio.h>
int main(void)
{
	char a, b, c;
	scanf("%c%*c%c%*c%c", &a, &b, &c);
	if (a > b&&a > c)
	{
		printf("%c\n", a);
	}
	else if (b > a&&b > c)
	{
		printf("%c\n", b);
	}
	else if (c > a&&c > b)
	{
		printf("%c\n", c);
	}
	return 0;
}