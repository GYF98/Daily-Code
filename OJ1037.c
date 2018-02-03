#include <stdio.h>
int main(void)
{
	double s1, s2;
	char op;
	scanf("%lf %c %lf", &s1, &op, &s2);
	switch (op)
	{
	case'+':printf("%.2lf", s1 + s2); break;
	case'-':printf("%.2lf", s1 - s2); break;
	case'*':printf("%.2lf", s1*s2); break;
	case'/':
		if (fabs(s2) <= 1e-11)
		{
			printf("Wrong input");
		}
		else
		{
			printf("%.2lf", s1 / s2);
		}
		break;
	default:printf("Wrong input");break;
	}
	return 0;
}