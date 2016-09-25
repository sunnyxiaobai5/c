#include <stdio.h>
/*
int f(int a,int b)
{
    return b==0?a:f(b,a%b);
}
int main()
{
    int n,r,m;
    while(scanf("%d",&n)!=EOF)
    {
        r=1;
        while(n--)
        {
            scanf("%d",&m);
            r=r/f(m,r)*m;
        }
        printf("%d\n",r);
    }
    return 0;
}
*/
//递归最大公约数
int  fact_gcd(int grater,int smaller)
{
    if(smaller==0)
        return grater;
    fact_gcd(smaller,grater%smaller);
}
//循环最大公约数
int gcd(int grater,int smaller)
{
    if(smaller==0)
        return grater;
    while(grater%smaller!=0)
    {
        int temp;
        temp=smaller;
        smaller=grater%smaller;
        grater=temp;
    }
    return smaller;
}
int lcm(int grater,int smaller)
{
    return grater*(smaller/fact_gcd(grater,smaller));//grater*smaller/fact_gcd(grater,smaller)不能AC
}

int main()
{
    int n,result,m;
    while(scanf("%d",&n)!=EOF)
    {
        result=1;
        while(n--)
        {
            scanf("%d",&m);
            result=lcm(m,result);
        }
        printf("%d\n",result);
    }
    return 0;
}
