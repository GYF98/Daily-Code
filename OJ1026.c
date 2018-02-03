#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c", &c);
	if (c >= 65 && c <= 90)
	{
		printf("upper");
	}
       
	else if (c >= 97 && c <= 122)
    {
			printf("lower");
    }
		
	else if (c >= 48 && c <= 57)
    {
			printf("digit");
    }

		
	else
		printf("other");
	return 0;
}