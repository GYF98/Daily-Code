#include<stdio.h>
int main(void)
{
	int m, e, c;
	scanf("%d %d %d", &m, &e, &c);
	printf("%.2f", (m + e + c) / 3.00);
	return 0;
}