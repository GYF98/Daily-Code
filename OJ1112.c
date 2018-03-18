#include<stdio.h>
void convert(int n)
{
	if (n > 0)
	{
		convert(n / 2);
		printf("%d", n % 2);
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	convert(n);
}