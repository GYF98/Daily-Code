#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a)==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}