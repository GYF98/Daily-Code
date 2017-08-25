#include <stdio.h>
void result(void);
int main(void)
{
	float Chinese, Math, English, Science, average;

	printf("This program can easily calculate your average grade.\n");

	printf("The full mark is 100,science grade is 300.\n");

	printf("Please enter your Chinese grade:");

	scanf("%f", &Chinese);

	printf("Please enter your Math grade:");

	scanf("%f", &Math);

	printf("Please enter your English grade:");

	scanf("%f", &English);

	printf("Please enter your Science grade:");

	scanf("%f", &Science);

	average = (Chinese + Math + English + Science) / 6;

	result();

	printf("%.2f", average);

	return 0;

}

void result(void)
{
	printf("Your average grade is:");

}