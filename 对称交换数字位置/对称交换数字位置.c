#include <stdio.h>
#define N 100
main()
{
	int i,j,k,m,n,Num[N];
	printf("���������鳤��:\n");
	scanf("%d",&n);
	printf("������:\n");
	for(i=0;i<n;i++)
	   {
		   scanf("%d",&Num[i]);
	   }

	printf("����ǰ: ");
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

	printf("������: ");
	for(i=0;i<j;i++)
	{
		printf("%-5d",Num[i]);
	}
	printf("\n");
}