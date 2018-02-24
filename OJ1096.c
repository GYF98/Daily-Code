#include<stdio.h>
int narcissus(int m, int n)
{
	int g, s, b, count;
	count = 0;
	for (; m <= n; m++)
	{
		b = m / 100;
		s = m % 100 / 10;
		g = m % 10;
		if (b*b*b + s*s*s + g*g*g == m)
		{
			if (count == 0)
			{
				printf("%d", m);
				count++;
			}
			else
				printf(" %d", m);
		}
	}
	if (count == 0)
		printf("no");
	printf("\n");
}
int main(void)
{
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF)
	{
		narcissus(m, n);
	}
	return 0;
}
