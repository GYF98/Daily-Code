#include<stdio.h>
int main(void)
{
	int sum, n, m, i, temp;
	i = 3;
	sum = 1;
	m = 1;
	scanf("%d", &n);
	for (; i <= n; i++)
	{
		temp = sum;
		sum = sum + m;
		m = temp;
	}
	printf("%d", sum);
	return 0;

}