#include<stdio.h>
int main()
{
	int t, i, a, b, j, k;
	scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%d", &a);
		{
			for (j = 1; j <= a; j++)
			{
				if ((j == 7) || (j % 10 == 7) || (j / 10 % 10 == 7) || (j / 100 % 10 == 7) || (j / 1000 % 10 == 7) || (j / 10000 % 10 == 7) || (j % 7 == 0))
					printf("%d ", j);
			}
		}
		printf("\n");
	}
	return 0;
}
