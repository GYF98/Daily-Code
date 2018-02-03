#include<stdio.h>
int main(void)
{
	char a;
	int lcount = 0;
	int dcount = 0;
	int ocount = 0;
	while (a = getchar(), a != '\n')
	{
		if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z'))
			lcount++;
		else if (a >= '0'&&a <= '9')
			dcount++;
		else
			ocount++;
	}
	printf("letter:%d\ndigit:%d\nother:%d\n", lcount, dcount, ocount);
	return 0;
}