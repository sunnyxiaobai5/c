#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,count;
    while(scanf("%d%d",&m,&n))
    {
        int a[100]={'\0'};
        int b[100]={'\0'};
        int result[100]={'\0'};
        count=0;
        if(m==0 && n==0)
            break;
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    a[i]='\0';
                    break;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            if(a[i]!='\0')
            {
                result[count]=a[i];
                count++;
            }
        }
        if(count==0)
            printf("NULL");
        else
        {
            int temp;
            for(i=0;i<count;i++)
            {
                for(j=i;j>0;j--)
                {
                    if(result[j]<result[j-1])
                    {
                        temp=result[j];
                        result[j]=result[j-1];
                        result[j-1]=temp;
                    }
                }
            }
            for(i=0;i<count;i++)
            {
                printf("%d ",result[i]);
            }
        }
        printf("\n");

    }
    return 0;
}
