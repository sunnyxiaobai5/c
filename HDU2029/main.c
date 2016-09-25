#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    int n,i,len;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(s);
        for(i=0;i<((len=strlen(s))/2);i++)
        {
            if(s[i]!=s[len-i-1])
            {
                printf("no\n");
                break;
            }
        }
        if(i==(len/2
               ))
            printf("yes\n");
    }
    return 0;
}
