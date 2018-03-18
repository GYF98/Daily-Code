#include<stdio.h>
int digitSum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	while (1)
	{
		if (digitSum(n) < 10)
		{
			printf("%d", digitSum(n));
			break;
		}
		else
			n = digitSum(n);
	}
	return 0;
}