#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,m;
	scanf("%d", &n);
	double sum = 0.0;
	double flag = 1.0;
	for (m = 1; sum <= n; m++)
	{
		sum = sum + flag;
		flag = flag*(m + 1);
	}
	printf("m<=%d", m-2);//m��ѭ��һ�κ�ض���һ���ϸ�ѭ����sum�Ѿ�����n�����������m��������һ��ѭ���������m
	return 0;

}