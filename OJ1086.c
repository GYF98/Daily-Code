#include<stdio.h>
int main(void)
{
	char a, b, c, temp;
	while ((scanf("%c%c%c", &a, &b, &c)) != EOF)
	{
		getchar();
		if (a > b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if (b > c)
		{
			temp = b; 
			b = c;
			c = temp;
		}
		if (a > b)//Ҫ��ֿ��ǵ�����ʱ���a��b���ܶ��Ѿ�����������
		{
			temp = a;
			a = b;
			b = temp;
		}
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}



