#include<stdio.h>
int main(void)
{
	int grade;
	scanf("%d", &grade);
	if (grade >= 80)
	{
		if (grade >= 90)
		{
			printf("A");
		}
		else
		{
			printf("B");
		}
	}
	else if (grade < 80)
	{
		if (grade >= 70)
		{
			printf("C");
		}
		else if (grade < 70)
		{
			if (grade >= 60)
			{
				printf("D");
			}
			else
			{
				printf("E");
			}
		}
	}
	return 0;
}