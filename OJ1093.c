#include<stdio.h>
#include<math.h>
int prime(int m)
{
	int i, count;
	count = 0;
	for (i = 2; i <= sqrt(m); i++)
	{
		if (m%i == 0)
			count++;
		else
			continue;
	}
	if (count == 0)
		return 1;
	else
		return 0;
}
int main(void)
{
	int m, i;
	scanf("%d", &m);
	for (i = 2; i <= m/2; i++)
	{
		if (prime(i) == 1&&prime(m-i)==1)
		{
			printf("%d %d\n", i, m - i);
		}
	}
	return 0;
}