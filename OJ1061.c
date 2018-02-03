#include<stdio.h>

int main(void)
{
	int n, temp, base;

	scanf("%d", &n);
	temp = n;
	base = 1;

	while (temp > 9) 
	{
		temp = temp / 10; 
		base = base*10; 
	}

	while (base > 0)
	{

		printf("%d ", n / base); 
		n =n % base;    
		base =base / 10; 
	}
	return 0;
}