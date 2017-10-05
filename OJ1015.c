#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	if (x1 > x2)
	{
		printf("%7.2lf%7.2lf", x1, x2);
	}
	else
	{
		printf("%7.2lf%7.2lf", x2, x1);
	}
	return 0;
		

}