#include<stdio.h>
int main(void)
{
	float weight;
	/*float������������������С��������*/
	
	float value;

	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf("%f",&weight);
	/* scanf()Ϊ�����ṩ�������룬%f�����ݣ��ɺ�С������&weight��������ݸ�����Ϊweight�ı�����&ָʾweight��λ��*/ 

	value = 770 * weight * 14.5833;
	/*����ÿ��˾��770��Ԫ��Ӣ���Ұ�˾�ı���Ϊ1:14.5833*/
	
	printf("Your weight in rhodium is worth $%.2f\n", value);
	/*%.nf %f�����ݱ���ǰ���.2  .3  .4  .һ���ڱ�ʾ��ȷ��С�����234һ����λ*/
	
	printf("You are easily worth that! If rhodium price drop,\n");
	printf("eat more to maintain your value.\n");
	return 0;

}