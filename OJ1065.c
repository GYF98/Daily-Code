#include<stdio.h>
int main(void)
{
	char a;
	int count = 0;
	while (a=getchar(), a != '\n')
	{
		if (a >= '0'&&a <= '9')
			count++;
		else
			continue;
	}
	printf("%d", count);
	return 0;
}