#include<stdio.h>
int main(void)
{
	int a, b, i, temp, j, n;
	scanf("%d", &n);
	temp = 1;
	for (j = 1; j <= n; j++)
	{
		scanf("%d %d", &a, &b);
		for (i = 1; i <= b; i++)
		{
			temp = temp*a;
			while (temp >= 1000)
			{
				temp = temp % 1000;
			}
		}
		printf("%d\n", temp);
		temp = 1;
	}	
	return 0;
}