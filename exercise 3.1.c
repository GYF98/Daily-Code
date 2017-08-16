#include<stdio.h>
int main(void)
{
	float weight;
	/*float，浮点变量，处理带有小数的数字*/
	
	float value;

	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf("%f",&weight);
	/* scanf()为程序提供键盘输入，%f是数据（可含小数），&weight将这个数据赋予名为weight的变量，&指示weight的位置*/ 

	value = 770 * weight * 14.5833;
	/*假设每盎司铑770美元，英镑兑盎司的比例为1:14.5833*/
	
	printf("Your weight in rhodium is worth $%.2f\n", value);
	/*%.nf %f是数据本身，前面的.2  .3  .4  .一个亿表示精确到小数点后234一个亿位*/
	
	printf("You are easily worth that! If rhodium price drop,\n");
	printf("eat more to maintain your value.\n");
	return 0;

}