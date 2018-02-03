#include<stdio.h>
int main(void)
{
	int n, i=1;
	int sum = 0;
	int count=1;
	scanf("%d", &n);
	for (; i <= n-1; i++)
	{
		sum =(count + 1)*2;
		count = sum;
	}
	printf("%d", sum);
	return 0;
}