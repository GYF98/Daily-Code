#include<stdio.h>  
int main(void)
{
	int i, n;

	scanf("%d", &n);
	for (i = 2; n>1; i++)
	{
		while (n%i == 0)
		{
			printf("%d", i);
			n = n / i;
			if (n == 1)
				printf("\n");
			else
				printf(" ");
		}
	}
	return 0;
}

 