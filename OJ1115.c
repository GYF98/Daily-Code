#include<stdio.h>
int main(void)
{
	int n, i, min, minsign;
	int a[1000];
	scanf("%d", &n);
	min = minsign = 99999;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < min)
		{
			min = a[i];
			minsign = i;
		}
	}
	printf("%d %d", min, minsign);
	return 0;
}