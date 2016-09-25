#include<stdio.h>
void warshall(int k,int n)
{
	int i,j,t,a,b;
	int temp[20][20];
	for(a=0;a<k;a++)
	{
		printf("请输入矩阵第%d行元素:",a);
		for(b=0;b<n;b++)
		{
			scanf ("%d",&temp[a][b]);
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			if(temp[j][i]==1)
			{
				for(t=0;t<n;t++)
				{
					temp[j][t]=temp[i][t]||temp[j][t];
				}
			}
		}
	}
	printf("可传递闭包关系矩阵是:\n");
	for(i=0;i<k;i++)
	{
		printf("\t\t");
			for(j=0;j<n;j++)
			{
				printf("%d", temp[i][j]);
			}
			printf("\n");
	}
}
void main()
{
	void warshall(int,int);
	int k,n;
	printf("利用Warshall算法求二元关系的可传递闭包\n");
	printf("请输入矩阵的行数i: ");
	scanf("%d",&k);
	printf("请输入矩阵的列数j: ");
	scanf("%d",&n);
	warshall(k,n);
}
