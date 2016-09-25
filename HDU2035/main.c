#include <stdio.h>
#include <stdlib.h>

int compute(int m,int n)
{
    if(n==0)
        return 1;
    return (compute(m,n-1)*m)%1000;
}
int main()
{
    int m,n,r;
    while(scanf("%d%d",&m,&n),m!=0&&n!=0)
    {
        r=compute(m,n);
        printf("%d\n",r);
    }
    return 0;
}
