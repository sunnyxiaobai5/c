#include <stdio.h>
#define N 100
main()
{
	int i,j,k,m,n,Num[N];
	printf("请输入数组长度:\n");
	scanf("%d",&n);
	printf("请输入:\n");
	for(i=0;i<n;i++)
	   {
		   scanf("%d",&Num[i]);
	   }

	printf("交换前: ");
	for(i=0;i<n;i++)
	{
		printf("%-5d",Num[i]);
	}
	printf("\n");

	m=n/2;j=n;
	for(i=0;i<m;i++)
	{
		k=Num[i];
		Num[i]=Num[j-i-1];
		Num[j-i-1]=k;
	}

	printf("交换后: ");
	for(i=0;i<j;i++)
	{
		printf("%-5d",Num[i]);
	}
	printf("\n");
}