#include<stdio.h>
#include<math.h>
double funG(double x)
{
	x = x*x - 3 * x;
	return x;
}
double funF(double x)
{
	x = fabs(x - 3) + fabs(x + 1);//别用abs，会强制取整
	return x;
}
int main(void)
{
	double x;
	scanf("%lf", &x);
	x=funG(x);
	printf("%.2lf", funF(x));
	return 0;
}