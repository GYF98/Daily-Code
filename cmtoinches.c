#include <stdio.h>
int main(void)
{
	float cm;
	float inches;
	printf("I can swich cm to inches,now please enter cm:");

	scanf("%f", &cm);

	inches = cm*2.54;
	printf("%.2f cm equals to %.2f inches", cm, inches);
	return 0;
}