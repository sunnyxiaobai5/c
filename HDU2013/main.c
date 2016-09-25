//猴子吃枣问题 每天吃一半多一个，第n天剩1个，输入天数，求共有多少个枣，要求天数小于N
#include <stdio.h>
#define N 30
int main()
{
	int n,sum=1;
	while(scanf("%d",&n)!=EOF)
	{
        if(n>=N)
        {
            printf("你输入的数据过大\n");
        }
        else
        {
            for(n=n-1;n>0;n--)
            {
                sum=(sum+1)*2;
            }
            printf("%d\n",sum);
        }
        sum=1;
	}
	return 0;
}
