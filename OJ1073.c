#include<stdio.h>
int main(void)
{
	int n,k;
	double sum = 0.0;
	scanf("%d", &k);
	n = 1;
	for (;; n++)
	{
		sum = sum + (1.0 / n);
		if (sum > k)
			break;
	}
	printf("%d", n);
	return 0;
}