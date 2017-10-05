#include<stdio.h>
int main(void)
{
	int x, g, s, b;
	scanf("%d", &x);
	g = x % 10;
	s = (x % 100) / 10;
	b = x / 100;
	printf("%d %d %d\n", g, s, b);
	return 0;
	/*思路：个位数就是该数除以十的余数，
	       十位数就是该数除以一百的余数再除以十，
		   百位数就是该数除以一百*/

}