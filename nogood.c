#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	n = 5;
	n2 = n*n;
	n3 = n2*n;

	printf("n=%d,", n);
	printf("n squared=%d,", n2);
	printf("n cube=%d\n", n3);

	printf("n=%d,n squared=%d,n cube=%d", n,n2, n3);
	//Two ways two show the same result.Easy is better.
}
