#include<stdio.h>
int main(void)
{
	int n, i, undercount , count0, uppercount;
	double num;
	undercount = count0 = uppercount = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		for (i = 1; i <= n; i++)
		{
			scanf("%lf", &num);
			if (num > 0)
				uppercount++;
			else if (num == 0)
				count0++;
			else
				undercount++;
		}
		printf("%d %d %d\n", undercount, count0, uppercount);
		undercount = count0 = uppercount = 0;
		scanf("%d", &n);
 	}
	return 0;
}