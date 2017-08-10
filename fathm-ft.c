#include <stdio.h>
int main(void)
{
	int feet, fathoms;//Equals to int feet; int fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);// First %d for feet,another for fathoms.
	printf("Yes,I said %d feet!\n",feet);//Or 6 * fathoms,it's just a figure.

	return 0;


}