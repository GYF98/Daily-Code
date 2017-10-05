#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b;
	scanf("%lf", &a);
	b = fabs(a);
	printf("%.2lf", b);
	return 0;
}