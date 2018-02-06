#include<stdio.h>
int main(void)
{
	int high, up, down, day, meter;
	scanf("%d %d %d", &high, &up, &down);
    day = 1;
	meter = 0;
	for (;; day++)
	{
		if (meter + up >= high)
			break;
		else
			meter = meter + up - down;
	}
	printf("%d", day);
	return 0;
}