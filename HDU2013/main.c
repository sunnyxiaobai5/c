//���ӳ������� ÿ���һ���һ������n��ʣ1�����������������ж��ٸ��棬Ҫ������С��N
#include <stdio.h>
#define N 30
int main()
{
	int n,sum=1;
	while(scanf("%d",&n)!=EOF)
	{
        if(n>=N)
        {
            printf("����������ݹ���\n");
        }
        else
        {
            for(n=n-1;n>0;n--)
            {
                sum=(sum+1)*2;
            }
            printf("%d\n",sum);
        }
        sum=1;
	}
	return 0;
}
