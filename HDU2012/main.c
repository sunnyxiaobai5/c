#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a(int n)
{
    int i,flag=1;
    n=n*n+n+41;
    for(i=2;i<=pow(n,0.5);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int start,end,i;
    int flag=1;
    while(scanf("%d%d",&start,&end)!=EOF && !(start==0 && end==0))
    {
        for(i=start;i<=end;i++)
        {
            flag=a(i);
            if(!flag)
                break;
        }
        if(flag)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;
}
