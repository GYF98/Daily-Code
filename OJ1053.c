#include<stdio.h>

int main(void)
{
	int i;
	double x, flag, sum, deno, numerator;

	scanf("%lf", &x);

	sum = 0.0;
	deno = 1.0;
	numerator = x;
	flag = 1.0;

	for (i = 1; i <= 10; i++)
	{
		sum += numerator * flag / deno;
		flag = -flag;
		numerator = numerator * x * x;
		deno = deno *(2 * i) * (2 * i + 1);
	}

	printf("%.3f\n", sum);
	return 0;
}