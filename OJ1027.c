#include<stdio.h>
int main(void)
{
	int a, g, s, b;
	scanf("%d", &a);
	b = a / 100;
	s = a % 100 / 10;
	g = a % 10;
	if ((g*g*g + s*s*s + b*b*b) == a)
		printf("yes");
	else
		printf("no");
	return 0;


}