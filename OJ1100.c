#include<stdio.h>
long fact(long n)
{
	long a, i;
	a = 1;
	for (i = 1; i <= n; i++)
		a = a*i;
	return a;
}
int main(void)
{
	long m, k, a, b, c;
	scanf("%ld %ld", &m, &k);
	a = fact(m);
	b = fact(k);
	c = fact(m - k);
	printf("%ld", a / (b*c));
	return 0;
}