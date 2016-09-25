#include <stdio.h>
#define A 15  //对角线的星数
#define M (2*A-1)  //排数
#define N (4*A-3)  //总列数（包跨空格数）
void main()
{
	int i,j,a[M][N]={' '};
	if(A%2==0)
	{
		for(i=0;i<A;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i%2==1)
				{
					if(j%4==0 && (N-1)/2-2*i<=j && j<=(N-1)/2+2*i)
					{
						a[i][j]='*';
					}
				}
				else
				{
					if((j+2)%4==0 && (N-1)/2-2*i<=j && j<=(N-1)/2+2*i)
					{
						a[i][j]='*';
					}
				}
			}
		}
		for(i=A;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i%2==1)
				{
					if(j%4==0 && (i-A+1)*2<=j && j<=(N-1)-2*(i-A+1))
					{
						a[i][j]='*';
					}
				}
				else
				{
					if((j+2)%4==0 && (i-A+1)*2<=j && j<=(N-1)-2*(i-A+1))
					{
						a[i][j]='*';
					}
				}
			}
		}
	}

	else
	{
		for(i=0;i<A;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i%2==0)
				{
					if(j%4==0 && (N-1)/2-2*i<=j && j<=(N-1)/2+2*i)
					{
						a[i][j]='*';
					}
				}
				else
				{
					if((j+2)%4==0 && (N-1)/2-2*i<=j && j<=(N-1)/2+2*i)
					{
						a[i][j]='*';
					}
				}
			}
		}
		for(i=A;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				if(i%2==0)
				{
					if(j%4==0 && (i-A+1)*2<=j && j<=(N-1)-2*(i-A+1))
					{
						a[i][j]='*';
					}
				}
				else
				{
					if((j+2)%4==0 && (i-A+1)*2<=j && j<=(N-1)-2*(i-A+1))
					{
						a[i][j]='*';
					}
				}
			}
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%c",a[i][j]);
		printf("\n");
	}
}