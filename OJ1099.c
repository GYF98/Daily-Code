#include<stdio.h>
int main(void)
{
	int count, n;
	count = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 1)
		{
			printf("0\n");
			continue;
		}
		while (1)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
				count++;
			}
			else if (n % 2 != 0)
			{
				n = n * 3 + 1;
				count++;
			}
			if (n == 1)
			{
				printf("%d\n", count);
				count = 0;
				break;
			}
		}

	}
	return 0;
}