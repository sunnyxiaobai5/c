#include<stdio.h>
void warshall(int k,int n)
{
	int i,j,t,a,b;
	int temp[20][20];
	for(a=0;a<k;a++)
	{
		printf("����������%d��Ԫ��:",a);
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
	printf("�ɴ��ݱհ���ϵ������:\n");
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
	printf("����Warshall�㷨���Ԫ��ϵ�Ŀɴ��ݱհ�\n");
	printf("��������������i: ");
	scanf("%d",&k);
	printf("��������������j: ");
	scanf("%d",&n);
	warshall(k,n);
}
