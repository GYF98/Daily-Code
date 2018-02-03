#include<stdio.h>

int main(void)
{
	int n, m;
	scanf("%d", &n);
	double sum = 0.0;
	double flag = 1.0;
	for (m = 1; sum <= n; m++)
	{
		sum = sum + flag;
		flag = flag*(m + 1);
		if (sum >= n)
			break;
	}
	printf("m<=%d", m - 1);
	return 0;

}