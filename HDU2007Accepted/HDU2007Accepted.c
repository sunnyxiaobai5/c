#include <stdio.h>
int main()
{
   int a,b,x,y,i;
   while(x=0,y=0,scanf("%d%d",&a,&b)!=EOF)
   {
     if(a>b)
      {
         a=a^b;
         b=a^b;
         a=a^b;
      }
      for(i=a;i<=b;i++)
      {
         if(i%2==0)
            x+=i*i;
         else
            y+=i*i*i;
      }
	  printf("%d %d\n",x,y);
	  x=0;
	  y=0;
   }
   return 0;
}
/*
注意判断a,b值大小关系的问题,若a大于b,应该交换其值,否则不能通过HDU
#include <stdio.h>
int main()
{
   int a,b,x,y;
   while(x=0,y=0,scanf("%d%d",&a,&b)!=EOF)
   {
      if(a>b)
      {
         a=a^b;
         b=a^b;
         a=a^b;
      }
      for(int i=a;i<=b;i++)
      {
         if(i%2==0)
            x+=i*i;
         else
            y+=i*i*i;
	  }
	  printf("%d %d\n",x,y);
   }
   return 0;
}
*/