#include <stdio.h>
#define MAX 1000
int main()
{
    int a[MAX];
    int n,sum=1,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           if(a[i]%2==1)
           sum*=a[i];
        }
        printf("%d\n",sum);
		sum=1;
    }
    return 0;
}
/*
由于vc编译器问题，以下代码将将出错，但是在HDU上Accepted
#include <stdio.h>
#define MAX 1000
int main()
{
    int a[MAX];
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
		   int sum=1;
           scanf("%d",&a[i]);
           if(a[i]%2==1)
              sum*=a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
*/