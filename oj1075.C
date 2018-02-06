#include<stdio.h>
int main(void)
{
	int cost, count, n, m, w, k;
	count = 0;
	                           
	scanf("%d %d", &n, &cost);
	{
		for (m = 0; m * 3 <= cost; m++)
		{
			for (w = 0; w * 2 <= cost; w++)
			{
				for (k = 0; k <= cost; k++)
				{
					if (m * 3 + w * 2 + k == cost&& m + w + k == n)
					{
						printf("%d %d %d\n", m, w, k);
						count++;
					}
				}
			}
		}
	}
	if (count == 0)
		printf("No answer");
	return 0;
}