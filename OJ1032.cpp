#include<stdio.h>
int main(void)
{
	int amount;
	double salary;
	scanf("%d", &amount);
	if (amount <= 10000)
	{
		salary = 1500 + amount*0.05;
		printf("%.2lf", salary);
	}
	else if (amount > 10000 && amount <= 50000)
	{
		salary = 1500 + 10000 * 0.05 + (amount - 10000)*0.03;
		printf("%.2lf", salary);
	}
	else
	{
		salary = 1500 + 10000 * 0.05 + 40000 * 0.03 + (amount - 50000)*0.02;
		printf("%.2lf", salary);
	}
	return 0;
}