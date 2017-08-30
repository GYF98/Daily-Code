#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("Give me the value of a,b,c seperated with whitespaces:\n");
	scanf("%d%d%d", &a, &b, &c);
	/*可以连续从用户获取多个值*/
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	return 0;
}