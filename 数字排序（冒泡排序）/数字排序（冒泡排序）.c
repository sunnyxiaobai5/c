#include <stdio.h>
#define N 100
void main()
{
	int i,j,t,a[N],b,n;
	printf("请输入你要排序的数据个数:\n");
	scanf("%d",&n);
    printf("请输入你要排序的数:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
                a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}
}