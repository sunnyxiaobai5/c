#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=90,y=100,n=0;
	while(y>0)
	{
		n++;
		if(x>100)
		{
			x=x-10;
			y--;
		}
		else
			x++;
	}
	printf("��ִ��%d��",n);
	return 0;
}
