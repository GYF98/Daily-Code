#include <stdio.h>
int main(void)
{
	int USD;
	double CNY;
	scanf("%d", &USD);
	CNY = USD*6.5573;
	printf("%.2f", CNY);
	return 0;
}