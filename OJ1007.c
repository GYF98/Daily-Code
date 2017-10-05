#include <stdio.h>
int main(void)
{
	int m, n, x;
	scanf("%d%d", &m, &n);
	x = (n - m * 2) / 2;
	printf("%d %d", m - x, x);
	return 0;
}