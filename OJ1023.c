#include<stdio.h>
int main(void)
{
	char c;
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z')
		c += 'A' - 'a';
	/*ÀûÓÃASCIIÂëµÄ²î¾à*/
	printf("%c\n", c);
	return 0;
}