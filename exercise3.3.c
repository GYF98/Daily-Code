#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("dec=%d;octal=%o;hex=%x\n", x, x, x );
	/*binary二进制的 octal八进制的 decimal十进制的 hexadecimal十六进制的*/
	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);
	return 0;

}