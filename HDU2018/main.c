#include <stdio.h>
#include <stdlib.h>

int count(int n)
{
    if(n>4)
        return count(n-1)+count(n-3);
    else
        return n;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        printf("%d\n",count(n));
    }
    return 0;
}
