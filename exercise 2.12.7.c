#include <stdio.h>
void one_three(void);//The function one_three
void two(void);//The function two
int main(void)
{
	printf("starting now:\n");
	one_three();//Use the function one_three
	two();//Use the function two
	printf("three\n");
	printf("done!");
	return 0;
}

void one_three(void)//Define the function one_three
{
	printf("one\n");
}

void two(void)//Define the function two
{
	printf("two\n");
}