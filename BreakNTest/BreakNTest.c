#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<10;k++)
			{
				if(k==5)
					break;
			}
		}
	}
	printf("i=%d j=%d k=%d\n",i,j,k);
	return 0;
}
