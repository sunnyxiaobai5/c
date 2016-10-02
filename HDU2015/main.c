#include <stdio.h>
#define NUM 100
int main()
{
    int m,n,i,init,base;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        init=n+1;
        base=0;
        for(i=1;i<=m/n;i++,base+=n*2)
        {
            if(i==m/n)
            {
                printf("%d",init+base);
            }
            else
            {
                printf("%d ",init+base);
            }
        }
        if((m%n)!=0)
        {
            init=m%n+1;
            printf(" %d",init+base);
        }
        printf("\n");
    }

    return 0;
}
