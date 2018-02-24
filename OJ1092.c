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
	int m, n;
	scanf("%d %d",&m, &n);
	for (; m <= n; m++)
	{
		if (m == 1||m==0)
			continue;
		else if (prime(m) == 1)
			printf("%d ", m);
		else
			continue;
	}
	return 0;

}