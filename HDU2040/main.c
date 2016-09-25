#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(f(a)==b || f(b)==a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
