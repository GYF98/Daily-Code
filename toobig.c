#include <stdio.h>
int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);

	/*对于int类型的常量，它的取值范围在-2147483647到+2147483647之间，
	对于无符号常量unsigned int，取值范围内就是从0到4294967295，可以理解为牺牲负数来扩大正数的可表示范围*/
	
	printf("%u %u %u\n", j, j + 1, j + 2);
	return 0;
	
	/*对于超出int这个类型取值范围的数，将回到原点重新开始计数*/
}