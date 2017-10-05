#include <stdio.h>
#define PI 3.14159
int main(void)
{
	int r;
	scanf("%d", &r);
	printf("%.2f %.2f", 2 * PI*r, PI*r*r);
	return 0;
}