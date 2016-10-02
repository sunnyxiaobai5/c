#include <stdio.h>
#include <math.h>
#define NUM 100

void input(int arr[NUM][NUM],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
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
void process(int arr[NUM][NUM],int m,int n)
{
    int i,j,max_row=0,max_col=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(abs(arr[max_row][max_col]) < abs(arr[i][j]))
            {
                max_row=i;
                max_col=j;
            }
        }
    }
    printf("%d %d %d\n",max_row+1,max_col+1,arr[max_row][max_col]);
}
int main()
{
	int m,n,i,sum,arr[NUM][NUM];
	while(scanf("%d%d",&m,&n)!=EOF)
    {
		input(arr,m,n);
        process(arr,m,n);
	}
	return 0;
}
