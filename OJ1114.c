#include<stdio.h>
int main(void)
{
	int i, n;
	int num[10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = n-1; i >= 0; i--)
	{
		printf("%4d", num[i]);
	}
	return 0;
}