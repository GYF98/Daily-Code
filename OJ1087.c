#include<stdio.h>
int main(void)
{
	int y, m, a, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%*6d%4d%2d%2d%*d", &y, &m, &a);//*��ʾ����
		printf("%d-%02d-%02d\n", y, m, a);//���ʮλ��û�����֣���0�滻
	}
}