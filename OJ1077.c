#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[101] = { '\0' };
	gets(str);
	int k;
	scanf("%d", &k);
	while (k >= 26)
	{
		k = k % 26;
	}
	int i, l;
	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			if (str[i] + k > 'Z')
			{
				str[i] = k - ('Z' - str[i] + 1) + 'A';
				//��ž���k��ȥ�����������Z�ľ����ٴ�A��ʼ��������
			}
			else
			{
				str[i] = str[i] + k;
			}
		}
		else if (str[i] >= 'a'&&str[i] <= 'z')
		{
			if (str[i] + k > 'z')
			{
				str[i] = k - ('z' - str[i] + 1) + 'a';
			}
			else
			{
				str[i] = str[i] + k;
			}
		}
		else
			continue;
	}
	puts(str);
	return 0;
}