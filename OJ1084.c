#include<stdio.h>
#include<math.h>
int main(void)
{
	double s, h, x1, x2, y1, y2;
	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF)
	{
		h = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		s = sqrt(h);
		printf("%.2lf\n", s);
	}
}