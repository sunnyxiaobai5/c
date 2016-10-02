#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[3];
    char s1,s3;
    while(gets(c)&&strlen(c)>0)
    {
        s1=c[0]<c[1]?(c[0]<c[2]?c[0]:c[2]):(c[1]<c[2]?c[1]:c[2]);
        s3=c[0]>c[1]?(c[0]>c[2]?c[0]:c[2]):(c[1]>c[2]?c[1]:c[2]);
        printf("%c",s1);
        if(c[0]!=s1 && c[0]!=s3)
            printf(" %c",c[0]);
        if(c[1]!=s1 && c[1]!=s3)
            printf(" %c",c[1]);
        if(c[2]!=s1 && c[2]!=s3)
            printf(" %c",c[2]);
        printf(" %c\n",s3);
    }
    return 0;
}
