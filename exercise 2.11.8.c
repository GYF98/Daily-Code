#include <stdio.h>
int main(void)
{
	int a, b;

	a = 5;
	b = 2; //Now a=5 b=2
	b = a; //Now a=5 b=5
	a = b; //Now a=5 b=5
	printf("%d %d\n", b, a);
	return 0;
}