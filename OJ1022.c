#include <stdio.h>
int main(void)
{
	int x, y, z, max, upper, lower;
	scanf("%d %d %d", &x, &y, &z);
	if ((x > y) && (x > z))
	{
		max = x;
		if (y > z)
		{
			upper = y;
			lower = z;
			printf("%d %d %d", max, upper, lower);
		}
		else
		{
			upper = z;
			lower = y;
			printf("%d %d %d", max, upper, lower);
		}

	}
	if ((y > x) && (y > z))
	{
		max = y;
		if (x > z)
		{
			upper = x;
			lower = z;
			printf("%d %d %d", max, upper, lower);
		}
		else
		{
			upper = z;
			lower = x;
			printf("%d %d %d", max, upper, lower);
		}
	}
	if ((z > x) && (z > y))
	{
		max = z;
		if (x > y)
		{
			upper = x;
			lower = y;
			printf("%d %d %d", max, upper, lower);
		}
		else
		{

			upper = y;
			lower = x;
			printf("%d %d %d", max, upper, lower);
		}
	}
	return 0;
}