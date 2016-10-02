#include <stdio.h>
#include <stdlib.h>

void tran(int n,int r)
{
    if(n==0)
        return;
    tran(n/r,r);
    if(n%r>9)
        printf("%c",'A'+n%r-10);
    else
        printf("%d",n%r);
}
int main()
{
    int n,c;
    while(scanf("%d%d",&n,&c)!=EOF)
    {
        if(n<0)
        {
            printf("-");
            tran(-n,c);
        }
        else
            tran(n,c);
        printf("\n");
    }
    return 0;
}
