#include <stdio.h>  
#define TRUE 1  
#define FALSE 0  

int main(void)
{
	int x, y, z, n, NoAnswer;

	scanf("%d", &n);
	NoAnswer = TRUE;

	for (x = 1; x <= 9; x++)   
		for (y = 1; y <= 9; y++)  
			for (z = 0; z <= 9; z++) 
			{
				if (x * 100 + y * 110 + z * 12 == n)
				{
					printf("%4d%4d%4d\n", x, y, z);
					NoAnswer = FALSE;
				}
			}

	if (NoAnswer == TRUE)
		printf("No Answer\n");

	return 0;
}