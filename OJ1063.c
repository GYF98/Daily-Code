#include<stdio.h>
int main(void)
{
	int m, n, d, k;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		k = m;
		while (k%n != 0)
		{
			k = k + m;
		}
		while (d = m%n, d != 0)
		{
			if (n > d)
			{
				m = n;
				n = d;
			}
			else
			{
				m = d;
			}
		}
		printf("%d ", n);
		printf("%d ", k);
	}
	else if (m < n)
	{

		k = n;
		while (k%m != 0)
		{
			k = k + n;
		}
		while (d = n%m, d != 0)
		{
			if (d > m)
			{
				n = d;
			}
			else
			{
				n = m;
				m = d;
			}
		}
		printf("%d ", m);
		printf("%d ", k);
	}
	else
		printf("%d %d", m,m);

	return 0;
}