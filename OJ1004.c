#include<stdio.h>
int main(void)
{
	int x, g, s, b;
	scanf("%d", &x);
	g = x % 10;
	s = (x % 100) / 10;
	b = x / 100;
	printf("%d %d %d\n", g, s, b);
	return 0;
	/*˼·����λ�����Ǹ�������ʮ��������
	       ʮλ�����Ǹ�������һ�ٵ������ٳ���ʮ��
		   ��λ�����Ǹ�������һ��*/

}