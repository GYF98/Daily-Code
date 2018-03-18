#include<stdio.h>
int inverse(int n)
{
	int flag = 0;
	while (n > 0)//取余要取到最后一位
	{
		flag = n % 10 + flag * 10;
		n = n / 10;
	}
	return flag;
}
int main(void)
{
	int m, n;
	scanf("%d", &n);
	while (m = inverse(n), m != n)
	{
		printf("%d ",n);
		n = m + n;
	}
	printf("%d", n);
	return 0;
}