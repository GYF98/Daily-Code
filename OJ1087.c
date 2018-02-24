#include<stdio.h>
int main(void)
{
	int y, m, a, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%*6d%4d%2d%2d%*d", &y, &m, &a);//*表示跳过
		printf("%d-%02d-%02d\n", y, m, a);//如果十位上没有数字，用0替换
	}
}