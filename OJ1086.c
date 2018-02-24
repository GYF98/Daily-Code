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
		if (a > b)//要充分考虑到，这时候的a，b可能都已经被交换过了
		{
			temp = a;
			a = b;
			b = temp;
		}
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}



