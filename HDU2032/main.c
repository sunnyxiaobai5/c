#include <stdio.h>
#include <stdlib.h>
#define LEVEL 30

int main()
{
    int n, i, j, arr[LEVEL][LEVEL]={{'\0'}};
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j==0 || i==j)
                    arr[i][j]=1;
                else
                {
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(i==j)
                    printf("%d",arr[i][j]);
                else
                    printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
