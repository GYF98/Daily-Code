#include<stdio.h>
int main(void)
{
	int n, num, i, sum;
	sum = 1;
	while ((scanf("%d", &n))!= EOF)
	{
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &num);
			if (num % 2 != 0)
			{
				sum = sum * num;
			}
		}
		printf("%d\n", sum);
		sum = 1;
	}
	return 0;
	
}