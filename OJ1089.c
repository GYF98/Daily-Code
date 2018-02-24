#include<stdio.h>  
int main(void)
{
	int n, i;
	double sum;
	scanf("%d", &n);
	sum = 1.0;
	for (i = 1; i <= n; i++)
	{
		sum = sum*i;
		while (sum >= 10)
		{
			sum = sum / 10;
		}
	}
	printf("%.0lf", sum);
}