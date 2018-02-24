#include<stdio.h>
#include<string.h>
int vowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		return 1;
	}
	else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return 1;
	}
	else
		return 0;
}
int main(void)
{
	char str[1001];
	gets(str);
	int i, count;
	count = 0;
	for (i = 0; i <= strlen(str); i++)
	{
		if (vowel(str[i]) == 1)
			count++;
		else
			continue;
	}
	printf("%d\n", count);
	return 0;
}