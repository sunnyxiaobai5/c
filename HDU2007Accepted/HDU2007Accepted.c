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
ע���ж�a,bֵ��С��ϵ������,��a����b,Ӧ�ý�����ֵ,������ͨ��HDU
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