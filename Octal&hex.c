#include <stdio.h>
int main(void)
{
	int x;
	printf("Please enter the number you want to swich:");
	scanf("%i",&x);
	printf("dec=%d,octal=%o,hex=%x\n", x, x, x);
	printf("dec=%d,octal=%#o,hex=%#x\n", x, x, x);
	return 0;
}