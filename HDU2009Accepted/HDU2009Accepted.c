#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,i;
    float sum,n1;//����n1��Ŀ���ǽ���n��ֵ�����������ͱ��float
    while(sum=0,scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0,n1=n;i<m;i++) //i���ڴ˴����壬����Wrong Answer
        {
            sum+=n1;
            n1=sqrt(n1);
        }
        printf("%.2f\n",sum);
    }
    return 0;        
}
