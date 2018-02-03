#include<stdio.h>
int main(void)
{
	int n, k, i;
	k = 0;
	scanf("%d", &n);
	for (i=0;i<=1000;i++)
	{
		if (n < 10)
		{
			printf("%d ", n);
			break;
		}
		else
		{
			k = n%10;
			n=n/10;
			printf("%d ", k);
		}
	}
	return 0;
}