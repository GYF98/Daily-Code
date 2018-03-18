#include<stdio.h>
int count = 0;

int fib(int k)
{
	count++;
	if (k == 1 || k == 2)
		return 1;
	else
		return fib(k - 1) + fib(k - 2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	printf("递归调用了%d次", count);
	return 0;
}

