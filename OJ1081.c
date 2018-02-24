#include<stdio.h>
int main(void)
{
	int t, n, i, j, k, sum, num;
	int a[256] = { 0 };
	scanf("%d", &t);
	sum = 0;
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		for (j = 1; j <= n; j++)
		{
			scanf("%d", &num);
			sum = sum + num;
		}
		a[i] = sum;
		sum = 0;
	}
	for (k = 1; k <= t; k++)
		printf("%d\n", a[k]);
	return 0;
}