#include <stdio.h>
int main(void)
{
	int a, b, c, d, e, S, V;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	S = (2 * a*c + 2 * b*c + 2 * a*b) + 8 * ((a - 2 * e)*d + (b - 2 * e)*d + (c - 2 * e)*d);
	V = a*b*c - (2 * (a - 2 * e)*d*(c - 2 * e)) - (2 * (b - 2 * e)*(c - 2 * e)*d) - (2 * (a - 2 * e)*(b - 2 * e));
	printf("%d %d", S, V);
	return 0;
}