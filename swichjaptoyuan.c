#include<stdio.h>
int main(void)
{
	float jap;
	float yuan;

	printf("Please enter jap:");

	scanf("%f",&jap);

	yuan = jap / 16.25;

	printf("%.2f jap equals to %.2f yuan", jap, yuan);
	return 0;
}