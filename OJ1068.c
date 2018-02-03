#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int number=0;
	int temp = 1;
	int i,j,x;
	for (i = n; i >= 1; i--)
	{
		scanf("%d", &x);
		if (i == 1)
		{
			if (x == 1)
			{
				temp = 1;
				number = number + temp;
				break;
			}
			else
			{
				temp = 0;
				number = number + temp;
				break;
			}
		}
		else if (x == 1)
		{
			for (j = 1; j <= i-1; j++)
			{
				temp = temp * 2;
			}
		}
		else
		   temp = 0;
		number = number + temp;
		temp = 1;
	}
	printf("%d", number);
	return 0;
}