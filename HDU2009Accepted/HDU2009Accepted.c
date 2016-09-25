#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,i;
    float sum,n1;//定义n1的目的是接收n的值，把数据类型变成float
    while(sum=0,scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0,n1=n;i<m;i++) //i若在此处定义，答案是Wrong Answer
        {
            sum+=n1;
            n1=sqrt(n1);
        }
        printf("%.2f\n",sum);
    }
    return 0;        
}
