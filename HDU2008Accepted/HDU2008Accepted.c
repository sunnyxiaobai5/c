#include <stdio.h>
int main()
{
    int n,i,a,b,c;
	float m;
    while(a=0,b=0,c=0,scanf("%d",&n)!=EOF)
    {
		//注意此处对于n的判断，满足当n=0时表示输入结束，除此之外，还应该排除小于0和大于100，不能Accepted
        if(n<=0 || n>100)
           return 0;
        for(i=0;i<n;i++)
        {
            scanf("%f",&m);
            if(m<0)
               a++;
            else if(m==0)
               b++;
            else
               c++;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}