#include <stdio.h>
#include <string.h>
#define NUM 100

int main()
{
	int m,i,j,k,l,a[NUM];
	double result[NUM];
	scanf("%d",&m);
	memset(result,'\0',NUM);
	for(i=0;i<m;i++)
	{
        scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
	    int temp=a[j];
	    for(k=1;k<=temp;k++)
	    {
	        if(k%2==1)
            {
                result[j] += 1.0/k;
            }
            else
            {
                result[j] += -1.0/k;
            }
	    }
	}
	for(l=0;l<m;l++)
	{
        printf("%.2lf\n",result[l]);
	}

	return 0;
}
