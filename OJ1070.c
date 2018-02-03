#include<stdio.h>
int main(void)
{
	int time, time0, command,direct, pointx, pointy;
	command = 0;
	time = 0;
	pointx = 0;
	pointy = 0;
	direct = 0;
	while (command != 3)
	{
		scanf("%d %d", &time0, &command);
		if (time == 0)
			pointy = time0 * 10;

		if (command == 1)
		{
			direct = direct - 1;
			if (direct < 0)
				direct = 3;
		}
		else if (command == 2)
		{
			direct = direct + 1;
			if (direct > 3)
				direct = 0;
		}
		else if (command == 3)
			break;

		if (direct == 0)
			pointy = pointy+(time0 - time) * 10;
			
		else if(direct==1)
				pointx=pointx+ (time0 - time) * 10;

	    else if(direct==2)
			pointy = pointy - (time0 - time) * 10;
			
		else if(direct==3)
			pointx = pointx - (time0 - time) * 10;
		time = time0;
	}
	printf("%d %d", pointx, pointy);
	return 0;
}