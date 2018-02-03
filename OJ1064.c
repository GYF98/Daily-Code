#include<stdio.h>
int main(void)
{
	char a;
    while (a = getchar(), a != '@')
	{
		if (a >= 'A' && a <= 'Z')
		{
			a =a-'A'+'a';
		}
		if (a >= 'a' &&a <= 'y')
		{
			a =a+1;
		}
		else if (a == 'z')
		{
			a = 'a';
		}

		putchar(a);
	}
	return 0;
}