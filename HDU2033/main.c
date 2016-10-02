#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, arr[6],result[3], plus;
    scanf("%d",&n);
    while(n--)
    {
        plus=0;
        for(i=0;i<6;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=2;i>=0;i--)
        {
            if(i==0)
            {
                result[i]=arr[i]+arr[i+3]+plus;
            }
            else
            {
                result[i]=(arr[i+3]+arr[i]+plus)%60;
                if((arr[i+3]+arr[i]+plus)>59)
                    plus=1;
                else
                    plus=0;            }
        }
        for(i=0;i<3;i++)
        {
            if(i==2)
                printf("%d\n",result[i]);
            else
                printf("%d ",result[i]);
        }
    }
    return 0;
}
