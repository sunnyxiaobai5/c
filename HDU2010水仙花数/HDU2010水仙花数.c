//注意输出格式控制相当严格
#include <stdio.h>
int main()
{
    int n,m,i,j=0;    
    while(scanf("%d%d",&m,&n)!=EOF)
    {
      if(m>=100 && m<n && n<=999)
	  {
         for(i=m;i<=n;i++)
            {
               if(i==((i%10)*(i%10)*(i%10)+(i/10%10)*(i/10%10)*(i/10%10)+(i/100%10)*(i/100%10)*(i/100%10)))
               {
				   j++;
				   if(j==1)
					   printf("%d",i);
				   else
					   printf(" %d",i);
			   }
            }
		 if(j==0)
			 printf("no");
		 j=0;
         printf("\n");
      }
	  else return 1;
    }
    return 0;
}