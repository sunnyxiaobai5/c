#include <stdio.h>
#define N 100
void main()
{
	int i,j,min,a[N],b,n,m;
	printf("请输入你要排序的数据个数:\n");
	scanf("%d",&n);
    printf("请输入你要排序的数:\n");
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