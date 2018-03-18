#include<stdio.h>
int common(int x, int y)
{
	if (x > y)
	{
		common(x / 2, y);
	}
	else if (x < y)
	{
		common(x, y / 2);
	}
	else if (x == y)
	{
		return x;
	}
}
int main(void)
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d", common(x, y));
	return 0;
}