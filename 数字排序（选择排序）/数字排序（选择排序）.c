#include <stdio.h>
#define N 100
void main()
{
	int i,j,min,a[N],b,n,m;
	printf("��������Ҫ��������ݸ���:\n");
	scanf("%d",&n);
    printf("��������Ҫ�������:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		m=a[i];
		a[i]=a[min];
		a[min]=m;
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}
}