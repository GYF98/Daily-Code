#include<stdio.h>
int main(void)
{
	int m, n, d;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		while (d = m%n, d!= 0)
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
		printf("%d", n);
	}
	else if (m < n)
	{
		while (d = n%m,d!= 0)
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
		printf("%d", m);
	}
	else
		printf("%d", m);
	
	return 0;
}