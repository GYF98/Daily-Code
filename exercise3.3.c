#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("dec=%d;octal=%o;hex=%x\n", x, x, x );
	/*binary�����Ƶ� octal�˽��Ƶ� decimalʮ���Ƶ� hexadecimalʮ�����Ƶ�*/
	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);
	return 0;

}