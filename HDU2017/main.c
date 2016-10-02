#include <stdio.h>
#include <string.h>
#define NUM 100

int main()
{
	int m,i,n,sum;
	char str[NUM];
	scanf("%d",&m);
	gets(str);
    for(i=0;i<m;i++)
    {
        sum=0;
        n=0;
	    gets(str);
        while(str[n]!='\0')
        {
            if('0'<=str[n] && str[n]<='9')
            {
                sum++;
            }
            n++;
        }
        printf("%d\n",sum);
    }

	return 0;
}
