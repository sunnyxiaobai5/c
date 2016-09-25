#include <stdio.h>
#define N 15
void main()
{
	int i,j,k,b=0,c=0;
	int a[N+1][N+1]={' '};
	a[N/2][N/2]=0;
	for(i=0,j=1;i<N;i++,j++)
	{
		if(i%2==0)
		{
			for(k=0;k<j;k++)
			{
				a[N/2+c][N/2+b+k+1]=a[N/2+c][N/2+b+k]+1;
			}
			b=b+k;

			for(k=0;k<j;k++)
			{
				a[N/2+c-k-1][N/2+b]=a[N/2+c-k][N/2+b]+1;
			}
			c=c-k;
		}
		else
		{
			for(k=0;k<j;k++)
			{
				a[N/2+c][N/2+b-k-1]=a[N/2+c][N/2+b-k]+1;
			}
			b=b-k;

			for(k=0;k<j;k++)
			{
				a[N/2+c+k+1][N/2+b]=a[N/2+c+k][N/2+b]+1;
			}
			c=c+k;
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",a[i][j]);
		}
		puts("\n");
	}
}
