#include <stdio.h>
#include <math.h>
int main(void)
{
	double deposit, n;
	scanf("%lf %lf", &n, &deposit);
	printf("%.6lf", deposit*pow(1.0225,n));
	return 0;
}