#include<stdio.h>
int main(void)
{
	int n, i, a, b;
	scanf("%d", &n);
	int sum[11] = { 0 };
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", sum[i]);
	}
	return 0;
}