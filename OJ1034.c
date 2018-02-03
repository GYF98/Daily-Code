#include<stdio.h>
int main(void)
{
	double amount;
	scanf("%lf", &amount);
	if (amount < 500)
		amount = amount*1.00;
	else if (amount < 1000)
		amount = amount*0.95;
	else if (amount < 3000)
		amount = amount*0.90;
	else if (amount < 5000)
		amount = amount*0.85;
	else
		amount = amount*0.80;
	printf("%.2lf", amount);
	return 0;

}