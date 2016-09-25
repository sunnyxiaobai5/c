#include <stdio.h>
#define NUM 100

int main()
{
	int m,n,i,arr[NUM],flag;
	while(scanf("%d%d",&m,&n))
    {
		flag=0;
		if(m==0 && n==0)
		{
			break;
		}
		for(i=0;i<m;i++)
		{
			scanf("%d",&arr[i]);
			if(!flag && arr[i]>n)
			{
				arr[i+1]=arr[i];
				arr[i++]=n;
				m++;
				flag=1;
			}
		}
		if(!flag)
		{
			arr[i]=n;
			m++;
		}

		for(i=0;i<m;i++)
		{
			if(i==0)
			{
				printf("%d",arr[i]);
			}
			else
			{
				printf(" %d",arr[i]);
			}
        }
        printf("\n");
	}

	return 0;
}
