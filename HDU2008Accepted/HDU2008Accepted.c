#include <stdio.h>
int main()
{
    int n,i,a,b,c;
	float m;
    while(a=0,b=0,c=0,scanf("%d",&n)!=EOF)
    {
		//ע��˴�����n���жϣ����㵱n=0ʱ��ʾ�������������֮�⣬��Ӧ���ų�С��0�ʹ���100������Accepted
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