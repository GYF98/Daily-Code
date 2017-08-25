#include <stdio.h>
void result(void);
int main(void)
{
	float Chinese, Math, English, Science, average;

	printf("Please enter your Chinese grade:");

	scanf("%f", &Chinese);

	printf("Please enter your Math grade:");

	scanf("%f", &Math);

	printf("Please enter your English grade:");

	scanf("%f", &English);

	printf("Please enter your Science grade:");

	scanf("%f", &Science);

	average = (Chinese + Math + English + Science)/ 4;

	result();

	printf("%.2f", average);

	return 0;

}

void result(void)
{
	printf("Your average grade is:");

}