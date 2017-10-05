#include <stdio.h>
int main(void)
{
	int n;
	double amount;
	scanf("%d", &n);
	if (n < 30)
	{
		amount = n * 50;
	}
	else
	{
		amount = n * 48;
	}
	printf("%.2lf", amount);
	return 0;
}