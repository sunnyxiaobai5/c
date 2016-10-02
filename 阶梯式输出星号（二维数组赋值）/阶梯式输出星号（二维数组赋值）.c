#include <stdio.h>
#define M 5   //只需改M值即可获得任意列数的输出
#define N 2*M+3
void main()
{
	int i,j,a[M][N]={0};
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if(j>=i*2 && j<2*i+5)
			{
				a[i][j]='*';
			}
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%c",a[i][j]);
		}
			printf("\n");
	}
}