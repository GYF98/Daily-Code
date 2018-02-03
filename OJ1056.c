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
	printf("m<=%d", m-2);//m在循环一次后必定加一，上个循环的sum已经大于n，所以所求的m就是上上一个循环结束后的m
	return 0;

}