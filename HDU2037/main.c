#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,result,t_s[100],t_e[100],a_s[100],a_e[100];
    while(scanf("%d",&n),n!=0)
    {
        result=0;
        k=0;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&t_s[i],&t_e[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                if((t_s[i]<a_e[j] && t_s[i]>=a_s[j]) || (t_e[i]<=a_e[j] && t_e[i]>a_s[j]) || (t_s[i]<=a_s[j] && t_e[i]>=a_e[j]))
                    break;
            }
            if(j==k)
            {
                result++;
                a_s[k]=t_s[i];
                a_e[k]=t_e[i];
                k++;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
