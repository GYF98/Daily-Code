#include <stdio.h>
int main(void)
{
	int a, b, d, n;
	scanf("%d%d%d", &a, &b, &d);
	n = (b - a) / d + 1;
	printf("%d", (a + b)*n / 2);
	return 0;


}