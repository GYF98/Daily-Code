#include<stdio.h>
int main(void)
{
	int n=0,max=-1;
	while (n >= 0)
	{
		scanf("%d", &n);
		if (n > max)
			max = n;
		else
			continue;
	}
	printf("%d", max);
	return 0;
}