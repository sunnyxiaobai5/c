#include <stdio.h>
#define N 100
void main()
{
	int i,j,t,a[N],b,n;
	printf("��������Ҫ��������ݸ���:\n");
	scanf("%d",&n);
    printf("��������Ҫ�������:\n");
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