#include <stdio.h>
#define N 100
int main()
{
	int i,j,n;
	char a[N][50]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j!='\n';j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j!='\n';j++)
		{
			if(a[i][j]=='z')
			{
				a[i][j]='a';
			}
			else if(a[i][j]=='Z')
			{
				a[i][j]='A';
			}
			else
			{
				a[i][j]=a[i][j]+1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<50;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}