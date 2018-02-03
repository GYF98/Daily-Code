#include<stdio.h>
int main(void)
{
	int M, k, day;
	day = 0;
	scanf("%d %d", &M, &k);
	while (M != 0)
	{
		M = M - 1;
		day++;
		if (day%k == 0)
		{
			M = M + 1;
		}
		else
			continue;
	}
	printf("%d", day);
	return 0;
}