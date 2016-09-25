#include <stdio.h>
#define N 10
void main()
{
	int i,j,m,a[N][N];
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || j==i)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=0;i<N;i++)
	{
		for(m=N;m>i;m--)
		{
			printf("  ");
		}

		for(j=0;j<=i;j++)
		{
			printf("%4d",a[i][j]);
		}
		puts("\n");
	}
}