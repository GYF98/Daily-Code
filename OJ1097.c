#include<stdio.h>
#include<string.h>
int main(void)
{
	int sum, n, i;
	double ave;
	char str[255];
	gets(str);
	n = strlen(str);
	sum = 0;
	for (i = 0; i <n; i++)
	{
		if (str[i] == 'A')
			sum = sum + 95;
		else if (str[i] == 'B')
			sum = sum + 85;
		else if (str[i] == 'C')
			sum = sum + 75;
		else if (str[i] == 'D')
			sum = sum + 65;
		else
			sum = sum + 40;
	}
	ave = (sum*1.0) / n;
	printf("%.1lf", ave);
	return 0;
}