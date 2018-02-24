#include<stdio.h>
int main(void)
{
	int i, n, number;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%*6d%d", &number);
		number = 600000 + number;
		printf("%d\n", number);
	}
	return 0;
}