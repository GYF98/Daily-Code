#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 400 != 0)
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	else
	{
		printf("Yes\n");
	}
	return 0;
}