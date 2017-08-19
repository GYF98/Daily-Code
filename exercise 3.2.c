#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it right：");
	printf("%d minus %d is %d\n", ten, two, ten - two);
	printf("Doing it wrong：");

	printf("%d minus %d is %d\n", ten);
	/*后两个%d没有被赋值，这里使用的是内存中的任意值，每次运行调试结果都不同*/
	return 0;
}