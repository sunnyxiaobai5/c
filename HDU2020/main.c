#include <stdio.h>
#include <math.h>
#define NUM 100

void input(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
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
void process(int arr[],int n)
{
    int i,j,max,temp;
    for(i=0;i<n-1;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(abs(arr[max])<abs(arr[j]))
            {
                max=j;
            }
        }
		temp=arr[i];
		arr[i]=arr[max];
		arr[max]=temp;
    }
}
int main()
{
	int m,arr[NUM];
	while(scanf("%d",&m))
    {
		if(m==0)
		{
			break;
		}
		input(arr,m);
		process(arr,m);
		output(arr,m);
	}
	return 0;
}
