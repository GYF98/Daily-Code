#include<stdio.h>
void PrintTime(int s)
{
	int h, m, s0;
	h = s / 3600;
	m = s % 3600 / 60;
	s0 = s % 60;
	printf("%02d:%02d:%02d\n", h, m, s0);
}
int HmsToS(int h, int m,int s)
{
	int s1;
		s1 = h * 3600 + m * 60 + s;
		return s1;
}
int main(void)
{
	int h, m, s, h0, m0, s0;
	
	while (scanf("%d%*c%d%*c%d", &h0, &m0, &s0)!=EOF)
	{
		scanf("%d%*c%d%*c%d", &h, &m, &s);
		PrintTime(HmsToS(h, m, s) - HmsToS(h0, m0, s0));
	}
	return 0;
}